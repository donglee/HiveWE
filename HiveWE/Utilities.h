#pragma once

//unsigned char* SOIL_load_image_flipped(const char *filename, int *width, int *height, int *channels, int force_channels);

class Shapes {
public:
	void init();

	GLuint vertex_buffer;
	GLuint index_buffer;

	const std::vector<glm::vec2> quad_vertices = {
		{ 1, 1 },
		{ 0, 1 },
		{ 0, 0 },
		{ 1, 0 }
	};

	const std::vector<glm::uvec3> quad_indices = {
		{ 0, 3, 1 },
		{ 1, 3, 2 }
	};
};

std::vector<std::string> split(const std::string& string, char delimiter);

GLuint compile_shader(const fs::path vertex_shader, const fs::path fragment_shader);
GLuint compile_shader(const std::string vertexShader, const std::string fragmentShader);

std::string read_text_file(std::string path);

fs::path find_warcraft_directory();

extern QOpenGLFunctions_4_5_Core* gl;
extern Shapes shapes;