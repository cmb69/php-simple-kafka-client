/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 72b2c9a25e8751ae022cc233f4b7a0e382be72f8 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SimpleKafkaClient_TopicPartition___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, topicName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, partition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, offset, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_SimpleKafkaClient_TopicPartition_getTopicName, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_SimpleKafkaClient_TopicPartition_setTopicName, 0, 1, SimpleKafkaClient\\TopicPartition, 0)
	ZEND_ARG_TYPE_INFO(0, topicName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_SimpleKafkaClient_TopicPartition_getPartition, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_SimpleKafkaClient_TopicPartition_setPartition, 0, 1, SimpleKafkaClient\\TopicPartition, 0)
	ZEND_ARG_TYPE_INFO(0, partition, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_SimpleKafkaClient_TopicPartition_getOffset arginfo_class_SimpleKafkaClient_TopicPartition_getPartition

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_SimpleKafkaClient_TopicPartition_setOffset, 0, 1, SimpleKafkaClient\\TopicPartition, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(SimpleKafkaClient_TopicPartition, __construct);
ZEND_METHOD(SimpleKafkaClient_TopicPartition, getTopicName);
ZEND_METHOD(SimpleKafkaClient_TopicPartition, setTopicName);
ZEND_METHOD(SimpleKafkaClient_TopicPartition, getPartition);
ZEND_METHOD(SimpleKafkaClient_TopicPartition, setPartition);
ZEND_METHOD(SimpleKafkaClient_TopicPartition, getOffset);
ZEND_METHOD(SimpleKafkaClient_TopicPartition, setOffset);


static const zend_function_entry class_SimpleKafkaClient_TopicPartition_methods[] = {
	ZEND_ME(SimpleKafkaClient_TopicPartition, __construct, arginfo_class_SimpleKafkaClient_TopicPartition___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(SimpleKafkaClient_TopicPartition, getTopicName, arginfo_class_SimpleKafkaClient_TopicPartition_getTopicName, ZEND_ACC_PUBLIC)
	ZEND_ME(SimpleKafkaClient_TopicPartition, setTopicName, arginfo_class_SimpleKafkaClient_TopicPartition_setTopicName, ZEND_ACC_PUBLIC)
	ZEND_ME(SimpleKafkaClient_TopicPartition, getPartition, arginfo_class_SimpleKafkaClient_TopicPartition_getPartition, ZEND_ACC_PUBLIC)
	ZEND_ME(SimpleKafkaClient_TopicPartition, setPartition, arginfo_class_SimpleKafkaClient_TopicPartition_setPartition, ZEND_ACC_PUBLIC)
	ZEND_ME(SimpleKafkaClient_TopicPartition, getOffset, arginfo_class_SimpleKafkaClient_TopicPartition_getOffset, ZEND_ACC_PUBLIC)
	ZEND_ME(SimpleKafkaClient_TopicPartition, setOffset, arginfo_class_SimpleKafkaClient_TopicPartition_setOffset, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};
