#include <NPC.h>

NPC::NPC(){};
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;
	if (!m_texture.loadFromFile("ASSETS/IMAGES/barrelGreen_side.png"))
	{
		std::cout << "error loading image" << std::endl;
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(400, 400);
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
	m_sprite.setPosition(400, m_sprite.getPosition().y + i);

	if (m_sprite.getPosition().y > 600)
	{
		m_sprite.setPosition(400, -40);
	}

	if (m_sprite.getPosition().y < -60)
	{
		m_sprite.setPosition(400, 600);
	}

}
void NPC::draw(sf::RenderWindow * t_window)
{
	//cout << "NPC drawing" << endl;
	t_window->draw(m_sprite);

}

void NPC::changeI()
{
	i = -i;
}

sf::Sprite NPC::getSprite()
{
	return m_sprite;
}

