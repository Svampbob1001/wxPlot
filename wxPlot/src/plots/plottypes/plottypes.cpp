#include "plottypes.h"

void PlotTypes::setWxPlotFigureType(const WXPLOT_FIGURE wxPlotFigure, const WXPLOT_TYPE wxPlotType) {
	this->wxPlotFigure = wxPlotFigure;
	_2d.setWxPlotType(wxPlotType);
}

void PlotTypes::setRadius(const wxCoord radius) {
	_2d.setRadius(radius);
}

void PlotTypes::fillCircles(const bool fillCircle) {
	_2d.fillCircles(fillCircle);
}

void PlotTypes::setData(const std::vector<std::vector<double>>& data) {
	_2d.setData(data);
}

void PlotTypes::setPlotStartWidth(const wxCoord plotStartWidth) {
	_2d.setPlotStartWidth(plotStartWidth);
}

void PlotTypes::setPlotStartHeight(const wxCoord plotStartHeight) {
	_2d.setPlotStartHeight(plotStartHeight);
}

void PlotTypes::setPlotEndWidth(const wxCoord plotEndWidth) {
	_2d.setPlotEndWidth(plotEndWidth);
}

void PlotTypes::setPlotEndHeight(const wxCoord plotEndHeight) {
	_2d.setPlotEndHeight(plotEndHeight);
}

void PlotTypes::drawType(wxDC& dc) {
	switch (wxPlotFigure) {
	case WXPLOT_FIGURE_2D:
		_2d.drawType(dc);
		break;
	default:
		_2d.drawType(dc);
		break;
	}
}