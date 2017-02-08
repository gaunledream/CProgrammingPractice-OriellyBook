.PHONY: clean All

All:
	@echo "----------Building project:[ FinalProject_stat - Debug ]----------"
	@cd "FinalProject_stat" && "$(MAKE)" -f  "FinalProject_stat.mk"
clean:
	@echo "----------Cleaning project:[ FinalProject_stat - Debug ]----------"
	@cd "FinalProject_stat" && "$(MAKE)" -f  "FinalProject_stat.mk" clean
