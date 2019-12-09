// required for old g++ to compile PRId64 macros, see
// https://github.com/pytorch/pytorch/issues/3571
// for context
#define __STDC_FORMAT_MACROS

#include <ATen/SparseCPUType.h>

// @generated by aten/src/ATen/gen.py

#include <ATen/CPUGenerator.h>
#include <c10/core/Allocator.h>
#include <ATen/DeviceGuard.h>
#include <ATen/NativeFunctions.h>
#include <ATen/Utils.h>
#include <ATen/WrapDimUtils.h>
#include <ATen/Dispatch.h>
#include <c10/util/Half.h>
#include <c10/core/UndefinedTensorImpl.h>
#include <c10/util/Optional.h>
#include <ATen/core/op_registration/op_registration.h>
#include <ATen/core/EnableNamedTensor.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <utility>

#include <ATen/Config.h>


namespace at {

namespace SparseCPUType {
#ifndef USE_STATIC_DISPATCH
namespace {
#endif

Tensor add(const Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::add_sparse(self, other, alpha);
}
Tensor & add_(Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::add_sparse_(self, other, alpha);
}
Tensor & add_out(Tensor & out, const Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::add_out_sparse_cpu(out, self, other, alpha);
}
Tensor div(const Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::div_sparse(self, other);
}
Tensor & div_(Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::div_sparse_(self, other);
}
Tensor & div_out(Tensor & out, const Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::div_out_sparse_zerodim(out, self, other);
}
Tensor empty(IntArrayRef size, c10::optional<ScalarType> dtype, c10::optional<Layout> layout, c10::optional<Device> device, c10::optional<bool> pin_memory, c10::optional<MemoryFormat> memory_format) {
#ifdef BUILD_NAMEDTENSOR

#endif
    auto dev = device.has_value() ? device.value() : Device(kCPU);
    const DeviceGuard device_guard(dev);
    return at::native::empty_sparse(size, dtype, layout, device, pin_memory, memory_format);
}
Tensor isnan(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    // DeviceGuard omitted
    return at::native::isnan_sparse(self);
}
Tensor & log1p_(Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::log1p_sparse_(self);
}
Tensor & log1p_out(Tensor & out, const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::log1p_out_sparse(out, self);
}
Tensor mm(const Tensor & self, const Tensor & mat2) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::_sparse_mm(self, mat2);
}
Tensor & mm_out(Tensor & out, const Tensor & self, const Tensor & mat2) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::_sparse_mm_out(out, self, mat2);
}
Tensor mul(const Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mul_sparse(self, other);
}
Tensor & mul_(Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mul_sparse_(self, other);
}
Tensor & mul_out(Tensor & out, const Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mul_out_sparse_cpu(out, self, other);
}
Tensor narrow_copy(const Tensor & self, int64_t dim, int64_t start, int64_t length) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "narrow_copy is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::narrow_copy_sparse(self, dim, start, length);
}
Tensor & sspaddmm_out(Tensor & out, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR
    if (out.has_names() || self.has_names() || mat1.has_names() || mat2.has_names()) {
        AT_ERROR(
            "sspaddmm_out is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::_sspaddmm_out_cpu(out, self, mat1, mat2, beta, alpha);
}
Tensor native_norm(const Tensor & self, Scalar p) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "native_norm is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::norm_sparse(self, p);
}
Tensor _sparse_sum_backward(const Tensor & grad, const Tensor & self, IntArrayRef dim) {
#ifdef BUILD_NAMEDTENSOR
    if (grad.has_names() || self.has_names()) {
        AT_ERROR(
            "_sparse_sum_backward is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::_sparse_sum_backward_cpu(grad, self, dim);
}
Tensor clone(const Tensor & self, c10::optional<MemoryFormat> memory_format) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::clone_sparse(self, memory_format);
}
Tensor & pow_out(Tensor & out, const Tensor & self, Scalar exponent) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::pow_out_sparse_scalar(out, self, exponent);
}
Tensor pow(const Tensor & self, Scalar exponent) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::pow_sparse_scalar(self, exponent);
}
Tensor & zero_(Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::zero_sparse_(self);
}
Tensor & sub_out(Tensor & out, const Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sub_out_sparse(out, self, other, alpha);
}
Tensor sub(const Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sub_sparse(self, other, alpha);
}
Tensor & sub_(Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sub_sparse_(self, other, alpha);
}
Tensor & addmm_out(Tensor & out, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::addmm_out_sparse_dense_cpu(out, self, mat1, mat2, beta, alpha);
}
Tensor addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::addmm_sparse_dense_cpu(self, mat1, mat2, beta, alpha);
}
Tensor & addmm_(Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::s_addmm_sparse_dense_cpu_(self, mat1, mat2, beta, alpha);
}
Tensor _sparse_coo_tensor_with_dims(int64_t sparse_dim, int64_t dense_dim, IntArrayRef size, c10::optional<ScalarType> dtype, c10::optional<Layout> layout, c10::optional<Device> device, c10::optional<bool> pin_memory) {
#ifdef BUILD_NAMEDTENSOR

#endif
    auto dev = device.has_value() ? device.value() : Device(kCPU);
    const DeviceGuard device_guard(dev);
    return at::native::new_with_dims_sparse(sparse_dim, dense_dim, size, dtype, layout, device, pin_memory);
}
Tensor _sparse_coo_tensor_with_dims_and_tensors(int64_t sparse_dim, int64_t dense_dim, IntArrayRef size, const Tensor & indices, const Tensor & values, ScalarType dtype, Layout layout, Device device, bool pin_memory) {
#ifdef BUILD_NAMEDTENSOR
    if (indices.has_names() || values.has_names()) {
        AT_ERROR(
            "_sparse_coo_tensor_with_dims_and_tensors is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const DeviceGuard device_guard(device);
    return at::native::new_with_dims_and_tensor_sparse(sparse_dim, dense_dim, size, indices, values, dtype, layout, device, pin_memory);
}
Tensor & sparse_resize_(Tensor & self, IntArrayRef size, int64_t sparse_dim, int64_t dense_dim) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "sparse_resize_ is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sparse_resize_(self, size, sparse_dim, dense_dim);
}
Tensor & sparse_resize_and_clear_(Tensor & self, IntArrayRef size, int64_t sparse_dim, int64_t dense_dim) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "sparse_resize_and_clear_ is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sparse_resize_and_clear_(self, size, sparse_dim, dense_dim);
}
Tensor sparse_mask(const Tensor & self, const Tensor & mask) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names() || mask.has_names()) {
        AT_ERROR(
            "sparse_mask is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sparse_mask_cpu(self, mask);
}
Tensor to_dense(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "to_dense is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::sparse_to_dense(self);
}
int64_t sparse_dim(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "sparse_dim is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::sparse_dim_sparse(self);
}
int64_t _dimI(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_dimI is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::sparse_dim_sparse(self);
}
int64_t dense_dim(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "dense_dim is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::dense_dim_sparse(self);
}
int64_t _dimV(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_dimV is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::dense_dim_sparse(self);
}
int64_t _nnz(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_nnz is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::_nnz_sparse(self);
}
Tensor coalesce(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "coalesce is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::coalesce_sparse_cpu(self);
}
bool is_coalesced(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    // DeviceGuard omitted
    return at::native::is_coalesced_sparse(self);
}
Tensor _indices(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_indices is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::_indices_sparse(self);
}
Tensor _values(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_values is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::_values_sparse(self);
}
Tensor & _coalesced_(Tensor & self, bool coalesced) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_coalesced_ is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::_coalesced_sparse_(self, coalesced);
}
Tensor indices(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "indices is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::indices_sparse(self);
}
Tensor values(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "values is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::values_sparse(self);
}
Tensor & hspmm_out(Tensor & out, const Tensor & mat1, const Tensor & mat2) {
#ifdef BUILD_NAMEDTENSOR
    if (out.has_names() || mat1.has_names() || mat2.has_names()) {
        AT_ERROR(
            "hspmm_out is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(out));
    return at::native::hspmm_out_sparse_cpu(out, mat1, mat2);
}
Tensor hspmm(const Tensor & mat1, const Tensor & mat2) {
#ifdef BUILD_NAMEDTENSOR
    if (mat1.has_names() || mat2.has_names()) {
        AT_ERROR(
            "hspmm is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(mat1));
    return at::native::hspmm_sparse_cpu(mat1, mat2);
}
Tensor & copy_sparse_to_sparse_(Tensor & self, const Tensor & src, bool non_blocking) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names() || src.has_names()) {
        AT_ERROR(
            "copy_sparse_to_sparse_ is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::copy_sparse_(self, src, non_blocking);
}
Tensor index_select(const Tensor & self, int64_t dim, const Tensor & index) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names() || index.has_names()) {
        AT_ERROR(
            "index_select is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::index_select_sparse(self, dim, index);
}
Tensor any(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::any_sparse(self);
}

#ifndef USE_STATIC_DISPATCH
}
#endif
}  // namespace SparseCPUType

#ifndef USE_STATIC_DISPATCH
namespace {
static auto registerer = torch::RegisterOperators()
  .op(torch::RegisterOperators::options()
    .schema("aten::add.Tensor(Tensor self, Tensor other, *, Scalar alpha=1) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &, Scalar)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::add)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::add_.Tensor(Tensor(a!) self, Tensor other, *, Scalar alpha=1) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, Scalar), &SparseCPUType::add_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::add.out(Tensor self, Tensor other, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &, Scalar), &SparseCPUType::add_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::div.Tensor(Tensor self, Tensor other) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::div)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::div_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &), &SparseCPUType::div_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::div.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &), &SparseCPUType::div_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::empty.memory_format(int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (IntArrayRef, c10::optional<ScalarType>, c10::optional<Layout>, c10::optional<Device>, c10::optional<bool>, c10::optional<MemoryFormat>), &SparseCPUType::empty>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::isnan(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::isnan)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::log1p_(Tensor(a!) self) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &), &SparseCPUType::log1p_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::log1p.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &), &SparseCPUType::log1p_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mm(Tensor self, Tensor mat2) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::mm)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mm.out(Tensor self, Tensor mat2, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &), &SparseCPUType::mm_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mul.Tensor(Tensor self, Tensor other) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::mul)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mul_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &), &SparseCPUType::mul_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mul.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &), &SparseCPUType::mul_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::narrow_copy(Tensor self, int dim, int start, int length) -> Tensor")
    .kernel<Tensor (const Tensor &, int64_t, int64_t, int64_t)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::narrow_copy)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sspaddmm.out(Tensor self, Tensor mat1, Tensor mat2, *, Scalar beta=1, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &, const Tensor &, Scalar, Scalar), &SparseCPUType::sspaddmm_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::native_norm(Tensor self, Scalar p=2) -> Tensor")
    .kernel<Tensor (const Tensor &, Scalar)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::native_norm)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_sparse_sum_backward(Tensor grad, Tensor self, int[] dim) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, const Tensor &, IntArrayRef), &SparseCPUType::_sparse_sum_backward>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::clone(Tensor self, *, MemoryFormat? memory_format=None) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, c10::optional<MemoryFormat>), &SparseCPUType::clone>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::pow.Tensor_Scalar_out(Tensor self, Scalar exponent, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, Scalar), &SparseCPUType::pow_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::pow.Tensor_Scalar(Tensor self, Scalar exponent) -> Tensor")
    .kernel<Tensor (const Tensor &, Scalar)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::pow)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::zero_(Tensor(a!) self) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &), &SparseCPUType::zero_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sub.out(Tensor self, Tensor other, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &, Scalar), &SparseCPUType::sub_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sub.Tensor(Tensor self, Tensor other, *, Scalar alpha=1) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &, Scalar)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::sub)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sub_.Tensor(Tensor(a!) self, Tensor other, *, Scalar alpha=1) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, Scalar), &SparseCPUType::sub_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::addmm.out(Tensor self, Tensor mat1, Tensor mat2, *, Scalar beta=1, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &, const Tensor &, Scalar, Scalar), &SparseCPUType::addmm_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::addmm(Tensor self, Tensor mat1, Tensor mat2, *, Scalar beta=1, Scalar alpha=1) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &, const Tensor &, Scalar, Scalar)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::addmm)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::addmm_(Tensor(a!) self, Tensor mat1, Tensor mat2, *, Scalar beta=1, Scalar alpha=1) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &, Scalar, Scalar), &SparseCPUType::addmm_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_sparse_coo_tensor_with_dims(int sparse_dim, int dense_dim, int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (int64_t, int64_t, IntArrayRef, c10::optional<ScalarType>, c10::optional<Layout>, c10::optional<Device>, c10::optional<bool>), &SparseCPUType::_sparse_coo_tensor_with_dims>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_sparse_coo_tensor_with_dims_and_tensors(int sparse_dim, int dense_dim, int[] size, Tensor indices, Tensor values, *, ScalarType dtype, Layout layout, Device device, bool pin_memory=False) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (int64_t, int64_t, IntArrayRef, const Tensor &, const Tensor &, ScalarType, Layout, Device, bool), &SparseCPUType::_sparse_coo_tensor_with_dims_and_tensors>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sparse_resize_(Tensor(a!) self, int[] size, int sparse_dim, int dense_dim) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, IntArrayRef, int64_t, int64_t), &SparseCPUType::sparse_resize_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sparse_resize_and_clear_(Tensor(a!) self, int[] size, int sparse_dim, int dense_dim) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, IntArrayRef, int64_t, int64_t), &SparseCPUType::sparse_resize_and_clear_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sparse_mask(Tensor self, Tensor mask) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::sparse_mask)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::to_dense(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::to_dense)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sparse_dim(Tensor self) -> int")
    .kernel<int64_t (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::sparse_dim)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_dimI(Tensor self) -> int")
    .kernel<int64_t (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::_dimI)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::dense_dim(Tensor self) -> int")
    .kernel<int64_t (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::dense_dim)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_dimV(Tensor self) -> int")
    .kernel<int64_t (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::_dimV)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_nnz(Tensor self) -> int")
    .kernel<int64_t (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::_nnz)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::coalesce(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::coalesce)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::is_coalesced(Tensor self) -> bool")
    .kernel<bool (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::is_coalesced)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_indices(Tensor(a) self) -> Tensor(a)")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &), &SparseCPUType::_indices>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_values(Tensor(a) self) -> Tensor(a)")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &), &SparseCPUType::_values>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_coalesced_(Tensor(a!) self, bool coalesced) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, bool), &SparseCPUType::_coalesced_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::indices(Tensor(a) self) -> Tensor(a)")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &), &SparseCPUType::indices>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::values(Tensor(a) self) -> Tensor(a)")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &), &SparseCPUType::values>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::hspmm.out(Tensor mat1, Tensor mat2, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &), &SparseCPUType::hspmm_out>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::hspmm(Tensor mat1, Tensor mat2) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::hspmm)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::copy_sparse_to_sparse_(Tensor(a!) self, Tensor src, bool non_blocking=False) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, bool), &SparseCPUType::copy_sparse_to_sparse_>(TensorTypeId::SparseCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::index_select(Tensor self, int dim, Tensor index) -> Tensor")
    .kernel<Tensor (const Tensor &, int64_t, const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::index_select)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::any(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::SparseCPUTensorId, &SparseCPUType::any)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA));
}
#endif

}
