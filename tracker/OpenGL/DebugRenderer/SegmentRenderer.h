#pragma once
#include "tracker/Types.h"
#include "tracker/OpenGL/GeometricPrimitiveRenderer.h"

class SegmentRenderer : public GeometricPrimitiveRenderer {

public:
	SegmentRenderer(const std::vector<pair<Vector3, Vector3>>& segments, const std::vector<Vector3>& colors, std::string data_path);

	SegmentRenderer(const std::vector<pair<Vector3, Vector3>>& segments, Vector3 color, std::string data_path);

    void render();
};
