cmd_1e503bd54a3202563f41fd42b65a8e3435795828.intermediate := LD_LIBRARY_PATH=/home/cyb/nodejs/node-v12.14.0/out/Release/lib.host:/home/cyb/nodejs/node-v12.14.0/out/Release/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd ../.; mkdir -p /home/cyb/nodejs/node-v12.14.0/out/Release/obj/gen/src/node/inspector/protocol; python tools/inspector_protocol/code_generator.py --jinja_dir tools/inspector_protocol --output_base "/home/cyb/nodejs/node-v12.14.0/out/Release/obj/gen/src/" --config src/inspector/node_protocol_config.json