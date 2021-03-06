/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/AsyncClient.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/Stream.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class PubSubStreamingServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "PubSubStreamingService";
  }

  virtual void returnstream(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
  virtual void returnstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 private:
  virtual void returnstreamImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual apache::thrift::SemiStream<int32_t> sync_returnstream(int32_t i32_from, int32_t i32_to);
  virtual apache::thrift::SemiStream<int32_t> sync_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  virtual folly::Future<apache::thrift::SemiStream<int32_t>> future_returnstream(int32_t i32_from, int32_t i32_to);
  virtual folly::SemiFuture<apache::thrift::SemiStream<int32_t>> semifuture_returnstream(int32_t i32_from, int32_t i32_to);
  virtual folly::Future<apache::thrift::SemiStream<int32_t>> future_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  virtual folly::SemiFuture<apache::thrift::SemiStream<int32_t>> semifuture_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  virtual folly::Future<std::pair<apache::thrift::SemiStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  virtual folly::SemiFuture<std::pair<apache::thrift::SemiStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  virtual void returnstream(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i32_from, int32_t i32_to);
  static folly::exception_wrapper recv_wrapped_returnstream(apache::thrift::SemiStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::SemiStream<int32_t> recv_returnstream(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::SemiStream<int32_t> recv_instance_returnstream(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_returnstream(apache::thrift::SemiStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void returnstreamT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual void takesstream(std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual void takesstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
 private:
  virtual void takesstreamImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
 public:
  virtual void sync_takesstream(apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual void sync_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::Future<folly::Unit> future_takesstream(apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::SemiFuture<folly::Unit> semifuture_takesstream(apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::Future<folly::Unit> future_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::SemiFuture<folly::Unit> semifuture_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual void takesstream(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  static folly::exception_wrapper recv_wrapped_takesstream(::apache::thrift::ClientReceiveState& state);
  static void recv_takesstream(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_takesstream(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_takesstream(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void takesstreamT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
 public:
  virtual void different(std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual void different(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
 private:
  virtual void differentImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
 public:
  virtual apache::thrift::SemiStream<std::string> sync_different(apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual apache::thrift::SemiStream<std::string> sync_different(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual folly::Future<apache::thrift::SemiStream<std::string>> future_different(apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual folly::SemiFuture<apache::thrift::SemiStream<std::string>> semifuture_different(apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual folly::Future<apache::thrift::SemiStream<std::string>> future_different(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual folly::SemiFuture<apache::thrift::SemiStream<std::string>> semifuture_different(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual folly::Future<std::pair<apache::thrift::SemiStream<std::string>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_different(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual folly::SemiFuture<std::pair<apache::thrift::SemiStream<std::string>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_different(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  virtual void different(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
  static folly::exception_wrapper recv_wrapped_different(apache::thrift::SemiStream<std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::SemiStream<std::string> recv_different(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::SemiStream<std::string> recv_instance_different(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_different(apache::thrift::SemiStream<std::string>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void differentT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo, int64_t firstparam);
 public:
  virtual void normalthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
  virtual void normalthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
 private:
  virtual void normalthrowsImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
 public:
  virtual void sync_normalthrows(apache::thrift::Stream<int32_t> foo);
  virtual void sync_normalthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_normalthrows(apache::thrift::Stream<int32_t> foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_normalthrows(apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_normalthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_normalthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_normalthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_normalthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual void normalthrows(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> foo);
  static folly::exception_wrapper recv_wrapped_normalthrows(::apache::thrift::ClientReceiveState& state);
  static void recv_normalthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_normalthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_normalthrows(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void normalthrowsT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
 public:
  virtual void streamthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
  virtual void streamthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 private:
  virtual void streamthrowsImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 public:
  virtual apache::thrift::SemiStream<int32_t> sync_streamthrows(int32_t foo);
  virtual apache::thrift::SemiStream<int32_t> sync_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::Future<apache::thrift::SemiStream<int32_t>> future_streamthrows(int32_t foo);
  virtual folly::SemiFuture<apache::thrift::SemiStream<int32_t>> semifuture_streamthrows(int32_t foo);
  virtual folly::Future<apache::thrift::SemiStream<int32_t>> future_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<apache::thrift::SemiStream<int32_t>> semifuture_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::Future<std::pair<apache::thrift::SemiStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<std::pair<apache::thrift::SemiStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual void streamthrows(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t foo);
  static folly::exception_wrapper recv_wrapped_streamthrows(apache::thrift::SemiStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::SemiStream<int32_t> recv_streamthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::SemiStream<int32_t> recv_instance_streamthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_streamthrows(apache::thrift::SemiStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void streamthrowsT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 public:
  virtual void boththrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
  virtual void boththrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 private:
  virtual void boththrowsImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 public:
  virtual apache::thrift::SemiStream<int32_t> sync_boththrows(int32_t foo);
  virtual apache::thrift::SemiStream<int32_t> sync_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::Future<apache::thrift::SemiStream<int32_t>> future_boththrows(int32_t foo);
  virtual folly::SemiFuture<apache::thrift::SemiStream<int32_t>> semifuture_boththrows(int32_t foo);
  virtual folly::Future<apache::thrift::SemiStream<int32_t>> future_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<apache::thrift::SemiStream<int32_t>> semifuture_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::Future<std::pair<apache::thrift::SemiStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<std::pair<apache::thrift::SemiStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual void boththrows(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t foo);
  static folly::exception_wrapper recv_wrapped_boththrows(apache::thrift::SemiStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::SemiStream<int32_t> recv_boththrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::SemiStream<int32_t> recv_instance_boththrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_boththrows(apache::thrift::SemiStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void boththrowsT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 public:
  virtual void responseandstreamthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
  virtual void responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 private:
  virtual void responseandstreamthrowsImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 public:
  virtual apache::thrift::ResponseAndSemiStream<int32_t,int32_t> sync_responseandstreamthrows(int32_t foo);
  virtual apache::thrift::ResponseAndSemiStream<int32_t,int32_t> sync_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::Future<apache::thrift::ResponseAndSemiStream<int32_t,int32_t>> future_responseandstreamthrows(int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ResponseAndSemiStream<int32_t,int32_t>> semifuture_responseandstreamthrows(int32_t foo);
  virtual folly::Future<apache::thrift::ResponseAndSemiStream<int32_t,int32_t>> future_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ResponseAndSemiStream<int32_t,int32_t>> semifuture_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::Future<std::pair<apache::thrift::ResponseAndSemiStream<int32_t,int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<std::pair<apache::thrift::ResponseAndSemiStream<int32_t,int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual void responseandstreamthrows(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t foo);
  static folly::exception_wrapper recv_wrapped_responseandstreamthrows(apache::thrift::ResponseAndSemiStream<int32_t,int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ResponseAndSemiStream<int32_t,int32_t> recv_responseandstreamthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ResponseAndSemiStream<int32_t,int32_t> recv_instance_responseandstreamthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_responseandstreamthrows(apache::thrift::ResponseAndSemiStream<int32_t,int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void responseandstreamthrowsT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 public:
};

} // cpp2
