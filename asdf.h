// class ExtEcoGoods : public Goods {
//     float GetMarketVolumeOrders(){
//         return (Goods.GetMarketBuyOrders() + Goods.GetMarketSellOrders());
//     }

//     float GetMarketBuyOrdersWithTooltip(){
//         float volume = Goods.GetMarketBuyOrders() + Goods.GetMarketSellOrders();
//         if (volume < 1000){
//             return volume;
//         } else if (volume >= 1000) {
//             return ((volume / 1000) + ' k');
//         } else if (volume >= 1000000){
//             return ((volume/1000000)+' M');
//         }
//     }    f

// }