class GameEvent
{
    public:
        GameEvent()
        {
            description = "";
            money = 0;
            health = 0;
        }
        GameEvent(string _description, int _moneyIncr, int _healthIncr)
        {
            description = _description;
            moneyIncr = _moneyIncr;
            healthIncr = _healthIncr;
        }

    private:
        string description;
        int    moneyIncr;
        int    healthIncr;
}
