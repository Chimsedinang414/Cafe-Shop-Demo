#pragma once
using namespace System;

public ref class OrderStats {
	public:
		String^ timestamp;
		int totalItems;
		double totalPrice;

		OrderStats(String^ ts, int items, double price) {
			timestamp = ts;
			totalItems = items;
			totalPrice = price;
		}
};