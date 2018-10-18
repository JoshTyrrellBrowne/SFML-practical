#include <Player.h>

Player::Player(){};
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;

	if (!m_texture.loadFromFile("ASSETS/IMAGES/barrelGreen_side.png"))
	{
		std::cout << "error loading image" << std::endl;
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(400, 10);

}
void Player::update()
{
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow * t_window)
{
	//cout << "Player drawing" << endl;
	t_window->draw(m_sprite);
}

sf::Sprite Player::getSprite()
{
	return m_sprite;
}
