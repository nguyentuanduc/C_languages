public WeatherData implements Subject {
	private ArrayList observers;
	private float temperatures;
	private	float humidity; 
	private float pressure;
	
	public WeatherData(){
		observers = new ArrayList();	
	}

	public void registerObserver(Observer o){
		observers.add(o);
	}
	
	public void removeObserver(Observer o){
		int i = observers.indexOf(o);
		if(i >= 0){
			observers.remove(i);
		}
	}
	
	public void notifyObserver(){
		for(int i = 0; i < observers.size(); i++){
			
		}
	}
}











