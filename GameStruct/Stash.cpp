//这个技术看上去很复杂，很高级
//不过反而不如原始的好用呢
//void  Paddle_KeyHandler(SDL_Event* event, PhyJson* TagetPhy)
//{
//    //让这个函数可以用于监控两个对象的按键
//    SDL_Keycode WatcherKeyUp = SDLK_UNKNOWN;
//    SDL_Keycode WatcherKeyDown = SDLK_UNKNOWN;
//    if (TagetPhy->Json_Type.paddle_type == Type::_PADDLETYPE::Left)
//    {
//        WatcherKeyUp = SDLK_w;
//        WatcherKeyDown = SDLK_s;
//    }
//    if (TagetPhy->Json_Type.paddle_type == Type::_PADDLETYPE::Right)
//    {
//        WatcherKeyUp = SDLK_UP;
//        WatcherKeyDown = SDLK_DOWN;
//    }
//    switch (event->type) {
//
//    case SDL_KEYDOWN:
//        if (event->key.keysym.sym == WatcherKeyUp)
//            TagetPhy->velocity.y = -150;
//        //这个数值要大一点，否则会让强制转换后的位移变成0或者太小
//        if (event->key.keysym.sym == WatcherKeyDown)
//            TagetPhy->velocity.y = 150;
//        //一般来说，不采用加上或减去的形式，否则可能导致过大
//        //不过，对于带加速的游戏来说，这或许是一个好的方法
//        break;
//    case SDL_KEYUP:
//        TagetPhy->velocity.y = 0;
//        break;
//    }
//
//}
//
//void Stand_Draw_Fun(PhyJson* drawptr, SDL_Texture* _texture)
//
//

/*如何把一个方形区域注册为surf
* 0:表面创建方式，0000掩码，32：颜色的位数
surf = SDL_CreateRGBSurface(0, Paddle->width, Paddle->height, 32, 0, 0, 0, 0);
    SDL_FillRect(surf, NULL, SDL_MapRGB(surf->format, 255, 0, 0));
    texture = SDL_CreateTextureFromSurface(renderer, surf);

    //color是一个SDL_Color类型
    Uint32 redColor = SDL_MapRGB(surface->format, color.r, color.g, color.b);

*/
