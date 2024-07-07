#define CROW_ENABLE_SSL
#include <openssl/ssl.h>
#include "crow.h"
#include <iostream>

int main() {
	crow::SimpleApp app;

	CROW_ROUTE(app, "/")([]() {
		std::cout << "Received and responded with 'Succesful'" << std::endl;
		return "Successful";
		});

	CROW_ROUTE(app, "/").methods(crow::HTTPMethod::Post)([]() {
		std::cout << "POST Request received and responded" << std::endl;
		return "Test";
	});

	app.ssl_file("ssl/cert.pem", "ssl/key.pem");//

	app.port(18080).multithreaded().run();
	return 0;
}

