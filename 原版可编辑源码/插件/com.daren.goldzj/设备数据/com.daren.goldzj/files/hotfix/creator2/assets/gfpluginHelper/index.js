window.__require = function t(e, i, n) {
function o(s, a) {
if (!i[s]) {
if (!e[s]) {
var l = s.split("/");
l = l[l.length - 1];
if (!e[l]) {
var h = "function" == typeof __require && __require;
if (!a && h) return h(l, !0);
if (r) return r(l, !0);
throw new Error("Cannot find module '" + s + "'");
}
s = l;
}
var c = i[s] = {
exports: {}
};
e[s][0].call(c.exports, function(t) {
return o(e[s][1][t] || t);
}, c, c.exports, t, e, i, n);
}
return i[s].exports;
}
for (var r = "function" == typeof __require && __require, s = 0; s < n.length; s++) o(n[s]);
return o;
}({
GFComponent_NodeLisnter: [ function(t, e, i) {
"use strict";
cc._RF.push(e, "e85c1WKgM9J5KqB+Iy1JuRr", "GFComponent_NodeLisnter");
var n = this && this.__decorate || function(t, e, i, n) {
var o, r = arguments.length, s = r < 3 ? e : null === n ? n = Object.getOwnPropertyDescriptor(e, i) : n;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) s = Reflect.decorate(t, e, i, n); else for (var a = t.length - 1; a >= 0; a--) (o = t[a]) && (s = (r < 3 ? o(s) : r > 3 ? o(e, i, s) : o(e, i)) || s);
return r > 3 && s && Object.defineProperty(e, i, s), s;
};
Object.defineProperty(i, "__esModule", {
value: !0
});
i._NodeActiveLisnter = void 0;
const {ccclass: o, property: r} = cc._decorator;
let s = class extends cc.Component {
constructor() {
super(...arguments);
this.callback = null;
}
};
s = n([ o("GFComponent_NodeActiveLisnter") ], s);
i._NodeActiveLisnter = s;
cc._RF.pop();
}, {} ],
GFComponent: [ function(t, e, i) {
"use strict";
cc._RF.push(e, "10c23llm/RIlLeMAnnvLLg2", "GFComponent");
var n = this && this.__decorate || function(t, e, i, n) {
var o, r = arguments.length, s = r < 3 ? e : null === n ? n = Object.getOwnPropertyDescriptor(e, i) : n;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) s = Reflect.decorate(t, e, i, n); else for (var a = t.length - 1; a >= 0; a--) (o = t[a]) && (s = (r < 3 ? o(s) : r > 3 ? o(e, i, s) : o(e, i)) || s);
return r > 3 && s && Object.defineProperty(e, i, s), s;
};
Object.defineProperty(i, "__esModule", {
value: !0
});
i.GFComponent = void 0;
const {ccclass: o, property: r} = cc._decorator;
let s = class extends cc.Component {
constructor() {
super(...arguments);
this._scriptComponent = null;
this._handler = null;
}
onDestroy() {
this._handler && this._handler.onDestroy();
}
onEnable() {
this._handler && this._handler.onEnable();
}
get scriptComponent() {
return this._scriptComponent;
}
set scriptComponent(t) {
this._scriptComponent = t;
}
setDelegate(t) {
this._handler = t;
this._handler.onLoad();
this.enabled && this._handler && this._handler.onEnable();
}
};
s = n([ o("GFComponent") ], s);
i.GFComponent = s;
cc._RF.pop();
}, {} ],
gfplugin_long: [ function(t, e) {
"use strict";
cc._RF.push(e, "a50ff8lmARKJLMSFIWFI35a", "gfplugin_long");
var i = null;
try {
i = new WebAssembly.Instance(new WebAssembly.Module(new Uint8Array([ 0, 97, 115, 109, 1, 0, 0, 0, 1, 13, 2, 96, 0, 1, 127, 96, 4, 127, 127, 127, 127, 1, 127, 3, 7, 6, 0, 1, 1, 1, 1, 1, 6, 6, 1, 127, 1, 65, 0, 11, 7, 50, 6, 3, 109, 117, 108, 0, 1, 5, 100, 105, 118, 95, 115, 0, 2, 5, 100, 105, 118, 95, 117, 0, 3, 5, 114, 101, 109, 95, 115, 0, 4, 5, 114, 101, 109, 95, 117, 0, 5, 8, 103, 101, 116, 95, 104, 105, 103, 104, 0, 0, 10, 191, 1, 6, 4, 0, 35, 0, 11, 36, 1, 1, 126, 32, 0, 173, 32, 1, 173, 66, 32, 134, 132, 32, 2, 173, 32, 3, 173, 66, 32, 134, 132, 126, 34, 4, 66, 32, 135, 167, 36, 0, 32, 4, 167, 11, 36, 1, 1, 126, 32, 0, 173, 32, 1, 173, 66, 32, 134, 132, 32, 2, 173, 32, 3, 173, 66, 32, 134, 132, 127, 34, 4, 66, 32, 135, 167, 36, 0, 32, 4, 167, 11, 36, 1, 1, 126, 32, 0, 173, 32, 1, 173, 66, 32, 134, 132, 32, 2, 173, 32, 3, 173, 66, 32, 134, 132, 128, 34, 4, 66, 32, 135, 167, 36, 0, 32, 4, 167, 11, 36, 1, 1, 126, 32, 0, 173, 32, 1, 173, 66, 32, 134, 132, 32, 2, 173, 32, 3, 173, 66, 32, 134, 132, 129, 34, 4, 66, 32, 135, 167, 36, 0, 32, 4, 167, 11, 36, 1, 1, 126, 32, 0, 173, 32, 1, 173, 66, 32, 134, 132, 32, 2, 173, 32, 3, 173, 66, 32, 134, 132, 130, 34, 4, 66, 32, 135, 167, 36, 0, 32, 4, 167, 11 ])), {}).exports;
} catch (t) {}
function n(t, e, i) {
this.low = 0 | t;
this.high = 0 | e;
this.unsigned = !!i;
}
n.prototype.__isLong__;
Object.defineProperty(n.prototype, "__isLong__", {
value: !0
});
function o(t) {
return !0 === (t && t.__isLong__);
}
n.isLong = o;
var r = {}, s = {};
function a(t, e) {
var i, n, o;
if (e) {
if ((o = 0 <= (t >>>= 0) && t < 256) && (n = s[t])) return n;
i = h(t, (0 | t) < 0 ? -1 : 0, !0);
o && (s[t] = i);
return i;
}
if ((o = -128 <= (t |= 0) && t < 128) && (n = r[t])) return n;
i = h(t, t < 0 ? -1 : 0, !1);
o && (r[t] = i);
return i;
}
n.fromInt = a;
function l(t, e) {
if (isNaN(t)) return e ? m : y;
if (e) {
if (t < 0) return m;
if (t >= f) return S;
} else {
if (t <= -_) return x;
if (t + 1 >= _) return C;
}
return t < 0 ? l(-t, e).neg() : h(t % d | 0, t / d | 0, e);
}
n.fromNumber = l;
function h(t, e, i) {
return new n(t, e, i);
}
n.fromBits = h;
var c = Math.pow;
function u(t, e, i) {
if (0 === t.length) throw Error("empty string");
if ("NaN" === t || "Infinity" === t || "+Infinity" === t || "-Infinity" === t) return y;
"number" == typeof e ? (i = e, e = !1) : e = !!e;
if ((i = i || 10) < 2 || 36 < i) throw RangeError("radix");
var n;
if ((n = t.indexOf("-")) > 0) throw Error("interior hyphen");
if (0 === n) return u(t.substring(1), e, i).neg();
for (var o = l(c(i, 8)), r = y, s = 0; s < t.length; s += 8) {
var a = Math.min(8, t.length - s), h = parseInt(t.substring(s, s + a), i);
if (a < 8) {
var p = l(c(i, a));
r = r.mul(p).add(l(h));
} else r = (r = r.mul(o)).add(l(h));
}
r.unsigned = e;
return r;
}
n.fromString = u;
function p(t, e) {
return "number" == typeof t ? l(t, e) : "string" == typeof t ? u(t, e) : h(t.low, t.high, "boolean" == typeof e ? e : t.unsigned);
}
n.fromValue = p;
var d = 4294967296, f = d * d, _ = f / 2, g = a(1 << 24), y = a(0);
n.ZERO = y;
var m = a(0, !0);
n.UZERO = m;
var v = a(1);
n.ONE = v;
var b = a(1, !0);
n.UONE = b;
var w = a(-1);
n.NEG_ONE = w;
var C = h(-1, 2147483647, !1);
n.MAX_VALUE = C;
var S = h(-1, -1, !0);
n.MAX_UNSIGNED_VALUE = S;
var x = h(0, -2147483648, !1);
n.MIN_VALUE = x;
var P = n.prototype;
P.toInt = function() {
return this.unsigned ? this.low >>> 0 : this.low;
};
P.toNumber = function() {
return this.unsigned ? (this.high >>> 0) * d + (this.low >>> 0) : this.high * d + (this.low >>> 0);
};
P.toString = function(t) {
if ((t = t || 10) < 2 || 36 < t) throw RangeError("radix");
if (this.isZero()) return "0";
if (this.isNegative()) {
if (this.eq(x)) {
var e = l(t), i = this.div(e), n = i.mul(e).sub(this);
return i.toString(t) + n.toInt().toString(t);
}
return "-" + this.neg().toString(t);
}
for (var o = l(c(t, 6), this.unsigned), r = this, s = ""; ;) {
var a = r.div(o), h = (r.sub(a.mul(o)).toInt() >>> 0).toString(t);
if ((r = a).isZero()) return h + s;
for (;h.length < 6; ) h = "0" + h;
s = "" + h + s;
}
};
P.getHighBits = function() {
return this.high;
};
P.getHighBitsUnsigned = function() {
return this.high >>> 0;
};
P.getLowBits = function() {
return this.low;
};
P.getLowBitsUnsigned = function() {
return this.low >>> 0;
};
P.getNumBitsAbs = function() {
if (this.isNegative()) return this.eq(x) ? 64 : this.neg().getNumBitsAbs();
for (var t = 0 != this.high ? this.high : this.low, e = 31; e > 0 && 0 == (t & 1 << e); e--) ;
return 0 != this.high ? e + 33 : e + 1;
};
P.isZero = function() {
return 0 === this.high && 0 === this.low;
};
P.eqz = P.isZero;
P.isNegative = function() {
return !this.unsigned && this.high < 0;
};
P.isPositive = function() {
return this.unsigned || this.high >= 0;
};
P.isOdd = function() {
return 1 == (1 & this.low);
};
P.isEven = function() {
return 0 == (1 & this.low);
};
P.equals = function(t) {
o(t) || (t = p(t));
return (this.unsigned === t.unsigned || this.high >>> 31 != 1 || t.high >>> 31 != 1) && this.high === t.high && this.low === t.low;
};
P.eq = P.equals;
P.notEquals = function(t) {
return !this.eq(t);
};
P.neq = P.notEquals;
P.ne = P.notEquals;
P.lessThan = function(t) {
return this.comp(t) < 0;
};
P.lt = P.lessThan;
P.lessThanOrEqual = function(t) {
return this.comp(t) <= 0;
};
P.lte = P.lessThanOrEqual;
P.le = P.lessThanOrEqual;
P.greaterThan = function(t) {
return this.comp(t) > 0;
};
P.gt = P.greaterThan;
P.greaterThanOrEqual = function(t) {
return this.comp(t) >= 0;
};
P.gte = P.greaterThanOrEqual;
P.ge = P.greaterThanOrEqual;
P.compare = function(t) {
o(t) || (t = p(t));
if (this.eq(t)) return 0;
var e = this.isNegative(), i = t.isNegative();
return e && !i ? -1 : !e && i ? 1 : this.unsigned ? t.high >>> 0 > this.high >>> 0 || t.high === this.high && t.low >>> 0 > this.low >>> 0 ? -1 : 1 : this.sub(t).isNegative() ? -1 : 1;
};
P.comp = P.compare;
P.negate = function() {
return !this.unsigned && this.eq(x) ? x : this.not().add(v);
};
P.neg = P.negate;
P.add = function(t) {
o(t) || (t = p(t));
var e = this.high >>> 16, i = 65535 & this.high, n = this.low >>> 16, r = 65535 & this.low, s = t.high >>> 16, a = 65535 & t.high, l = t.low >>> 16, c = 0, u = 0, d = 0, f = 0;
d += (f += r + (65535 & t.low)) >>> 16;
u += (d += n + l) >>> 16;
c += (u += i + a) >>> 16;
c += e + s;
return h((d &= 65535) << 16 | (f &= 65535), (c &= 65535) << 16 | (u &= 65535), this.unsigned);
};
P.subtract = function(t) {
o(t) || (t = p(t));
return this.add(t.neg());
};
P.sub = P.subtract;
P.multiply = function(t) {
if (this.isZero()) return y;
o(t) || (t = p(t));
if (i) return h(i.mul(this.low, this.high, t.low, t.high), i.get_high(), this.unsigned);
if (t.isZero()) return y;
if (this.eq(x)) return t.isOdd() ? x : y;
if (t.eq(x)) return this.isOdd() ? x : y;
if (this.isNegative()) return t.isNegative() ? this.neg().mul(t.neg()) : this.neg().mul(t).neg();
if (t.isNegative()) return this.mul(t.neg()).neg();
if (this.lt(g) && t.lt(g)) return l(this.toNumber() * t.toNumber(), this.unsigned);
var e = this.high >>> 16, n = 65535 & this.high, r = this.low >>> 16, s = 65535 & this.low, a = t.high >>> 16, c = 65535 & t.high, u = t.low >>> 16, d = 65535 & t.low, f = 0, _ = 0, m = 0, v = 0;
m += (v += s * d) >>> 16;
_ += (m += r * d) >>> 16;
m &= 65535;
_ += (m += s * u) >>> 16;
f += (_ += n * d) >>> 16;
_ &= 65535;
f += (_ += r * u) >>> 16;
_ &= 65535;
f += (_ += s * c) >>> 16;
f += e * d + n * u + r * c + s * a;
return h((m &= 65535) << 16 | (v &= 65535), (f &= 65535) << 16 | (_ &= 65535), this.unsigned);
};
P.mul = P.multiply;
P.divide = function(t) {
o(t) || (t = p(t));
if (t.isZero()) throw Error("division by zero");
if (i) return this.unsigned || -2147483648 !== this.high || -1 !== t.low || -1 !== t.high ? h((this.unsigned ? i.div_u : i.div_s)(this.low, this.high, t.low, t.high), i.get_high(), this.unsigned) : this;
if (this.isZero()) return this.unsigned ? m : y;
var e, n, r;
if (this.unsigned) {
t.unsigned || (t = t.toUnsigned());
if (t.gt(this)) return m;
if (t.gt(this.shru(1))) return b;
r = m;
} else {
if (this.eq(x)) {
if (t.eq(v) || t.eq(w)) return x;
if (t.eq(x)) return v;
if ((e = this.shr(1).div(t).shl(1)).eq(y)) return t.isNegative() ? v : w;
n = this.sub(t.mul(e));
return e.add(n.div(t));
}
if (t.eq(x)) return this.unsigned ? m : y;
if (this.isNegative()) return t.isNegative() ? this.neg().div(t.neg()) : this.neg().div(t).neg();
if (t.isNegative()) return this.div(t.neg()).neg();
r = y;
}
n = this;
for (;n.gte(t); ) {
e = Math.max(1, Math.floor(n.toNumber() / t.toNumber()));
for (var s = Math.ceil(Math.log(e) / Math.LN2), a = s <= 48 ? 1 : c(2, s - 48), u = l(e), d = u.mul(t); d.isNegative() || d.gt(n); ) d = (u = l(e -= a, this.unsigned)).mul(t);
u.isZero() && (u = v);
r = r.add(u);
n = n.sub(d);
}
return r;
};
P.div = P.divide;
P.modulo = function(t) {
o(t) || (t = p(t));
return i ? h((this.unsigned ? i.rem_u : i.rem_s)(this.low, this.high, t.low, t.high), i.get_high(), this.unsigned) : this.sub(this.div(t).mul(t));
};
P.mod = P.modulo;
P.rem = P.modulo;
P.not = function() {
return h(~this.low, ~this.high, this.unsigned);
};
P.and = function(t) {
o(t) || (t = p(t));
return h(this.low & t.low, this.high & t.high, this.unsigned);
};
P.or = function(t) {
o(t) || (t = p(t));
return h(this.low | t.low, this.high | t.high, this.unsigned);
};
P.xor = function(t) {
o(t) || (t = p(t));
return h(this.low ^ t.low, this.high ^ t.high, this.unsigned);
};
P.shiftLeft = function(t) {
o(t) && (t = t.toInt());
return 0 == (t &= 63) ? this : t < 32 ? h(this.low << t, this.high << t | this.low >>> 32 - t, this.unsigned) : h(0, this.low << t - 32, this.unsigned);
};
P.shl = P.shiftLeft;
P.shiftRight = function(t) {
o(t) && (t = t.toInt());
return 0 == (t &= 63) ? this : t < 32 ? h(this.low >>> t | this.high << 32 - t, this.high >> t, this.unsigned) : h(this.high >> t - 32, this.high >= 0 ? 0 : -1, this.unsigned);
};
P.shr = P.shiftRight;
P.shiftRightUnsigned = function(t) {
o(t) && (t = t.toInt());
if (0 == (t &= 63)) return this;
var e = this.high;
return t < 32 ? h(this.low >>> t | e << 32 - t, e >>> t, this.unsigned) : h(32 === t ? e : e >>> t - 32, 0, this.unsigned);
};
P.shru = P.shiftRightUnsigned;
P.shr_u = P.shiftRightUnsigned;
P.toSigned = function() {
return this.unsigned ? h(this.low, this.high, !1) : this;
};
P.toUnsigned = function() {
return this.unsigned ? this : h(this.low, this.high, !0);
};
P.toBytes = function(t) {
return t ? this.toBytesLE() : this.toBytesBE();
};
P.toBytesLE = function() {
var t = this.high, e = this.low;
return [ 255 & e, e >>> 8 & 255, e >>> 16 & 255, e >>> 24, 255 & t, t >>> 8 & 255, t >>> 16 & 255, t >>> 24 ];
};
P.toBytesBE = function() {
var t = this.high, e = this.low;
return [ t >>> 24, t >>> 16 & 255, t >>> 8 & 255, 255 & t, e >>> 24, e >>> 16 & 255, e >>> 8 & 255, 255 & e ];
};
n.fromBytes = function(t, e, i) {
return i ? n.fromBytesLE(t, e) : n.fromBytesBE(t, e);
};
n.fromBytesLE = function(t, e) {
return new n(t[0] | t[1] << 8 | t[2] << 16 | t[3] << 24, t[4] | t[5] << 8 | t[6] << 16 | t[7] << 24, e);
};
n.fromBytesBE = function(t, e) {
return new n(t[4] << 24 | t[5] << 16 | t[6] << 8 | t[7], t[0] << 24 | t[1] << 16 | t[2] << 8 | t[3], e);
};
window.gfplugin_long = n;
cc._RF.pop();
}, {} ],
gfplugin_protobuf: [ function(require, module, exports) {
(function(global) {
"use strict";
cc._RF.push(module, "58993BKdWdLj640NegHkQFY", "gfplugin_protobuf");
(function(undefined) {
(function(t, e) {
var i = function i(n) {
var o = e[n];
o || t[n][0].call(o = e[n] = {
exports: {}
}, i, o, o.exports);
return o.exports;
}(8);
i.util.global.protobuf = i;
"function" == typeof define && define.amd && define([ "long" ], function(t) {
if (t && t.isLong) {
i.util.Long = t;
i.configure();
}
return i;
});
"object" == typeof module && module && module.exports && (module.exports = i);
})({
1: [ function(t, e) {
e.exports = function(t, e) {
for (var i = new Array(arguments.length - 1), n = 0, o = 2, r = !0; o < arguments.length; ) i[n++] = arguments[o++];
return new Promise(function(o, s) {
i[n] = function(t) {
if (r) {
r = !1;
if (t) s(t); else {
for (var e = new Array(arguments.length - 1), i = 0; i < e.length; ) e[i++] = arguments[i];
o.apply(null, e);
}
}
};
try {
t.apply(e || null, i);
} catch (t) {
if (r) {
r = !1;
s(t);
}
}
});
};
}, {} ],
2: [ function(t, e, i) {
var n = i;
n.length = function(t) {
var e = t.length;
if (!e) return 0;
for (var i = 0; --e % 4 > 1 && "=" === t.charAt(e); ) ++i;
return Math.ceil(3 * t.length) / 4 - i;
};
for (var o = new Array(64), r = new Array(123), s = 0; s < 64; ) r[o[s] = s < 26 ? s + 65 : s < 52 ? s + 71 : s < 62 ? s - 4 : s - 59 | 43] = s++;
n.encode = function(t, e, i) {
for (var n, r = null, s = [], a = 0, l = 0; e < i; ) {
var h = t[e++];
switch (l) {
case 0:
s[a++] = o[h >> 2];
n = (3 & h) << 4;
l = 1;
break;

case 1:
s[a++] = o[n | h >> 4];
n = (15 & h) << 2;
l = 2;
break;

case 2:
s[a++] = o[n | h >> 6];
s[a++] = o[63 & h];
l = 0;
}
if (a > 8191) {
(r || (r = [])).push(String.fromCharCode.apply(String, s));
a = 0;
}
}
if (l) {
s[a++] = o[n];
s[a++] = 61;
1 === l && (s[a++] = 61);
}
if (r) {
a && r.push(String.fromCharCode.apply(String, s.slice(0, a)));
return r.join("");
}
return String.fromCharCode.apply(String, s.slice(0, a));
};
n.decode = function(t, e, i) {
for (var n, o = i, s = 0, a = 0; a < t.length; ) {
var l = t.charCodeAt(a++);
if (61 === l && s > 1) break;
if ((l = r[l]) === undefined) throw Error("invalid encoding");
switch (s) {
case 0:
n = l;
s = 1;
break;

case 1:
e[i++] = n << 2 | (48 & l) >> 4;
n = l;
s = 2;
break;

case 2:
e[i++] = (15 & n) << 4 | (60 & l) >> 2;
n = l;
s = 3;
break;

case 3:
e[i++] = (3 & n) << 6 | l;
s = 0;
}
}
if (1 === s) throw Error("invalid encoding");
return i - o;
};
n.test = function(t) {
return /^(?:[A-Za-z0-9+/]{4})*(?:[A-Za-z0-9+/]{2}==|[A-Za-z0-9+/]{3}=)?$/.test(t);
};
}, {} ],
3: [ function(t, e) {
e.exports = i;
function i() {
this._listeners = {};
}
i.prototype.on = function(t, e, i) {
(this._listeners[t] || (this._listeners[t] = [])).push({
fn: e,
ctx: i || this
});
return this;
};
i.prototype.off = function(t, e) {
if (t === undefined) this._listeners = {}; else if (e === undefined) this._listeners[t] = []; else for (var i = this._listeners[t], n = 0; n < i.length; ) i[n].fn === e ? i.splice(n, 1) : ++n;
return this;
};
i.prototype.emit = function(t) {
var e = this._listeners[t];
if (e) {
for (var i = [], n = 1; n < arguments.length; ) i.push(arguments[n++]);
for (n = 0; n < e.length; ) e[n].fn.apply(e[n++].ctx, i);
}
return this;
};
}, {} ],
4: [ function(t, e) {
e.exports = i(i);
function i(t) {
"undefined" != typeof Float32Array ? function() {
var e = new Float32Array([ -0 ]), i = new Uint8Array(e.buffer), n = 128 === i[3];
function o(t, n, o) {
e[0] = t;
n[o] = i[0];
n[o + 1] = i[1];
n[o + 2] = i[2];
n[o + 3] = i[3];
}
function r(t, n, o) {
e[0] = t;
n[o] = i[3];
n[o + 1] = i[2];
n[o + 2] = i[1];
n[o + 3] = i[0];
}
t.writeFloatLE = n ? o : r;
t.writeFloatBE = n ? r : o;
function s(t, n) {
i[0] = t[n];
i[1] = t[n + 1];
i[2] = t[n + 2];
i[3] = t[n + 3];
return e[0];
}
function a(t, n) {
i[3] = t[n];
i[2] = t[n + 1];
i[1] = t[n + 2];
i[0] = t[n + 3];
return e[0];
}
t.readFloatLE = n ? s : a;
t.readFloatBE = n ? a : s;
}() : function() {
function e(t, e, i, n) {
var o = e < 0 ? 1 : 0;
o && (e = -e);
if (0 === e) t(1 / e > 0 ? 0 : 2147483648, i, n); else if (isNaN(e)) t(2143289344, i, n); else if (e > 34028234663852886e22) t((o << 31 | 2139095040) >>> 0, i, n); else if (e < 11754943508222875e-54) t((o << 31 | Math.round(e / 1401298464324817e-60)) >>> 0, i, n); else {
var r = Math.floor(Math.log(e) / Math.LN2);
t((o << 31 | r + 127 << 23 | 8388607 & Math.round(e * Math.pow(2, -r) * 8388608)) >>> 0, i, n);
}
}
t.writeFloatLE = e.bind(null, n);
t.writeFloatBE = e.bind(null, o);
function i(t, e, i) {
var n = t(e, i), o = 2 * (n >> 31) + 1, r = n >>> 23 & 255, s = 8388607 & n;
return 255 === r ? s ? NaN : Infinity * o : 0 === r ? 1401298464324817e-60 * o * s : o * Math.pow(2, r - 150) * (s + 8388608);
}
t.readFloatLE = i.bind(null, r);
t.readFloatBE = i.bind(null, s);
}();
"undefined" != typeof Float64Array ? function() {
var e = new Float64Array([ -0 ]), i = new Uint8Array(e.buffer), n = 128 === i[7];
function o(t, n, o) {
e[0] = t;
n[o] = i[0];
n[o + 1] = i[1];
n[o + 2] = i[2];
n[o + 3] = i[3];
n[o + 4] = i[4];
n[o + 5] = i[5];
n[o + 6] = i[6];
n[o + 7] = i[7];
}
function r(t, n, o) {
e[0] = t;
n[o] = i[7];
n[o + 1] = i[6];
n[o + 2] = i[5];
n[o + 3] = i[4];
n[o + 4] = i[3];
n[o + 5] = i[2];
n[o + 6] = i[1];
n[o + 7] = i[0];
}
t.writeDoubleLE = n ? o : r;
t.writeDoubleBE = n ? r : o;
function s(t, n) {
i[0] = t[n];
i[1] = t[n + 1];
i[2] = t[n + 2];
i[3] = t[n + 3];
i[4] = t[n + 4];
i[5] = t[n + 5];
i[6] = t[n + 6];
i[7] = t[n + 7];
return e[0];
}
function a(t, n) {
i[7] = t[n];
i[6] = t[n + 1];
i[5] = t[n + 2];
i[4] = t[n + 3];
i[3] = t[n + 4];
i[2] = t[n + 5];
i[1] = t[n + 6];
i[0] = t[n + 7];
return e[0];
}
t.readDoubleLE = n ? s : a;
t.readDoubleBE = n ? a : s;
}() : function() {
function e(t, e, i, n, o, r) {
var s = n < 0 ? 1 : 0;
s && (n = -n);
if (0 === n) {
t(0, o, r + e);
t(1 / n > 0 ? 0 : 2147483648, o, r + i);
} else if (isNaN(n)) {
t(0, o, r + e);
t(2146959360, o, r + i);
} else if (n > 17976931348623157e292) {
t(0, o, r + e);
t((s << 31 | 2146435072) >>> 0, o, r + i);
} else {
var a;
if (n < 22250738585072014e-324) {
t((a = n / 5e-324) >>> 0, o, r + e);
t((s << 31 | a / 4294967296) >>> 0, o, r + i);
} else {
var l = Math.floor(Math.log(n) / Math.LN2);
1024 === l && (l = 1023);
t(4503599627370496 * (a = n * Math.pow(2, -l)) >>> 0, o, r + e);
t((s << 31 | l + 1023 << 20 | 1048576 * a & 1048575) >>> 0, o, r + i);
}
}
}
t.writeDoubleLE = e.bind(null, n, 0, 4);
t.writeDoubleBE = e.bind(null, o, 4, 0);
function i(t, e, i, n, o) {
var r = t(n, o + e), s = t(n, o + i), a = 2 * (s >> 31) + 1, l = s >>> 20 & 2047, h = 4294967296 * (1048575 & s) + r;
return 2047 === l ? h ? NaN : Infinity * a : 0 === l ? 5e-324 * a * h : a * Math.pow(2, l - 1075) * (h + 4503599627370496);
}
t.readDoubleLE = i.bind(null, r, 0, 4);
t.readDoubleBE = i.bind(null, s, 4, 0);
}();
return t;
}
function n(t, e, i) {
e[i] = 255 & t;
e[i + 1] = t >>> 8 & 255;
e[i + 2] = t >>> 16 & 255;
e[i + 3] = t >>> 24;
}
function o(t, e, i) {
e[i] = t >>> 24;
e[i + 1] = t >>> 16 & 255;
e[i + 2] = t >>> 8 & 255;
e[i + 3] = 255 & t;
}
function r(t, e) {
return (t[e] | t[e + 1] << 8 | t[e + 2] << 16 | t[e + 3] << 24) >>> 0;
}
function s(t, e) {
return (t[e] << 24 | t[e + 1] << 16 | t[e + 2] << 8 | t[e + 3]) >>> 0;
}
}, {} ],
5: [ function(require, module, exports) {
module.exports = inquire;
function inquire(moduleName) {
try {
var mod = eval("quire".replace(/^/, "re"))(moduleName);
if (mod && (mod.length || Object.keys(mod).length)) return mod;
} catch (t) {}
return null;
}
}, {} ],
6: [ function(t, e) {
e.exports = function(t, e, i) {
var n = i || 8192, o = n >>> 1, r = null, s = n;
return function(i) {
if (i < 1 || i > o) return t(i);
if (s + i > n) {
r = t(n);
s = 0;
}
var a = e.call(r, s, s += i);
7 & s && (s = 1 + (7 | s));
return a;
};
};
}, {} ],
7: [ function(t, e, i) {
var n = i;
n.length = function(t) {
for (var e = 0, i = 0, n = 0; n < t.length; ++n) if ((i = t.charCodeAt(n)) < 128) e += 1; else if (i < 2048) e += 2; else if (55296 == (64512 & i) && 56320 == (64512 & t.charCodeAt(n + 1))) {
++n;
e += 4;
} else e += 3;
return e;
};
n.read = function(t, e, i) {
if (i - e < 1) return "";
for (var n, o = null, r = [], s = 0; e < i; ) {
if ((n = t[e++]) < 128) r[s++] = n; else if (n > 191 && n < 224) r[s++] = (31 & n) << 6 | 63 & t[e++]; else if (n > 239 && n < 365) {
n = ((7 & n) << 18 | (63 & t[e++]) << 12 | (63 & t[e++]) << 6 | 63 & t[e++]) - 65536;
r[s++] = 55296 + (n >> 10);
r[s++] = 56320 + (1023 & n);
} else r[s++] = (15 & n) << 12 | (63 & t[e++]) << 6 | 63 & t[e++];
if (s > 8191) {
(o || (o = [])).push(String.fromCharCode.apply(String, r));
s = 0;
}
}
if (o) {
s && o.push(String.fromCharCode.apply(String, r.slice(0, s)));
return o.join("");
}
return String.fromCharCode.apply(String, r.slice(0, s));
};
n.write = function(t, e, i) {
for (var n, o, r = i, s = 0; s < t.length; ++s) if ((n = t.charCodeAt(s)) < 128) e[i++] = n; else if (n < 2048) {
e[i++] = n >> 6 | 192;
e[i++] = 63 & n | 128;
} else if (55296 == (64512 & n) && 56320 == (64512 & (o = t.charCodeAt(s + 1)))) {
n = 65536 + ((1023 & n) << 10) + (1023 & o);
++s;
e[i++] = n >> 18 | 240;
e[i++] = n >> 12 & 63 | 128;
e[i++] = n >> 6 & 63 | 128;
e[i++] = 63 & n | 128;
} else {
e[i++] = n >> 12 | 224;
e[i++] = n >> 6 & 63 | 128;
e[i++] = 63 & n | 128;
}
return i - r;
};
}, {} ],
8: [ function(t, e, i) {
var n = i;
n.build = "minimal";
n.Writer = t(16);
n.BufferWriter = t(17);
n.Reader = t(9);
n.BufferReader = t(10);
n.util = t(15);
n.rpc = t(12);
n.roots = t(11);
n.configure = o;
function o() {
n.util._configure();
n.Writer._configure(n.BufferWriter);
n.Reader._configure(n.BufferReader);
}
o();
}, {
10: 10,
11: 11,
12: 12,
15: 15,
16: 16,
17: 17,
9: 9
} ],
9: [ function(t, e) {
e.exports = a;
var i, n = t(15), o = n.LongBits, r = n.utf8;
function s(t, e) {
return RangeError("index out of range: " + t.pos + " + " + (e || 1) + " > " + t.len);
}
function a(t) {
this.buf = t;
this.pos = 0;
this.len = t.length;
}
var l, h = "undefined" != typeof Uint8Array ? function(t) {
if (t instanceof Uint8Array || Array.isArray(t)) return new a(t);
throw Error("illegal buffer");
} : function(t) {
if (Array.isArray(t)) return new a(t);
throw Error("illegal buffer");
}, c = function() {
return n.Buffer ? function(t) {
return (a.create = function(t) {
return n.Buffer.isBuffer(t) ? new i(t) : h(t);
})(t);
} : h;
};
a.create = c();
a.prototype._slice = n.Array.prototype.subarray || n.Array.prototype.slice;
a.prototype.uint32 = (l = 4294967295, function() {
l = (127 & this.buf[this.pos]) >>> 0;
if (this.buf[this.pos++] < 128) return l;
l = (l | (127 & this.buf[this.pos]) << 7) >>> 0;
if (this.buf[this.pos++] < 128) return l;
l = (l | (127 & this.buf[this.pos]) << 14) >>> 0;
if (this.buf[this.pos++] < 128) return l;
l = (l | (127 & this.buf[this.pos]) << 21) >>> 0;
if (this.buf[this.pos++] < 128) return l;
l = (l | (15 & this.buf[this.pos]) << 28) >>> 0;
if (this.buf[this.pos++] < 128) return l;
if ((this.pos += 5) > this.len) {
this.pos = this.len;
throw s(this, 10);
}
return l;
});
a.prototype.int32 = function() {
return 0 | this.uint32();
};
a.prototype.sint32 = function() {
var t = this.uint32();
return t >>> 1 ^ -(1 & t) | 0;
};
function u() {
var t = new o(0, 0), e = 0;
if (!(this.len - this.pos > 4)) {
for (;e < 3; ++e) {
if (this.pos >= this.len) throw s(this);
t.lo = (t.lo | (127 & this.buf[this.pos]) << 7 * e) >>> 0;
if (this.buf[this.pos++] < 128) return t;
}
t.lo = (t.lo | (127 & this.buf[this.pos++]) << 7 * e) >>> 0;
return t;
}
for (;e < 4; ++e) {
t.lo = (t.lo | (127 & this.buf[this.pos]) << 7 * e) >>> 0;
if (this.buf[this.pos++] < 128) return t;
}
t.lo = (t.lo | (127 & this.buf[this.pos]) << 28) >>> 0;
t.hi = (t.hi | (127 & this.buf[this.pos]) >> 4) >>> 0;
if (this.buf[this.pos++] < 128) return t;
e = 0;
if (this.len - this.pos > 4) for (;e < 5; ++e) {
t.hi = (t.hi | (127 & this.buf[this.pos]) << 7 * e + 3) >>> 0;
if (this.buf[this.pos++] < 128) return t;
} else for (;e < 5; ++e) {
if (this.pos >= this.len) throw s(this);
t.hi = (t.hi | (127 & this.buf[this.pos]) << 7 * e + 3) >>> 0;
if (this.buf[this.pos++] < 128) return t;
}
throw Error("invalid varint encoding");
}
a.prototype.bool = function() {
return 0 !== this.uint32();
};
function p(t, e) {
return (t[e - 4] | t[e - 3] << 8 | t[e - 2] << 16 | t[e - 1] << 24) >>> 0;
}
a.prototype.fixed32 = function() {
if (this.pos + 4 > this.len) throw s(this, 4);
return p(this.buf, this.pos += 4);
};
a.prototype.sfixed32 = function() {
if (this.pos + 4 > this.len) throw s(this, 4);
return 0 | p(this.buf, this.pos += 4);
};
function d() {
if (this.pos + 8 > this.len) throw s(this, 8);
return new o(p(this.buf, this.pos += 4), p(this.buf, this.pos += 4));
}
a.prototype.float = function() {
if (this.pos + 4 > this.len) throw s(this, 4);
var t = n.float.readFloatLE(this.buf, this.pos);
this.pos += 4;
return t;
};
a.prototype.double = function() {
if (this.pos + 8 > this.len) throw s(this, 4);
var t = n.float.readDoubleLE(this.buf, this.pos);
this.pos += 8;
return t;
};
a.prototype.bytes = function() {
var t = this.uint32(), e = this.pos, i = this.pos + t;
if (i > this.len) throw s(this, t);
this.pos += t;
return Array.isArray(this.buf) ? this.buf.slice(e, i) : e === i ? new this.buf.constructor(0) : this._slice.call(this.buf, e, i);
};
a.prototype.string = function() {
var t = this.bytes();
return r.read(t, 0, t.length);
};
a.prototype.skip = function(t) {
if ("number" == typeof t) {
if (this.pos + t > this.len) throw s(this, t);
this.pos += t;
} else do {
if (this.pos >= this.len) throw s(this);
} while (128 & this.buf[this.pos++]);
return this;
};
a.prototype.skipType = function(t) {
switch (t) {
case 0:
this.skip();
break;

case 1:
this.skip(8);
break;

case 2:
this.skip(this.uint32());
break;

case 3:
for (;4 != (t = 7 & this.uint32()); ) this.skipType(t);
break;

case 5:
this.skip(4);
break;

default:
throw Error("invalid wire type " + t + " at offset " + this.pos);
}
return this;
};
a._configure = function(t) {
i = t;
a.create = c();
i._configure();
var e = n.Long ? "toLong" : "toNumber";
n.merge(a.prototype, {
int64: function() {
return u.call(this)[e](!1);
},
uint64: function() {
return u.call(this)[e](!0);
},
sint64: function() {
return u.call(this).zzDecode()[e](!1);
},
fixed64: function() {
return d.call(this)[e](!0);
},
sfixed64: function() {
return d.call(this)[e](!1);
}
});
};
}, {
15: 15
} ],
10: [ function(t, e) {
e.exports = o;
var i = t(9);
(o.prototype = Object.create(i.prototype)).constructor = o;
var n = t(15);
function o(t) {
i.call(this, t);
}
o._configure = function() {
n.Buffer && (o.prototype._slice = n.Buffer.prototype.slice);
};
o.prototype.string = function() {
var t = this.uint32();
return this.buf.utf8Slice ? this.buf.utf8Slice(this.pos, this.pos = Math.min(this.pos + t, this.len)) : this.buf.toString("utf-8", this.pos, this.pos = Math.min(this.pos + t, this.len));
};
o._configure();
}, {
15: 15,
9: 9
} ],
11: [ function(t, e) {
e.exports = {};
}, {} ],
12: [ function(t, e, i) {
i.Service = t(13);
}, {
13: 13
} ],
13: [ function(t, e) {
e.exports = n;
var i = t(15);
(n.prototype = Object.create(i.EventEmitter.prototype)).constructor = n;
function n(t, e, n) {
if ("function" != typeof t) throw TypeError("rpcImpl must be a function");
i.EventEmitter.call(this);
this.rpcImpl = t;
this.requestDelimited = Boolean(e);
this.responseDelimited = Boolean(n);
}
n.prototype.rpcCall = function t(e, n, o, r, s) {
if (!r) throw TypeError("request must be specified");
var a = this;
if (!s) return i.asPromise(t, a, e, n, o, r);
if (!a.rpcImpl) {
setTimeout(function() {
s(Error("already ended"));
}, 0);
return undefined;
}
try {
return a.rpcImpl(e, n[a.requestDelimited ? "encodeDelimited" : "encode"](r).finish(), function(t, i) {
if (t) {
a.emit("error", t, e);
return s(t);
}
if (null === i) {
a.end(!0);
return undefined;
}
if (!(i instanceof o)) try {
i = o[a.responseDelimited ? "decodeDelimited" : "decode"](i);
} catch (t) {
a.emit("error", t, e);
return s(t);
}
a.emit("data", i, e);
return s(null, i);
});
} catch (t) {
a.emit("error", t, e);
setTimeout(function() {
s(t);
}, 0);
return undefined;
}
};
n.prototype.end = function(t) {
if (this.rpcImpl) {
t || this.rpcImpl(null, null, null);
this.rpcImpl = null;
this.emit("end").off();
}
return this;
};
}, {
15: 15
} ],
14: [ function(t, e) {
e.exports = n;
var i = t(15);
function n(t, e) {
this.lo = t >>> 0;
this.hi = e >>> 0;
}
var o = n.zero = new n(0, 0);
o.toNumber = function() {
return 0;
};
o.zzEncode = o.zzDecode = function() {
return this;
};
o.length = function() {
return 1;
};
var r = n.zeroHash = "\0\0\0\0\0\0\0\0";
n.fromNumber = function(t) {
if (0 === t) return o;
var e = t < 0;
e && (t = -t);
var i = t >>> 0, r = (t - i) / 4294967296 >>> 0;
if (e) {
r = ~r >>> 0;
i = ~i >>> 0;
if (++i > 4294967295) {
i = 0;
++r > 4294967295 && (r = 0);
}
}
return new n(i, r);
};
n.from = function(t) {
if ("number" == typeof t) return n.fromNumber(t);
if (i.isString(t)) {
if (!i.Long) return n.fromNumber(parseInt(t, 10));
t = i.Long.fromString(t);
}
return t.low || t.high ? new n(t.low >>> 0, t.high >>> 0) : o;
};
n.prototype.toNumber = function(t) {
if (!t && this.hi >>> 31) {
var e = 1 + ~this.lo >>> 0, i = ~this.hi >>> 0;
e || (i = i + 1 >>> 0);
return -(e + 4294967296 * i);
}
return this.lo + 4294967296 * this.hi;
};
n.prototype.toLong = function(t) {
return i.Long ? new i.Long(0 | this.lo, 0 | this.hi, Boolean(t)) : {
low: 0 | this.lo,
high: 0 | this.hi,
unsigned: Boolean(t)
};
};
var s = String.prototype.charCodeAt;
n.fromHash = function(t) {
return t === r ? o : new n((s.call(t, 0) | s.call(t, 1) << 8 | s.call(t, 2) << 16 | s.call(t, 3) << 24) >>> 0, (s.call(t, 4) | s.call(t, 5) << 8 | s.call(t, 6) << 16 | s.call(t, 7) << 24) >>> 0);
};
n.prototype.toHash = function() {
return String.fromCharCode(255 & this.lo, this.lo >>> 8 & 255, this.lo >>> 16 & 255, this.lo >>> 24, 255 & this.hi, this.hi >>> 8 & 255, this.hi >>> 16 & 255, this.hi >>> 24);
};
n.prototype.zzEncode = function() {
var t = this.hi >> 31;
this.hi = ((this.hi << 1 | this.lo >>> 31) ^ t) >>> 0;
this.lo = (this.lo << 1 ^ t) >>> 0;
return this;
};
n.prototype.zzDecode = function() {
var t = -(1 & this.lo);
this.lo = ((this.lo >>> 1 | this.hi << 31) ^ t) >>> 0;
this.hi = (this.hi >>> 1 ^ t) >>> 0;
return this;
};
n.prototype.length = function() {
var t = this.lo, e = (this.lo >>> 28 | this.hi << 4) >>> 0, i = this.hi >>> 24;
return 0 === i ? 0 === e ? t < 16384 ? t < 128 ? 1 : 2 : t < 2097152 ? 3 : 4 : e < 16384 ? e < 128 ? 5 : 6 : e < 2097152 ? 7 : 8 : i < 128 ? 9 : 10;
};
}, {
15: 15
} ],
15: [ function(t, e, i) {
var n = i;
n.asPromise = t(1);
n.base64 = t(2);
n.EventEmitter = t(3);
n.float = t(4);
n.inquire = t(5);
n.utf8 = t(7);
n.pool = t(6);
n.LongBits = t(14);
n.isNode = Boolean("undefined" != typeof global && global && global.process && global.process.versions && global.process.versions.node);
n.global = n.isNode && global || "undefined" != typeof window && window || "undefined" != typeof self && self || this;
n.emptyArray = Object.freeze ? Object.freeze([]) : [];
n.emptyObject = Object.freeze ? Object.freeze({}) : {};
n.isInteger = Number.isInteger || function(t) {
return "number" == typeof t && isFinite(t) && Math.floor(t) === t;
};
n.isString = function(t) {
return "string" == typeof t || t instanceof String;
};
n.isObject = function(t) {
return t && "object" == typeof t;
};
n.isset = n.isSet = function(t, e) {
var i = t[e];
return !(null == i || !t.hasOwnProperty(e)) && ("object" != typeof i || (Array.isArray(i) ? i.length : Object.keys(i).length) > 0);
};
n.Buffer = function() {
try {
var t = n.inquire("buffer").Buffer;
return t.prototype.utf8Write ? t : null;
} catch (t) {
return null;
}
}();
n._Buffer_from = null;
n._Buffer_allocUnsafe = null;
n.newBuffer = function(t) {
return "number" == typeof t ? n.Buffer ? n._Buffer_allocUnsafe(t) : new n.Array(t) : n.Buffer ? n._Buffer_from(t) : "undefined" == typeof Uint8Array ? t : new Uint8Array(t);
};
n.Array = "undefined" != typeof Uint8Array ? Uint8Array : Array;
n.Long = n.global.dcodeIO && n.global.dcodeIO.Long || n.global.Long || n.inquire("long");
n.key2Re = /^true|false|0|1$/;
n.key32Re = /^-?(?:0|[1-9][0-9]*)$/;
n.key64Re = /^(?:[\\x00-\\xff]{8}|-?(?:0|[1-9][0-9]*))$/;
n.longToHash = function(t) {
return t ? n.LongBits.from(t).toHash() : n.LongBits.zeroHash;
};
n.longFromHash = function(t, e) {
var i = n.LongBits.fromHash(t);
return n.Long ? n.Long.fromBits(i.lo, i.hi, e) : i.toNumber(Boolean(e));
};
function o(t, e, i) {
for (var n = Object.keys(e), o = 0; o < n.length; ++o) t[n[o]] !== undefined && i || (t[n[o]] = e[n[o]]);
return t;
}
n.merge = o;
n.lcFirst = function(t) {
return t.charAt(0).toLowerCase() + t.substring(1);
};
function r(t) {
function e(t, i) {
if (!(this instanceof e)) return new e(t, i);
Object.defineProperty(this, "message", {
get: function() {
return t;
}
});
Error.captureStackTrace ? Error.captureStackTrace(this, e) : Object.defineProperty(this, "stack", {
value: new Error().stack || ""
});
i && o(this, i);
}
e.prototype = Object.create(Error.prototype, {
constructor: {
value: e,
writable: !0,
enumerable: !1,
configurable: !0
},
name: {
get: () => t,
set: undefined,
enumerable: !1,
configurable: !0
},
toString: {
value() {
return this.name + ": " + this.message;
},
writable: !0,
enumerable: !1,
configurable: !0
}
});
return e;
}
n.newError = r;
n.ProtocolError = r("ProtocolError");
n.oneOfGetter = function(t) {
for (var e = {}, i = 0; i < t.length; ++i) e[t[i]] = 1;
return function() {
for (var t = Object.keys(this), i = t.length - 1; i > -1; --i) if (1 === e[t[i]] && this[t[i]] !== undefined && null !== this[t[i]]) return t[i];
};
};
n.oneOfSetter = function(t) {
return function(e) {
for (var i = 0; i < t.length; ++i) t[i] !== e && delete this[t[i]];
};
};
n.toJSONOptions = {
longs: String,
enums: String,
bytes: String,
json: !0
};
n._configure = function() {
var t = n.Buffer;
if (t) {
n._Buffer_from = t.from !== Uint8Array.from && t.from || function(e, i) {
return new t(e, i);
};
n._Buffer_allocUnsafe = t.allocUnsafe || function(e) {
return new t(e);
};
} else n._Buffer_from = n._Buffer_allocUnsafe = null;
};
}, {
1: 1,
14: 14,
2: 2,
3: 3,
4: 4,
5: 5,
6: 6,
7: 7
} ],
16: [ function(t, e) {
e.exports = c;
var i, n = t(15), o = n.LongBits, r = n.base64, s = n.utf8;
function a(t, e, i) {
this.fn = t;
this.len = e;
this.next = undefined;
this.val = i;
}
function l() {}
function h(t) {
this.head = t.head;
this.tail = t.tail;
this.len = t.len;
this.next = t.states;
}
function c() {
this.len = 0;
this.head = new a(l, 0, 0);
this.tail = this.head;
this.states = null;
}
var u = function() {
return n.Buffer ? function() {
return (c.create = function() {
return new i();
})();
} : function() {
return new c();
};
};
c.create = u();
c.alloc = function(t) {
return new n.Array(t);
};
n.Array !== Array && (c.alloc = n.pool(c.alloc, n.Array.prototype.subarray));
c.prototype._push = function(t, e, i) {
this.tail = this.tail.next = new a(t, e, i);
this.len += e;
return this;
};
function p(t, e, i) {
e[i] = 255 & t;
}
function d(t, e) {
this.len = t;
this.next = undefined;
this.val = e;
}
d.prototype = Object.create(a.prototype);
d.prototype.fn = function(t, e, i) {
for (;t > 127; ) {
e[i++] = 127 & t | 128;
t >>>= 7;
}
e[i] = t;
};
c.prototype.uint32 = function(t) {
this.len += (this.tail = this.tail.next = new d((t >>>= 0) < 128 ? 1 : t < 16384 ? 2 : t < 2097152 ? 3 : t < 268435456 ? 4 : 5, t)).len;
return this;
};
c.prototype.int32 = function(t) {
return t < 0 ? this._push(f, 10, o.fromNumber(t)) : this.uint32(t);
};
c.prototype.sint32 = function(t) {
return this.uint32((t << 1 ^ t >> 31) >>> 0);
};
function f(t, e, i) {
for (;t.hi; ) {
e[i++] = 127 & t.lo | 128;
t.lo = (t.lo >>> 7 | t.hi << 25) >>> 0;
t.hi >>>= 7;
}
for (;t.lo > 127; ) {
e[i++] = 127 & t.lo | 128;
t.lo = t.lo >>> 7;
}
e[i++] = t.lo;
}
c.prototype.uint64 = function(t) {
var e = o.from(t);
return this._push(f, e.length(), e);
};
c.prototype.int64 = c.prototype.uint64;
c.prototype.sint64 = function(t) {
var e = o.from(t).zzEncode();
return this._push(f, e.length(), e);
};
c.prototype.bool = function(t) {
return this._push(p, 1, t ? 1 : 0);
};
function _(t, e, i) {
e[i] = 255 & t;
e[i + 1] = t >>> 8 & 255;
e[i + 2] = t >>> 16 & 255;
e[i + 3] = t >>> 24;
}
c.prototype.fixed32 = function(t) {
return this._push(_, 4, t >>> 0);
};
c.prototype.sfixed32 = c.prototype.fixed32;
c.prototype.fixed64 = function(t) {
var e = o.from(t);
return this._push(_, 4, e.lo)._push(_, 4, e.hi);
};
c.prototype.sfixed64 = c.prototype.fixed64;
c.prototype.float = function(t) {
return this._push(n.float.writeFloatLE, 4, t);
};
c.prototype.double = function(t) {
return this._push(n.float.writeDoubleLE, 8, t);
};
var g = n.Array.prototype.set ? function(t, e, i) {
e.set(t, i);
} : function(t, e, i) {
for (var n = 0; n < t.length; ++n) e[i + n] = t[n];
};
c.prototype.bytes = function(t) {
var e = t.length >>> 0;
if (!e) return this._push(p, 1, 0);
if (n.isString(t)) {
var i = c.alloc(e = r.length(t));
r.decode(t, i, 0);
t = i;
}
return this.uint32(e)._push(g, e, t);
};
c.prototype.string = function(t) {
var e = s.length(t);
return e ? this.uint32(e)._push(s.write, e, t) : this._push(p, 1, 0);
};
c.prototype.fork = function() {
this.states = new h(this);
this.head = this.tail = new a(l, 0, 0);
this.len = 0;
return this;
};
c.prototype.reset = function() {
if (this.states) {
this.head = this.states.head;
this.tail = this.states.tail;
this.len = this.states.len;
this.states = this.states.next;
} else {
this.head = this.tail = new a(l, 0, 0);
this.len = 0;
}
return this;
};
c.prototype.ldelim = function() {
var t = this.head, e = this.tail, i = this.len;
this.reset().uint32(i);
if (i) {
this.tail.next = t.next;
this.tail = e;
this.len += i;
}
return this;
};
c.prototype.finish = function() {
for (var t = this.head.next, e = this.constructor.alloc(this.len), i = 0; t; ) {
t.fn(t.val, e, i);
i += t.len;
t = t.next;
}
return e;
};
c._configure = function(t) {
i = t;
c.create = u();
i._configure();
};
}, {
15: 15
} ],
17: [ function(t, e) {
e.exports = o;
var i = t(16);
(o.prototype = Object.create(i.prototype)).constructor = o;
var n = t(15);
function o() {
i.call(this);
}
o._configure = function() {
o.alloc = n._Buffer_allocUnsafe;
o.writeBytesBuffer = n.Buffer && n.Buffer.prototype instanceof Uint8Array && "set" === n.Buffer.prototype.set.name ? function(t, e, i) {
e.set(t, i);
} : function(t, e, i) {
if (t.copy) t.copy(e, i, 0, t.length); else for (var n = 0; n < t.length; ) e[i++] = t[n++];
};
};
o.prototype.bytes = function(t) {
n.isString(t) && (t = n._Buffer_from(t, "base64"));
var e = t.length >>> 0;
this.uint32(e);
e && this._push(o.writeBytesBuffer, e, t);
return this;
};
function r(t, e, i) {
t.length < 40 ? n.utf8.write(t, e, i) : e.utf8Write ? e.utf8Write(t, i) : e.write(t, i);
}
o.prototype.string = function(t) {
var e = n.Buffer.byteLength(t);
this.uint32(e);
e && this._push(r, e, t);
return this;
};
o._configure();
}, {
15: 15,
16: 16
} ]
}, {});
})();
window.gfplugin_protobuf = protobuf;
cc._RF.pop();
}).call(this, "undefined" != typeof global ? global : "undefined" != typeof self ? self : "undefined" != typeof window ? window : {});
}, {
1: void 0,
10: void 0,
11: void 0,
12: void 0,
13: void 0,
14: void 0,
15: void 0,
16: void 0,
17: void 0,
2: void 0,
3: void 0,
4: void 0,
5: void 0,
6: void 0,
7: void 0,
9: void 0
} ],
lianyun_fairygui: [ function(t, e) {
"use strict";
cc._RF.push(e, "02b1a/XlrJAt779o4pZ34xd", "lianyun_fairygui");
window.createFgui = function() {
let t = {};
window.gflianyunfgui = t;
window.__extends = this && this.__extends || (e = function(t, i) {
return (e = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(t, e) {
t.__proto__ = e;
} || function(t, e) {
for (var i in e) e.hasOwnProperty(i) && (t[i] = e[i]);
})(t, i);
}, function(t, i) {
e(t, i);
function n() {
this.constructor = t;
}
t.prototype = null === i ? Object.create(i) : (n.prototype = i.prototype, new n());
});
var e, i = this && this.__spreadArrays || function() {
for (var t = 0, e = 0, i = arguments.length; e < i; e++) t += arguments[e].length;
var n = Array(t), o = 0;
for (e = 0; e < i; e++) for (var r = arguments[e], s = 0, a = r.length; s < a; s++, 
o++) n[o] = r[s];
return n;
};
(function(t) {
(function(t) {
t[t.LEFT = 0] = "LEFT";
t[t.CENTER = 1] = "CENTER";
t[t.RIGHT = 2] = "RIGHT";
})(t.HorizontalTextAlignment || (t.HorizontalTextAlignment = {}));
(function(t) {
t[t.TOP = 0] = "TOP";
t[t.CENTER = 1] = "CENTER";
t[t.BOTTOM = 2] = "BOTTOM";
})(t.VerticalTextAlignment || (t.VerticalTextAlignment = {}));
(function(t) {
t[t.ANY = 0] = "ANY";
t[t.NUMERIC = 2] = "NUMERIC";
t[t.SINGLE_LINE = 6] = "SINGLE_LINE";
})(t.InputMode || (t.InputMode = {}));
(function(t) {
t[t.PASSWORD = 0] = "PASSWORD";
t[t.DEFAULT = 5] = "DEFAULT";
})(t.InputFlag || (t.InputFlag = {}));
t.moduleResolver = function(t) {
return t;
};
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {}
e.prototype.createObject = function(e, i) {
if (this._node) throw "Already running";
"string" == typeof e && (e = t.UIPackage.getByName(e));
if (!e) throw new Error("package not found: " + e);
var n = e.getItemByName(i);
if (!n) throw new Error("resource not found: " + i);
this.internalCreateObject(n);
};
e.prototype.createObjectFromURL = function(e) {
if (this._node) throw "Already running";
var i = t.UIPackage.getItemByURL(e);
if (!i) throw new Error("resource not found: " + e);
this.internalCreateObject(i);
};
e.prototype.cancel = function() {
if (this._node) {
this._node.destroy();
this._node = null;
}
};
e.prototype.internalCreateObject = function(t) {
this._node = new cc.Node("[AsyncCreating:" + t.name + "]");
this._node.parent = cc.director.getScene();
this._node.on("#", this.completed, this);
try {
this._node.addComponent(i).init(t);
} catch (e) {
console.error("AsyncOperation error:" + t.name, e);
this.cancel();
this.callback && this.callback(null);
}
};
e.prototype.completed = function(t) {
this.cancel();
this.callback && this.callback(t);
};
return e;
}();
t.AsyncOperation = e;
var i = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._itemList = new Array();
t._objectPool = new Array();
t._packageItems = new Array();
return t;
}
i.prototype.init = function(t) {
this._itemList.length = 0;
this._objectPool.length = 0;
var e = {
pi: t,
type: t.objectType
};
e.childCount = this.collectComponentChildren(t);
this._itemList.push(e);
this._index = 0;
};
i.prototype.onDestroy = function() {
this._itemList.length = 0;
var t = this._objectPool.length;
if (t > 0) {
for (var e = 0; e < t; e++) this._objectPool[e].dispose();
this._objectPool.length = 0;
}
};
i.prototype.collectComponentChildren = function(e) {
var i, n, o, r, s, a, l = e.rawData;
l.seek(0, 2);
var h = l.readShort();
for (o = 0; o < h; o++) {
r = l.readShort();
s = l.position;
l.seek(s, 0);
var c = l.readByte(), u = l.readS(), p = l.readS();
l.position = s;
if (null != u) {
i = {
pi: n = null != (a = null != p ? t.UIPackage.getById(p) : e.owner) ? a.getItemById(u) : null,
type: c
};
n && n.type == t.PackageItemType.Component && (i.childCount = this.collectComponentChildren(n));
} else {
i = {
type: c
};
c == t.ObjectType.List && (i.listItemCount = this.collectListChildren(l));
}
this._itemList.push(i);
i.pi && i.pi.getBranch() && this._packageItems.push();
l.position = s + r;
}
return h;
};
i.prototype.collectListChildren = function(e) {
e.seek(e.position, 8);
var i, n, o, r, s, a = 0, l = e.readS(), h = e.readShort();
for (i = 0; i < h; i++) {
n = e.readShort();
n += e.position;
null == (o = e.readS()) && (o = l);
if (o && (r = t.UIPackage.getItemByURL(o))) {
s = {
pi: r,
type: r.objectType
};
r.type == t.PackageItemType.Component && (s.childCount = this.collectComponentChildren(r));
this._itemList.push(s);
a++;
}
e.position = n;
}
return a;
};
i.prototype.update = function() {
try {
this.doupdate();
} catch (t) {
console.error("AsyncOperation update error", t);
this.node.emit("#");
}
};
i.prototype.doupdate = function() {
for (var e, i, n, o, r = t.ToolSet.getTime(), s = t.UIConfig.frameTimeForAsyncUIConstruction, a = this._itemList.length; this._index < a; ) {
if ((i = this._itemList[this._index]).pi) {
e = t.UIObjectFactory.newObject(i.pi);
this._objectPool.push(e);
t.UIPackage._constructing++;
if (i.pi.type == t.PackageItemType.Component) {
n = this._objectPool.length - i.childCount - 1;
e.constructFromResource2(this._objectPool, n);
this._objectPool.splice(n, i.childCount);
} else e.constructFromResource();
t.UIPackage._constructing--;
} else {
e = t.UIObjectFactory.newObject(i.type);
this._objectPool.push(e);
if (i.type == t.ObjectType.List && i.listItemCount > 0) {
n = this._objectPool.length - i.listItemCount - 1;
for (o = 0; o < i.listItemCount; o++) e.itemPool.returnObject(this._objectPool[o + n]);
this._objectPool.splice(n, i.listItemCount);
}
}
this._index++;
if (this._index % 5 == 0 && t.ToolSet.getTime() - r >= s) return;
}
var l = this._objectPool[0];
this._itemList.length = 0;
this._objectPool.length = 0;
this.node.emit("#", l);
};
return i;
}(cc.Component);
})(t || (t = {}));
(function(t) {
var e = 0, i = function(i) {
__extends(n, i);
function n() {
var t = i.call(this) || this;
t._pageIds = [];
t._pageNames = [];
t._selectedIndex = -1;
t._previousIndex = -1;
return t;
}
n.prototype.dispose = function() {};
Object.defineProperty(n.prototype, "selectedIndex", {
get: function() {
return this._selectedIndex;
},
set: function(e) {
if (this._selectedIndex != e) {
if (e > this._pageIds.length - 1) throw "index out of bounds: " + e;
this.changing = !0;
this._previousIndex = this._selectedIndex;
this._selectedIndex = e;
this.parent.applyController(this);
this.emit(t.Event.STATUS_CHANGED, this);
this.changing = !1;
}
},
enumerable: !1,
configurable: !0
});
n.prototype.onChanged = function(e, i) {
this.on(t.Event.STATUS_CHANGED, e, i);
};
n.prototype.offChanged = function(e, i) {
this.off(t.Event.STATUS_CHANGED, e, i);
};
n.prototype.setSelectedIndex = function(t) {
if (this._selectedIndex != t) {
if (t > this._pageIds.length - 1) throw "index out of bounds: " + t;
this.changing = !0;
this._previousIndex = this._selectedIndex;
this._selectedIndex = t;
this.parent.applyController(this);
this.changing = !1;
}
};
Object.defineProperty(n.prototype, "previsousIndex", {
get: function() {
return this._previousIndex;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "selectedPage", {
get: function() {
return -1 == this._selectedIndex ? null : this._pageNames[this._selectedIndex];
},
set: function(t) {
var e = this._pageNames.indexOf(t);
-1 == e && (e = 0);
this.selectedIndex = e;
},
enumerable: !1,
configurable: !0
});
n.prototype.setSelectedPage = function(t) {
var e = this._pageNames.indexOf(t);
-1 == e && (e = 0);
this.setSelectedIndex(e);
};
Object.defineProperty(n.prototype, "previousPage", {
get: function() {
return -1 == this._previousIndex ? null : this._pageNames[this._previousIndex];
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "pageCount", {
get: function() {
return this._pageIds.length;
},
enumerable: !1,
configurable: !0
});
n.prototype.getPageName = function(t) {
return this._pageNames[t];
};
n.prototype.addPage = function(t) {
void 0 === t && (t = "");
this.addPageAt(t, this._pageIds.length);
};
n.prototype.addPageAt = function(t, i) {
var n = "" + e++;
if (i == this._pageIds.length) {
this._pageIds.push(n);
this._pageNames.push(t);
} else {
this._pageIds.splice(i, 0, n);
this._pageNames.splice(i, 0, t);
}
};
n.prototype.removePage = function(t) {
var e = this._pageNames.indexOf(t);
if (-1 != e) {
this._pageIds.splice(e, 1);
this._pageNames.splice(e, 1);
this._selectedIndex >= this._pageIds.length ? this.selectedIndex = this._selectedIndex - 1 : this.parent.applyController(this);
}
};
n.prototype.removePageAt = function(t) {
this._pageIds.splice(t, 1);
this._pageNames.splice(t, 1);
this._selectedIndex >= this._pageIds.length ? this.selectedIndex = this._selectedIndex - 1 : this.parent.applyController(this);
};
n.prototype.clearPages = function() {
this._pageIds.length = 0;
this._pageNames.length = 0;
-1 != this._selectedIndex ? this.selectedIndex = -1 : this.parent.applyController(this);
};
n.prototype.hasPage = function(t) {
return -1 != this._pageNames.indexOf(t);
};
n.prototype.getPageIndexById = function(t) {
return this._pageIds.indexOf(t);
};
n.prototype.getPageIdByName = function(t) {
var e = this._pageNames.indexOf(t);
return -1 != e ? this._pageIds[e] : null;
};
n.prototype.getPageNameById = function(t) {
var e = this._pageIds.indexOf(t);
return -1 != e ? this._pageNames[e] : null;
};
n.prototype.getPageId = function(t) {
return this._pageIds[t];
};
Object.defineProperty(n.prototype, "selectedPageId", {
get: function() {
return -1 == this._selectedIndex ? null : this._pageIds[this._selectedIndex];
},
set: function(t) {
var e = this._pageIds.indexOf(t);
this.selectedIndex = e;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "oppositePageId", {
set: function(t) {
this._pageIds.indexOf(t) > 0 ? this.selectedIndex = 0 : this._pageIds.length > 1 && (this.selectedIndex = 1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "previousPageId", {
get: function() {
return -1 == this._previousIndex ? null : this._pageIds[this._previousIndex];
},
enumerable: !1,
configurable: !0
});
n.prototype.runActions = function() {
if (this._actions) for (var t = this._actions.length, e = 0; e < t; e++) this._actions[e].run(this, this.previousPageId, this.selectedPageId);
};
n.prototype.setup = function(e) {
var i, n, o = e.position;
e.seek(o, 0);
this.name = e.readS();
e.readBool() && (this.autoRadioGroupDepth = !0);
e.seek(o, 1);
var r = e.readShort();
for (i = 0; i < r; i++) {
this._pageIds.push(e.readS());
this._pageNames.push(e.readS());
}
var s = 0;
if (e.version >= 2) switch (e.readByte()) {
case 1:
s = e.readShort();
break;

case 2:
-1 == (s = this._pageNames.indexOf(t.UIPackage.branch)) && (s = 0);
break;

case 3:
-1 == (s = this._pageNames.indexOf(t.UIPackage.getVar(e.readS()))) && (s = 0);
}
e.seek(o, 2);
if ((r = e.readShort()) > 0) {
this._actions || (this._actions = new Array());
for (i = 0; i < r; i++) {
n = e.readShort();
n += e.position;
var a = t.ControllerAction.createAction(e.readByte());
a.setup(e);
this._actions.push(a);
e.position = n;
}
}
this.parent && this._pageIds.length > 0 ? this._selectedIndex = s : this._selectedIndex = -1;
};
return n;
}(cc.EventTarget);
t.Controller = i;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {
this._agent = new t.GLoader();
this._agent.draggable = !0;
this._agent.touchable = !1;
this._agent.setSize(100, 100);
this._agent.setPivot(.5, .5, !0);
this._agent.align = t.AlignType.Center;
this._agent.verticalAlign = t.VertAlignType.Middle;
this._agent.sortingOrder = 1e6;
this._agent.on(t.Event.DRAG_END, this.onDragEnd, this);
}
Object.defineProperty(e, "inst", {
get: function() {
e._inst || (e._inst = new e());
return e._inst;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dragAgent", {
get: function() {
return this._agent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dragging", {
get: function() {
return null != this._agent.parent;
},
enumerable: !1,
configurable: !0
});
e.prototype.startDrag = function(e, i, n, o) {
if (!this._agent.parent) {
this._sourceData = n;
this._agent.url = i;
t.GRoot.inst.addChild(this._agent);
var r = t.GRoot.inst.getTouchPosition(o);
r = t.GRoot.inst.globalToLocal(r.x, r.y);
this._agent.setPosition(r.x, r.y);
this._agent.startDrag(o);
}
};
e.prototype.cancel = function() {
if (this._agent.parent) {
this._agent.stopDrag();
t.GRoot.inst.removeChild(this._agent);
this._sourceData = null;
}
};
e.prototype.onDragEnd = function() {
if (this._agent.parent) {
t.GRoot.inst.removeChild(this._agent);
var e = this._sourceData;
this._sourceData = null;
for (var i = t.GRoot.inst.touchTarget; i; ) {
if (i.node.hasEventListener(t.Event.DROP)) {
i.requestFocus();
i.node.emit(t.Event.DROP, i, e);
return;
}
i = i.parent;
}
}
};
return e;
}();
t.DragDropManager = e;
})(t || (t = {}));
(function(t) {
(function(t) {
t[t.Common = 0] = "Common";
t[t.Check = 1] = "Check";
t[t.Radio = 2] = "Radio";
})(t.ButtonMode || (t.ButtonMode = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Both = 1] = "Both";
t[t.Height = 2] = "Height";
t[t.Shrink = 3] = "Shrink";
})(t.AutoSizeType || (t.AutoSizeType = {}));
(function(t) {
t[t.Left = 0] = "Left";
t[t.Center = 1] = "Center";
t[t.Right = 2] = "Right";
})(t.AlignType || (t.AlignType = {}));
(function(t) {
t[t.Top = 0] = "Top";
t[t.Middle = 1] = "Middle";
t[t.Bottom = 2] = "Bottom";
})(t.VertAlignType || (t.VertAlignType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Scale = 1] = "Scale";
t[t.ScaleMatchHeight = 2] = "ScaleMatchHeight";
t[t.ScaleMatchWidth = 3] = "ScaleMatchWidth";
t[t.ScaleFree = 4] = "ScaleFree";
t[t.ScaleNoBorder = 5] = "ScaleNoBorder";
})(t.LoaderFillType || (t.LoaderFillType = {}));
(function(t) {
t[t.SingleColumn = 0] = "SingleColumn";
t[t.SingleRow = 1] = "SingleRow";
t[t.FlowHorizontal = 2] = "FlowHorizontal";
t[t.FlowVertical = 3] = "FlowVertical";
t[t.Pagination = 4] = "Pagination";
})(t.ListLayoutType || (t.ListLayoutType = {}));
(function(t) {
t[t.Single = 0] = "Single";
t[t.Multiple = 1] = "Multiple";
t[t.Multiple_SingleClick = 2] = "Multiple_SingleClick";
t[t.None = 3] = "None";
})(t.ListSelectionMode || (t.ListSelectionMode = {}));
(function(t) {
t[t.Visible = 0] = "Visible";
t[t.Hidden = 1] = "Hidden";
t[t.Scroll = 2] = "Scroll";
})(t.OverflowType || (t.OverflowType = {}));
(function(t) {
t[t.Image = 0] = "Image";
t[t.MovieClip = 1] = "MovieClip";
t[t.Sound = 2] = "Sound";
t[t.Component = 3] = "Component";
t[t.Atlas = 4] = "Atlas";
t[t.Font = 5] = "Font";
t[t.Swf = 6] = "Swf";
t[t.Misc = 7] = "Misc";
t[t.Unknown = 8] = "Unknown";
t[t.Spine = 9] = "Spine";
t[t.DragonBones = 10] = "DragonBones";
})(t.PackageItemType || (t.PackageItemType = {}));
(function(t) {
t[t.Image = 0] = "Image";
t[t.MovieClip = 1] = "MovieClip";
t[t.Swf = 2] = "Swf";
t[t.Graph = 3] = "Graph";
t[t.Loader = 4] = "Loader";
t[t.Group = 5] = "Group";
t[t.Text = 6] = "Text";
t[t.RichText = 7] = "RichText";
t[t.InputText = 8] = "InputText";
t[t.Component = 9] = "Component";
t[t.List = 10] = "List";
t[t.Label = 11] = "Label";
t[t.Button = 12] = "Button";
t[t.ComboBox = 13] = "ComboBox";
t[t.ProgressBar = 14] = "ProgressBar";
t[t.Slider = 15] = "Slider";
t[t.ScrollBar = 16] = "ScrollBar";
t[t.Tree = 17] = "Tree";
t[t.Loader3D = 18] = "Loader3D";
})(t.ObjectType || (t.ObjectType = {}));
(function(t) {
t[t.Percent = 0] = "Percent";
t[t.ValueAndMax = 1] = "ValueAndMax";
t[t.Value = 2] = "Value";
t[t.Max = 3] = "Max";
})(t.ProgressTitleType || (t.ProgressTitleType = {}));
(function(t) {
t[t.Default = 0] = "Default";
t[t.Visible = 1] = "Visible";
t[t.Auto = 2] = "Auto";
t[t.Hidden = 3] = "Hidden";
})(t.ScrollBarDisplayType || (t.ScrollBarDisplayType = {}));
(function(t) {
t[t.Horizontal = 0] = "Horizontal";
t[t.Vertical = 1] = "Vertical";
t[t.Both = 2] = "Both";
})(t.ScrollType || (t.ScrollType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Horizontal = 1] = "Horizontal";
t[t.Vertical = 2] = "Vertical";
t[t.Both = 3] = "Both";
})(t.FlipType || (t.FlipType = {}));
(function(t) {
t[t.Ascent = 0] = "Ascent";
t[t.Descent = 1] = "Descent";
t[t.Arch = 2] = "Arch";
})(t.ChildrenRenderOrder || (t.ChildrenRenderOrder = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Horizontal = 1] = "Horizontal";
t[t.Vertical = 2] = "Vertical";
})(t.GroupLayoutType || (t.GroupLayoutType = {}));
(function(t) {
t[t.Auto = 0] = "Auto";
t[t.Up = 1] = "Up";
t[t.Down = 2] = "Down";
})(t.PopupDirection || (t.PopupDirection = {}));
(function(t) {
t[t.Left_Left = 0] = "Left_Left";
t[t.Left_Center = 1] = "Left_Center";
t[t.Left_Right = 2] = "Left_Right";
t[t.Center_Center = 3] = "Center_Center";
t[t.Right_Left = 4] = "Right_Left";
t[t.Right_Center = 5] = "Right_Center";
t[t.Right_Right = 6] = "Right_Right";
t[t.Top_Top = 7] = "Top_Top";
t[t.Top_Middle = 8] = "Top_Middle";
t[t.Top_Bottom = 9] = "Top_Bottom";
t[t.Middle_Middle = 10] = "Middle_Middle";
t[t.Bottom_Top = 11] = "Bottom_Top";
t[t.Bottom_Middle = 12] = "Bottom_Middle";
t[t.Bottom_Bottom = 13] = "Bottom_Bottom";
t[t.Width = 14] = "Width";
t[t.Height = 15] = "Height";
t[t.LeftExt_Left = 16] = "LeftExt_Left";
t[t.LeftExt_Right = 17] = "LeftExt_Right";
t[t.RightExt_Left = 18] = "RightExt_Left";
t[t.RightExt_Right = 19] = "RightExt_Right";
t[t.TopExt_Top = 20] = "TopExt_Top";
t[t.TopExt_Bottom = 21] = "TopExt_Bottom";
t[t.BottomExt_Top = 22] = "BottomExt_Top";
t[t.BottomExt_Bottom = 23] = "BottomExt_Bottom";
t[t.Size = 24] = "Size";
})(t.RelationType || (t.RelationType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Horizontal = 1] = "Horizontal";
t[t.Vertical = 2] = "Vertical";
t[t.Radial90 = 3] = "Radial90";
t[t.Radial180 = 4] = "Radial180";
t[t.Radial360 = 5] = "Radial360";
})(t.FillMethod || (t.FillMethod = {}));
(function(t) {
t[t.Top = 0] = "Top";
t[t.Bottom = 1] = "Bottom";
t[t.Left = 2] = "Left";
t[t.Right = 3] = "Right";
})(t.FillOrigin || (t.FillOrigin = {}));
(function(t) {
t[t.Text = 0] = "Text";
t[t.Icon = 1] = "Icon";
t[t.Color = 2] = "Color";
t[t.OutlineColor = 3] = "OutlineColor";
t[t.Playing = 4] = "Playing";
t[t.Frame = 5] = "Frame";
t[t.DeltaTime = 6] = "DeltaTime";
t[t.TimeScale = 7] = "TimeScale";
t[t.FontSize = 8] = "FontSize";
t[t.Selected = 9] = "Selected";
})(t.ObjectPropID || (t.ObjectPropID = {}));
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {
this._x = 0;
this._y = 0;
this._alpha = 1;
this._visible = !0;
this._touchable = !0;
this._skewX = 0;
this._skewY = 0;
this._sortingOrder = 0;
this._internalVisible = !0;
this.sourceWidth = 0;
this.sourceHeight = 0;
this.initWidth = 0;
this.initHeight = 0;
this.minWidth = 0;
this.minHeight = 0;
this.maxWidth = 0;
this.maxHeight = 0;
this._width = 0;
this._height = 0;
this._rawWidth = 0;
this._rawHeight = 0;
this._sizePercentInGroup = 0;
this._node = new cc.Node();
if (-1 == e._defaultGroupIndex) {
e._defaultGroupIndex = 0;
for (var i = cc.game.groupList, n = i.length, o = 0; o < n; o++) if (i[o].toLowerCase() == t.UIConfig.defaultUIGroup.toLowerCase()) {
e._defaultGroupIndex = o;
break;
}
}
this._node.$gobj = this;
this._node.groupIndex = e._defaultGroupIndex;
this._node.setAnchorPoint(0, 1);
this._node.on(cc.Node.EventType.ANCHOR_CHANGED, this.handleAnchorChanged, this);
this._id = this._node.uuid;
this._name = "";
this._relations = new t.Relations(this);
this._gears = new Array(10);
this._blendMode = t.BlendMode.Normal;
this._partner = this._node.addComponent(l);
}
Object.defineProperty(e.prototype, "id", {
get: function() {
return this._id;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "name", {
get: function() {
return this._name;
},
set: function(t) {
this._name = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "x", {
get: function() {
return this._x;
},
set: function(t) {
this.setPosition(t, this._y);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "y", {
get: function() {
return this._y;
},
set: function(t) {
this.setPosition(this._x, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setPosition = function(n, r) {
if (this._x != n || this._y != r) {
var s = n - this._x, a = r - this._y;
this._x = n;
this._y = r;
this.handlePositionChanged();
this instanceof t.GGroup && this.moveChildren(s, a);
this.updateGear(1);
if (this._parent && !(this._parent instanceof t.GList)) {
this._parent.setBoundsChangedFlag();
this._group && this._group.setBoundsChangedFlag(!0);
this._node.emit(t.Event.XY_CHANGED, this);
}
e.draggingObject != this || i || this.localToGlobalRect(0, 0, this._width, this._height, o);
}
};
Object.defineProperty(e.prototype, "xMin", {
get: function() {
return this._pivotAsAnchor ? this._x - this._width * this.node.anchorX : this._x;
},
set: function(t) {
this._pivotAsAnchor ? this.setPosition(t + this._width * this.node.anchorX, this._y) : this.setPosition(t, this._y);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "yMin", {
get: function() {
return this._pivotAsAnchor ? this._y - this._height * (1 - this.node.anchorY) : this._y;
},
set: function(t) {
this._pivotAsAnchor ? this.setPosition(this._x, t + this._height * (1 - this.node.anchorY)) : this.setPosition(this._x, t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "pixelSnapping", {
get: function() {
return this._pixelSnapping;
},
set: function(t) {
if (this._pixelSnapping != t) {
this._pixelSnapping = t;
this.handlePositionChanged();
}
},
enumerable: !1,
configurable: !0
});
e.prototype.center = function(e) {
var i;
i = this._parent ? this.parent : this.root;
this.setPosition((i.width - this._width) / 2, (i.height - this._height) / 2);
if (e) {
this.addRelation(i, t.RelationType.Center_Center);
this.addRelation(i, t.RelationType.Middle_Middle);
}
};
Object.defineProperty(e.prototype, "width", {
get: function() {
this.ensureSizeCorrect();
this._relations.sizeDirty && this._relations.ensureRelationsSizeCorrect();
return this._width;
},
set: function(t) {
this.setSize(t, this._rawHeight);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "height", {
get: function() {
this.ensureSizeCorrect();
this._relations.sizeDirty && this._relations.ensureRelationsSizeCorrect();
return this._height;
},
set: function(t) {
this.setSize(this._rawWidth, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setSize = function(e, i, n) {
if (this._rawWidth != e || this._rawHeight != i) {
this._rawWidth = e;
this._rawHeight = i;
e < this.minWidth && (e = this.minWidth);
i < this.minHeight && (i = this.minHeight);
this.maxWidth > 0 && e > this.maxWidth && (e = this.maxWidth);
this.maxHeight > 0 && i > this.maxHeight && (i = this.maxHeight);
var o = e - this._width, r = i - this._height;
this._width = e;
this._height = i;
this.handleSizeChanged();
0 == this.node.anchorX && 1 == this.node.anchorY || this._pivotAsAnchor || n ? this.handlePositionChanged() : this.setPosition(this.x - this.node.anchorX * o, this.y - (1 - this.node.anchorY) * r);
this instanceof t.GGroup && this.resizeChildren(o, r);
this.updateGear(2);
if (this._parent) {
this._relations.onOwnerSizeChanged(o, r, this._pivotAsAnchor || !n);
this._parent.setBoundsChangedFlag();
this._group && this._group.setBoundsChangedFlag();
}
this._node.emit(t.Event.SIZE_CHANGED, this);
}
};
e.prototype.makeFullScreen = function() {
this.setSize(t.GRoot.inst.width, t.GRoot.inst.height);
};
e.prototype.ensureSizeCorrect = function() {};
Object.defineProperty(e.prototype, "actualWidth", {
get: function() {
return this.width * Math.abs(this._node.scaleX);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "actualHeight", {
get: function() {
return this.height * Math.abs(this._node.scaleY);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "scaleX", {
get: function() {
return this._node.scaleX;
},
set: function(t) {
this.setScale(t, this._node.scaleY);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "scaleY", {
get: function() {
return this._node.scaleY;
},
set: function(t) {
this.setScale(this._node.scaleX, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setScale = function(t, e) {
if (this._node.scaleX != t || this._node.scaleY != e) {
this._node.setScale(t, e);
this.updateGear(2);
}
};
Object.defineProperty(e.prototype, "skewX", {
get: function() {
return this._skewX;
},
set: function(t) {
this.setSkew(t, this._skewY);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "skewY", {
get: function() {
return this._skewY;
},
set: function(t) {
this.setSkew(this._skewX, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setSkew = function(t, e) {
if (this._skewX != t || this._skewY != e) {
this._skewX = t;
this._skewY = e;
this._node.skewX = t;
this._node.skewY = e;
}
};
Object.defineProperty(e.prototype, "pivotX", {
get: function() {
return this.node.anchorX;
},
set: function(t) {
this.node.anchorX = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "pivotY", {
get: function() {
return 1 - this.node.anchorY;
},
set: function(t) {
this.node.anchorY = 1 - t;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPivot = function(t, e, i) {
if (this.node.anchorX != t || this.node.anchorY != 1 - e) {
this._pivotAsAnchor = i;
this.node.setAnchorPoint(t, 1 - e);
} else if (this._pivotAsAnchor != i) {
this._pivotAsAnchor = i;
this.handlePositionChanged();
}
};
Object.defineProperty(e.prototype, "pivotAsAnchor", {
get: function() {
return this._pivotAsAnchor;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "touchable", {
get: function() {
return this._touchable;
},
set: function(t) {
if (this._touchable != t) {
this._touchable = t;
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "grayed", {
get: function() {
return this._grayed;
},
set: function(t) {
if (this._grayed != t) {
this._grayed = t;
this.handleGrayedChanged();
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "enabled", {
get: function() {
return !this._grayed && this._touchable;
},
set: function(t) {
this.grayed = !t;
this.touchable = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "rotation", {
get: function() {
return -this._node.angle;
},
set: function(t) {
t = -t;
if (this._node.angle != t) {
this._node.angle = t;
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "alpha", {
get: function() {
return this._alpha;
},
set: function(e) {
if (this._alpha != e) {
this._alpha = e;
this._node.opacity = 255 * this._alpha;
this instanceof t.GGroup && this.handleAlphaChanged();
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "visible", {
get: function() {
return this._visible;
},
set: function(t) {
if (this._visible != t) {
this._visible = t;
this.handleVisibleChanged();
this._group && this._group.excludeInvisibles && this._group.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "_finalVisible", {
get: function() {
return this._visible && this._internalVisible && (!this._group || this._group._finalVisible);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "internalVisible3", {
get: function() {
return this._visible && this._internalVisible;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "sortingOrder", {
get: function() {
return this._sortingOrder;
},
set: function(t) {
t < 0 && (t = 0);
if (this._sortingOrder != t) {
var e = this._sortingOrder;
this._sortingOrder = t;
this._parent && this._parent.childSortingOrderChanged(this, e, this._sortingOrder);
}
},
enumerable: !1,
configurable: !0
});
e.prototype.requestFocus = function() {};
Object.defineProperty(e.prototype, "tooltips", {
get: function() {
return this._tooltips;
},
set: function(e) {
if (this._tooltips) {
this._node.off(t.Event.ROLL_OVER, this.onRollOver, this);
this._node.off(t.Event.ROLL_OUT, this.onRollOut, this);
}
this._tooltips = e;
if (this._tooltips) {
this._node.on(t.Event.ROLL_OVER, this.onRollOver, this);
this._node.on(t.Event.ROLL_OUT, this.onRollOut, this);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "blendMode", {
get: function() {
return this._blendMode;
},
set: function(e) {
if (this._blendMode != e) {
this._blendMode = e;
t.BlendModeUtils.apply(this._node, e);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "onStage", {
get: function() {
return this._node && this._node.activeInHierarchy;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "resourceURL", {
get: function() {
return this.packageItem ? "ui://" + this.packageItem.owner.id + this.packageItem.id : null;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "group", {
get: function() {
return this._group;
},
set: function(t) {
if (this._group != t) {
this._group && this._group.setBoundsChangedFlag();
this._group = t;
this._group && this._group.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
e.prototype.getGear = function(e) {
var i = this._gears[e];
i || (this._gears[e] = i = t.GearBase.create(this, e));
return i;
};
e.prototype.updateGear = function(t) {
if (!this._underConstruct && !this._gearLocked) {
var e = this._gears[t];
e && e.controller && e.updateState();
}
};
e.prototype.checkGearController = function(t, e) {
return this._gears[t] && this._gears[t].controller == e;
};
e.prototype.updateGearFromRelations = function(t, e, i) {
this._gears[t] && this._gears[t].updateFromRelations(e, i);
};
e.prototype.addDisplayLock = function() {
var t = this._gears[0];
if (t && t.controller) {
var e = t.addLock();
this.checkGearDisplay();
return e;
}
return 0;
};
e.prototype.releaseDisplayLock = function(t) {
var e = this._gears[0];
if (e && e.controller) {
e.releaseLock(t);
this.checkGearDisplay();
}
};
e.prototype.checkGearDisplay = function() {
if (!this._handlingController) {
var t = null == this._gears[0] || this._gears[0].connected;
this._gears[8] && (t = this._gears[8].evaluate(t));
if (t != this._internalVisible) {
this._internalVisible = t;
this.handleVisibleChanged();
this._group && this._group.excludeInvisibles && this._group.setBoundsChangedFlag();
}
}
};
Object.defineProperty(e.prototype, "gearXY", {
get: function() {
return this.getGear(1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "gearSize", {
get: function() {
return this.getGear(2);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "gearLook", {
get: function() {
return this.getGear(3);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "relations", {
get: function() {
return this._relations;
},
enumerable: !1,
configurable: !0
});
e.prototype.addRelation = function(t, e, i) {
this._relations.add(t, e, i);
};
e.prototype.removeRelation = function(t, e) {
this._relations.remove(t, e);
};
Object.defineProperty(e.prototype, "node", {
get: function() {
return this._node;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "parent", {
get: function() {
return this._parent;
},
enumerable: !1,
configurable: !0
});
e.prototype.removeFromParent = function() {
this._parent && this._parent.removeChild(this);
};
e.prototype.findParent = function() {
if (this._parent) return this._parent;
for (var t = this._node.parent; t; ) {
var e = t.$gobj;
if (e) return e;
t = t.parent;
}
return null;
};
Object.defineProperty(e.prototype, "root", {
get: function() {
if (this instanceof t.GRoot) return this;
for (var e = this._parent; e; ) {
if (e instanceof t.GRoot) return e;
e = e.parent;
}
return t.GRoot.inst;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asCom", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asButton", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asLabel", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asProgress", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asTextField", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asRichTextField", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asTextInput", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asLoader", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asList", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asTree", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asGraph", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asGroup", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asSlider", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asComboBox", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asImage", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asMovieClip", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
e.cast = function(t) {
return t.$gobj;
};
Object.defineProperty(e.prototype, "text", {
get: function() {
return null;
},
set: function() {},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "icon", {
get: function() {
return null;
},
set: function() {},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "treeNode", {
get: function() {
return this._treeNode;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "isDisposed", {
get: function() {
return null == this._node;
},
enumerable: !1,
configurable: !0
});
e.prototype.dispose = function() {
var t = this._node;
if (t) {
this.removeFromParent();
this._relations.dispose();
this._node = null;
t.destroy();
for (var e = 0; e < 10; e++) {
var i = this._gears[e];
i && i.dispose();
}
}
};
e.prototype.onEnable = function() {};
e.prototype.onDisable = function() {};
e.prototype.onDestroy = function() {};
e.prototype.onClick = function(e, i) {
this._node.on(t.Event.CLICK, e, i);
};
e.prototype.onceClick = function(e, i) {
this._node.once(t.Event.CLICK, e, i);
};
e.prototype.offClick = function(e, i) {
this._node.off(t.Event.CLICK, e, i);
};
e.prototype.clearClick = function() {
this._node.off(t.Event.CLICK);
};
e.prototype.hasClickListener = function() {
return this._node.hasEventListener(t.Event.CLICK);
};
e.prototype.on = function(e, i, n) {
e != t.Event.DISPLAY && e != t.Event.UNDISPLAY || (this._partner._emitDisplayEvents = !0);
this._node.on(e, i, n);
};
e.prototype.once = function(e, i, n) {
e != t.Event.DISPLAY && e != t.Event.UNDISPLAY || (this._partner._emitDisplayEvents = !0);
this._node.once(e, i, n);
};
e.prototype.off = function(t, e, i) {
this._node.off(t, e, i);
};
e.prototype.clear = function() {
this._node.targetOff(null);
};
Object.defineProperty(e.prototype, "draggable", {
get: function() {
return this._draggable;
},
set: function(t) {
if (this._draggable != t) {
this._draggable = t;
this.initDrag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dragBounds", {
get: function() {
return this._dragBounds;
},
set: function(t) {
this._dragBounds = t;
},
enumerable: !1,
configurable: !0
});
e.prototype.startDrag = function(t) {
this._node.activeInHierarchy && this.dragBegin(t);
};
e.prototype.stopDrag = function() {
this.dragEnd();
};
Object.defineProperty(e.prototype, "dragging", {
get: function() {
return e.draggingObject == this;
},
enumerable: !1,
configurable: !0
});
e.prototype.localToGlobalAR = function(t, e, i) {
return this.localToGlobal(t, e, i);
};
e.prototype.globalToLocalAR = function(t, e, i) {
return this.globalToLocal(t, e, i);
};
e.prototype.localToGlobal = function(e, i, n) {
e = e || 0;
i = i || 0;
(n = n || new cc.Vec2()).x = e;
n.y = i;
n.y = -n.y;
if (!this._pivotAsAnchor) {
n.x -= this.node.anchorX * this._width;
n.y += (1 - this.node.anchorY) * this._height;
}
this._node.convertToWorldSpaceAR(n, n);
n.y = t.GRoot.inst.height - n.y;
return n;
};
e.prototype.globalToLocal = function(e, i, n) {
e = e || 0;
i = i || 0;
(n = n || new cc.Vec2()).x = e;
n.y = t.GRoot.inst.height - i;
this._node.convertToNodeSpaceAR(n, n);
if (!this._pivotAsAnchor) {
n.x += this._node.anchorX * this._width;
n.y -= (1 - this._node.anchorY) * this._height;
}
n.y = -n.y;
return n;
};
e.prototype.localToGlobalRect = function(t, e, i, n, o) {
t = t || 0;
e = e || 0;
i = i || 0;
n = n || 0;
o = o || new cc.Rect();
var r = this.localToGlobal(t, e);
o.x = r.x;
o.y = r.y;
r = this.localToGlobal(t + i, e + n, r);
o.xMax = r.x;
o.yMax = r.y;
return o;
};
e.prototype.globalToLocalRect = function(t, e, i, n, o) {
t = t || 0;
e = e || 0;
i = i || 0;
n = n || 0;
o = o || new cc.Rect();
var r = this.globalToLocal(t, e);
o.x = r.x;
o.y = r.y;
r = this.globalToLocal(t + i, e + n, r);
o.xMax = r.x;
o.yMax = r.y;
return o;
};
e.prototype.handleControllerChanged = function(t) {
this._handlingController = !0;
for (var e = 0; e < 10; e++) {
var i = this._gears[e];
i && i.controller == t && i.apply();
}
this._handlingController = !1;
this.checkGearDisplay();
};
e.prototype.handleAnchorChanged = function() {
this.handlePositionChanged();
};
e.prototype.handlePositionChanged = function() {
var t = this._x, e = -this._y;
if (!this._pivotAsAnchor) {
t += this.node.anchorX * this._width;
e -= (1 - this.node.anchorY) * this._height;
}
if (this._pixelSnapping) {
t = Math.round(t);
e = Math.round(e);
}
this._node.setPosition(t, e);
};
e.prototype.handleSizeChanged = function() {
this._node.setContentSize(this._width, this._height);
};
e.prototype.handleGrayedChanged = function() {};
e.prototype.handleVisibleChanged = function() {
this._node.active = this._finalVisible;
this instanceof t.GGroup && this.handleVisibleChanged();
this._parent && this._parent.setBoundsChangedFlag();
};
e.prototype.hitTest = function(t, e) {
null == e && (e = !0);
if (e && (this._touchDisabled || !this._touchable || !this._node.activeInHierarchy)) return null;
this._hitTestPt || (this._hitTestPt = new cc.Vec2());
this.globalToLocal(t.x, t.y, this._hitTestPt);
if (this._pivotAsAnchor) {
this._hitTestPt.x += this.node.anchorX * this._width;
this._hitTestPt.y += (1 - this.node.anchorY) * this._height;
}
return this._hitTest(this._hitTestPt, t);
};
e.prototype._hitTest = function(t) {
return t.x >= 0 && t.y >= 0 && t.x < this._width && t.y < this._height ? this : null;
};
e.prototype.getProp = function(e) {
switch (e) {
case t.ObjectPropID.Text:
return this.text;

case t.ObjectPropID.Icon:
return this.icon;

case t.ObjectPropID.Color:
case t.ObjectPropID.OutlineColor:
return null;

case t.ObjectPropID.Playing:
return !1;

case t.ObjectPropID.Frame:
case t.ObjectPropID.DeltaTime:
return 0;

case t.ObjectPropID.TimeScale:
return 1;

case t.ObjectPropID.FontSize:
return 0;

case t.ObjectPropID.Selected:
return !1;

default:
return;
}
};
e.prototype.setProp = function(e, i) {
switch (e) {
case t.ObjectPropID.Text:
this.text = i;
break;

case t.ObjectPropID.Icon:
this.icon = i;
}
};
e.prototype.constructFromResource = function() {};
e.prototype.setup_beforeAdd = function(t, e) {
t.seek(e, 0);
t.skip(5);
var i, n;
this._id = t.readS();
this._name = t.readS();
i = t.readInt();
n = t.readInt();
this.setPosition(i, n);
if (t.readBool()) {
this.initWidth = t.readInt();
this.initHeight = t.readInt();
this.setSize(this.initWidth, this.initHeight, !0);
}
if (t.readBool()) {
this.minWidth = t.readInt();
this.maxWidth = t.readInt();
this.minHeight = t.readInt();
this.maxHeight = t.readInt();
}
if (t.readBool()) {
i = t.readFloat();
n = t.readFloat();
this.setScale(i, n);
}
if (t.readBool()) {
i = t.readFloat();
n = t.readFloat();
this.setSkew(i, n);
}
if (t.readBool()) {
i = t.readFloat();
n = t.readFloat();
this.setPivot(i, n, t.readBool());
}
1 != (i = t.readFloat()) && (this.alpha = i);
0 != (i = t.readFloat()) && (this.rotation = i);
t.readBool() || (this.visible = !1);
t.readBool() || (this.touchable = !1);
t.readBool() && (this.grayed = !0);
this.blendMode = t.readByte();
t.readByte();
var o = t.readS();
null != o && (this.data = o);
};
e.prototype.setup_afterAdd = function(t, e) {
t.seek(e, 1);
var i = t.readS();
null != i && (this.tooltips = i);
var n = t.readShort();
n >= 0 && (this.group = this.parent.getChildAt(n));
t.seek(e, 2);
for (var o = t.readShort(), r = 0; r < o; r++) {
var s = t.readShort();
s += t.position;
this.getGear(t.readByte()).setup(t);
t.position = s;
}
};
e.prototype.onRollOver = function() {
this.root.showTooltips(this.tooltips);
};
e.prototype.onRollOut = function() {
this.root.hideTooltips();
};
e.prototype.initDrag = function() {
if (this._draggable) {
this.on(t.Event.TOUCH_BEGIN, this.onTouchBegin_0, this);
this.on(t.Event.TOUCH_MOVE, this.onTouchMove_0, this);
this.on(t.Event.TOUCH_END, this.onTouchEnd_0, this);
} else {
this.off(t.Event.TOUCH_BEGIN, this.onTouchBegin_0, this);
this.off(t.Event.TOUCH_MOVE, this.onTouchMove_0, this);
this.off(t.Event.TOUCH_END, this.onTouchEnd_0, this);
}
};
e.prototype.dragBegin = function(i) {
if (e.draggingObject) {
var r = e.draggingObject;
r.stopDrag();
e.draggingObject = null;
r._node.emit(t.Event.DRAG_END);
}
null == i && (i = t.GRoot.inst.inputProcessor.getAllTouches()[0]);
n.set(t.GRoot.inst.getTouchPosition(i));
this.localToGlobalRect(0, 0, this._width, this._height, o);
e.draggingObject = this;
this._dragTesting = !0;
t.GRoot.inst.inputProcessor.addTouchMonitor(i, this);
this.on(t.Event.TOUCH_MOVE, this.onTouchMove_0, this);
this.on(t.Event.TOUCH_END, this.onTouchEnd_0, this);
};
e.prototype.dragEnd = function() {
if (e.draggingObject == this) {
this._dragTesting = !1;
e.draggingObject = null;
}
a = !1;
};
e.prototype.onTouchBegin_0 = function(t) {
null == this._dragStartPos && (this._dragStartPos = new cc.Vec2());
this._dragStartPos.set(t.pos);
this._dragTesting = !0;
t.captureTouch();
};
e.prototype.onTouchMove_0 = function(l) {
if (e.draggingObject != this && this._draggable && this._dragTesting) {
var h = t.UIConfig.touchDragSensitivity;
if (this._dragStartPos && Math.abs(this._dragStartPos.x - l.pos.x) < h && Math.abs(this._dragStartPos.y - l.pos.y) < h) return;
this._dragTesting = !1;
a = !0;
this._node.emit(t.Event.DRAG_START, l);
a && this.dragBegin(l.touchId);
}
if (e.draggingObject == this) {
var c = l.pos.x - n.x + o.x, u = l.pos.y - n.y + o.y;
if (this._dragBounds) {
var p = t.GRoot.inst.localToGlobalRect(this._dragBounds.x, this._dragBounds.y, this._dragBounds.width, this._dragBounds.height, s);
c < p.x ? c = p.x : c + o.width > p.xMax && (c = p.xMax - o.width) < p.x && (c = p.x);
u < p.y ? u = p.y : u + o.height > p.yMax && (u = p.yMax - o.height) < p.y && (u = p.y);
}
i = !0;
var d = this.parent.globalToLocal(c, u, r);
this.setPosition(Math.round(d.x), Math.round(d.y));
i = !1;
this._node.emit(t.Event.DRAG_MOVE, l);
}
};
e.prototype.onTouchEnd_0 = function(i) {
if (e.draggingObject == this) {
e.draggingObject = null;
this._node.emit(t.Event.DRAG_END, i);
}
};
e._defaultGroupIndex = -1;
return e;
}();
t.GObject = e;
var i, n = new cc.Vec2(), o = new cc.Rect(), r = new cc.Vec2(), s = new cc.Rect(), a = !1, l = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._emitDisplayEvents = !1;
return t;
}
i.prototype.callLater = function(t, e) {
cc.director.getScheduler().isScheduled(t, this) || this.scheduleOnce(t, e);
};
i.prototype.onClickLink = function(e, i) {
this.node.emit(t.Event.LINK, i, e);
};
i.prototype.onEnable = function() {
this.node.$gobj.onEnable();
this._emitDisplayEvents && this.node.emit(t.Event.DISPLAY);
};
i.prototype.onDisable = function() {
this.node.$gobj.onDisable();
this._emitDisplayEvents && this.node.emit(t.Event.UNDISPLAY);
};
i.prototype.onDestroy = function() {
this.node.$gobj.onDestroy();
};
return i;
}(cc.Component);
t.GObjectPartner = l;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._sortingChildCount = 0;
i._childrenRenderOrder = t.ChildrenRenderOrder.Ascent;
i._apexIndex = 0;
i._node.name = "GComponent";
i._children = new Array();
i._controllers = new Array();
i._transitions = new Array();
i._margin = new t.Margin();
i._alignOffset = new cc.Vec2();
i._container = new cc.Node("Container");
i._container.setAnchorPoint(0, 1);
i._node.addChild(i._container);
return i;
}
n.prototype.dispose = function() {
var t, i;
i = this._transitions.length;
for (t = 0; t < i; ++t) this._transitions[t].dispose();
i = this._controllers.length;
for (t = 0; t < i; ++t) this._controllers[t].dispose();
this._scrollPane && this._scrollPane.destroy();
for (t = (i = this._children.length) - 1; t >= 0; --t) {
var n = this._children[t];
n._parent = null;
n.dispose();
}
this._boundsChanged = !1;
e.prototype.dispose.call(this);
};
Object.defineProperty(n.prototype, "displayListContainer", {
get: function() {
return this._container;
},
enumerable: !1,
configurable: !0
});
n.prototype.addChild = function(t) {
this.addChildAt(t, this._children.length);
return t;
};
n.prototype.addChildAt = function(t, e) {
if (!t) throw "child is null";
var i = this._children.length;
if (e >= 0 && e <= i) {
if (t.parent == this) this.setChildIndex(t, e); else {
t.removeFromParent();
t._parent = this;
var n = this._children.length;
if (0 != t.sortingOrder) {
this._sortingChildCount++;
e = this.getInsertPosForSortingChild(t);
} else this._sortingChildCount > 0 && e > n - this._sortingChildCount && (e = n - this._sortingChildCount);
e == n ? this._children.push(t) : this._children.splice(e, 0, t);
this.onChildAdd(t, e);
this.setBoundsChangedFlag();
}
return t;
}
throw "Invalid child index";
};
n.prototype.getInsertPosForSortingChild = function(t) {
var e = this._children.length, i = 0;
for (i = 0; i < e; i++) {
var n = this._children[i];
if (n != t && t.sortingOrder < n.sortingOrder) break;
}
return i;
};
n.prototype.removeChild = function(t, e) {
var i = this._children.indexOf(t);
-1 != i && this.removeChildAt(i, e);
return t;
};
n.prototype.removeChildAt = function(e, i) {
if (e >= 0 && e < this.numChildren) {
var n = this._children[e];
n._parent = null;
0 != n.sortingOrder && this._sortingChildCount--;
this._children.splice(e, 1);
n.group = null;
this._container.removeChild(n.node);
this._childrenRenderOrder == t.ChildrenRenderOrder.Arch && this._partner.callLater(this.buildNativeDisplayList);
this[n.name] == n && delete this[n.name];
i ? n.dispose() : n.node.parent = null;
this.setBoundsChangedFlag();
return n;
}
throw "Invalid child index";
};
n.prototype.removeChildren = function(t, e, i) {
null == t && (t = 0);
null == e && (e = -1);
(e < 0 || e >= this.numChildren) && (e = this.numChildren - 1);
for (var n = t; n <= e; ++n) this.removeChildAt(t, i);
};
n.prototype.getChildAt = function(t) {
if (t >= 0 && t < this.numChildren) return this._children[t];
throw "Invalid child index";
};
n.prototype.getChild = function(t) {
for (var e = this._children.length, i = 0; i < e; ++i) if (this._children[i].name == t) return this._children[i];
return null;
};
n.prototype.getChildByPath = function(t) {
for (var e, i = t.split("."), o = i.length, r = this, s = 0; s < o && (e = r.getChild(i[s])); ++s) if (s != o - 1) {
if (!(e instanceof n)) {
e = null;
break;
}
r = e;
}
return e;
};
n.prototype.getVisibleChild = function(t) {
for (var e = this._children.length, i = 0; i < e; ++i) {
var n = this._children[i];
if (n._finalVisible && n.name == t) return n;
}
return null;
};
n.prototype.getChildInGroup = function(t, e) {
for (var i = this._children.length, n = 0; n < i; ++n) {
var o = this._children[n];
if (o.group == e && o.name == t) return o;
}
return null;
};
n.prototype.getChildById = function(t) {
for (var e = this._children.length, i = 0; i < e; ++i) if (this._children[i]._id == t) return this._children[i];
return null;
};
n.prototype.getChildIndex = function(t) {
return this._children.indexOf(t);
};
n.prototype.setChildIndex = function(t, e) {
var i = this._children.indexOf(t);
if (-1 == i) throw "Not a child of this container";
if (0 == t.sortingOrder) {
var n = this._children.length;
this._sortingChildCount > 0 && e > n - this._sortingChildCount - 1 && (e = n - this._sortingChildCount - 1);
this._setChildIndex(t, i, e);
}
};
n.prototype.setChildIndexBefore = function(t, e) {
var i = this._children.indexOf(t);
if (-1 == i) throw "Not a child of this container";
if (0 != t.sortingOrder) return i;
var n = this._children.length;
this._sortingChildCount > 0 && e > n - this._sortingChildCount - 1 && (e = n - this._sortingChildCount - 1);
return i < e ? this._setChildIndex(t, i, e - 1) : this._setChildIndex(t, i, e);
};
n.prototype._setChildIndex = function(e, i, n) {
var o = this._children.length;
n > o && (n = o);
if (i == n) return i;
this._children.splice(i, 1);
this._children.splice(n, 0, e);
this._childrenRenderOrder == t.ChildrenRenderOrder.Ascent ? e.node.setSiblingIndex(n) : this._childrenRenderOrder == t.ChildrenRenderOrder.Descent ? e.node.setSiblingIndex(o - n) : this._partner.callLater(this.buildNativeDisplayList);
this.setBoundsChangedFlag();
return n;
};
n.prototype.swapChildren = function(t, e) {
var i = this._children.indexOf(t), n = this._children.indexOf(e);
if (-1 == i || -1 == n) throw "Not a child of this container";
this.swapChildrenAt(i, n);
};
n.prototype.swapChildrenAt = function(t, e) {
var i = this._children[t], n = this._children[e];
this.setChildIndex(i, e);
this.setChildIndex(n, t);
};
Object.defineProperty(n.prototype, "numChildren", {
get: function() {
return this._children.length;
},
enumerable: !1,
configurable: !0
});
n.prototype.isAncestorOf = function(t) {
if (null == t) return !1;
for (var e = t.parent; e; ) {
if (e == this) return !0;
e = e.parent;
}
return !1;
};
n.prototype.addController = function(t) {
this._controllers.push(t);
t.parent = this;
this.applyController(t);
};
n.prototype.getControllerAt = function(t) {
return this._controllers[t];
};
n.prototype.getController = function(t) {
for (var e = this._controllers.length, i = 0; i < e; ++i) {
var n = this._controllers[i];
if (n.name == t) return n;
}
return null;
};
n.prototype.removeController = function(t) {
var e = this._controllers.indexOf(t);
if (-1 == e) throw "controller not exists";
t.parent = null;
this._controllers.splice(e, 1);
this[t.name] == t && delete this[t.name];
for (var i = this._children.length, n = 0; n < i; n++) this._children[n].handleControllerChanged(t);
};
Object.defineProperty(n.prototype, "controllers", {
get: function() {
return this._controllers;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "transitions", {
get: function() {
return this._transitions;
},
enumerable: !1,
configurable: !0
});
n.prototype.onChildAdd = function(e, i) {
e.node.parent = this._container;
e.node.active = e._finalVisible;
if (!this._buildingDisplayList) {
var n = this._children.length;
this._childrenRenderOrder == t.ChildrenRenderOrder.Ascent ? e.node.setSiblingIndex(i) : this._childrenRenderOrder == t.ChildrenRenderOrder.Descent ? e.node.setSiblingIndex(n - i) : this._partner.callLater(this.buildNativeDisplayList);
}
};
n.prototype.buildNativeDisplayList = function(e) {
if (isNaN(e)) {
var i = this._children.length;
if (0 != i) switch (this._childrenRenderOrder) {
case t.ChildrenRenderOrder.Ascent:
for (var n = 0, o = 0; o < i; o++) this._children[o].node.setSiblingIndex(n++);
break;

case t.ChildrenRenderOrder.Descent:
for (n = 0, o = i - 1; o >= 0; o--) this._children[o].node.setSiblingIndex(n++);
break;

case t.ChildrenRenderOrder.Arch:
for (n = 0, o = 0; o < this._apexIndex; o++) this._children[o].node.setSiblingIndex(n++);
for (o = i - 1; o >= this._apexIndex; o--) this._children[o].node.setSiblingIndex(n++);
}
} else this.node.$gobj.buildNativeDisplayList();
};
n.prototype.applyController = function(t) {
this._applyingController = t;
for (var e = this._children.length, i = 0; i < e; i++) this._children[i].handleControllerChanged(t);
this._applyingController = null;
t.runActions();
};
n.prototype.applyAllControllers = function() {
for (var t = this._controllers.length, e = 0; e < t; ++e) this.applyController(this._controllers[e]);
};
n.prototype.adjustRadioGroupDepth = function(e, i) {
var n, o, r = this._children.length, s = -1, a = -1;
for (n = 0; n < r; n++) (o = this._children[n]) == e ? s = n : o instanceof t.GButton && o.relatedController == i && n > a && (a = n);
if (s < a) {
this._applyingController && this._children[a].handleControllerChanged(this._applyingController);
this.swapChildrenAt(s, a);
}
};
n.prototype.getTransitionAt = function(t) {
return this._transitions[t];
};
n.prototype.getTransition = function(t) {
for (var e = this._transitions.length, i = 0; i < e; ++i) {
var n = this._transitions[i];
if (n.name == t) return n;
}
return null;
};
n.prototype.isChildInView = function(t) {
return this._rectMask ? t.x + t.width >= 0 && t.x <= this.width && t.y + t.height >= 0 && t.y <= this.height : !this._scrollPane || this._scrollPane.isChildInView(t);
};
n.prototype.getFirstChildInView = function() {
for (var t = this._children.length, e = 0; e < t; ++e) {
var i = this._children[e];
if (this.isChildInView(i)) return e;
}
return -1;
};
Object.defineProperty(n.prototype, "scrollPane", {
get: function() {
return this._scrollPane;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "opaque", {
get: function() {
return this._opaque;
},
set: function(t) {
this._opaque = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "margin", {
get: function() {
return this._margin;
},
set: function(t) {
this._margin.copy(t);
this.handleSizeChanged();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "childrenRenderOrder", {
get: function() {
return this._childrenRenderOrder;
},
set: function(t) {
if (this._childrenRenderOrder != t) {
this._childrenRenderOrder = t;
this.buildNativeDisplayList();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "apexIndex", {
get: function() {
return this._apexIndex;
},
set: function(e) {
if (this._apexIndex != e) {
this._apexIndex = e;
this._childrenRenderOrder == t.ChildrenRenderOrder.Arch && this.buildNativeDisplayList();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "mask", {
get: function() {
return this._maskContent;
},
set: function(t) {
this.setMask(t, !1);
},
enumerable: !1,
configurable: !0
});
n.prototype.setMask = function(e, i) {
if (this._maskContent) {
this._maskContent.node.off(cc.Node.EventType.POSITION_CHANGED, this.onMaskContentChanged, this);
this._maskContent.node.off(cc.Node.EventType.SIZE_CHANGED, this.onMaskContentChanged, this);
this._maskContent.node.off(cc.Node.EventType.SCALE_CHANGED, this.onMaskContentChanged, this);
this._maskContent.node.off(cc.Node.EventType.ANCHOR_CHANGED, this.onMaskContentChanged, this);
this._maskContent.visible = !0;
}
this._maskContent = e;
if (this._maskContent) {
if (!(e instanceof t.GImage || e instanceof t.GGraph)) return;
if (!this._customMask) {
var n = new cc.Node("Mask");
n.parent = this._node;
this._scrollPane ? this._container.parent.parent = n : this._container.parent = n;
this._customMask = n.addComponent(cc.Mask);
}
e.visible = !1;
e.node.on(cc.Node.EventType.POSITION_CHANGED, this.onMaskContentChanged, this);
e.node.on(cc.Node.EventType.SIZE_CHANGED, this.onMaskContentChanged, this);
e.node.on(cc.Node.EventType.SCALE_CHANGED, this.onMaskContentChanged, this);
e.node.on(cc.Node.EventType.ANCHOR_CHANGED, this.onMaskContentChanged, this);
this._customMask.inverted = i;
this._node.activeInHierarchy ? this.onMaskReady() : this.on(t.Event.DISPLAY, this.onMaskReady, this);
this.onMaskContentChanged();
this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(0, 0);
} else if (this._customMask) {
this._scrollPane ? this._container.parent.parent = this._node : this._container.parent = this._node;
this._customMask.node.destroy();
this._customMask = null;
this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(this._pivotCorrectX, this._pivotCorrectY);
}
};
n.prototype.onMaskReady = function() {
this.off(t.Event.DISPLAY, this.onMaskReady, this);
if (this._maskContent instanceof t.GImage) {
this._customMask.type = cc.Mask.Type.IMAGE_STENCIL;
this._customMask.alphaThreshold = 1e-4;
this._customMask.spriteFrame = this._maskContent._content.spriteFrame;
} else this._maskContent instanceof t.GGraph && (2 == this._maskContent.type ? this._customMask.type = cc.Mask.Type.ELLIPSE : this._customMask.type = cc.Mask.Type.RECT);
};
n.prototype.onMaskContentChanged = function() {
var t = this._customMask.node, e = this._maskContent.node, i = e.width * e.scaleX, n = e.height * e.scaleY;
t.setContentSize(i, n);
var o = e.x - e.anchorX * i, r = e.y - e.anchorY * n;
t.setAnchorPoint(-o / t.width, -r / t.height);
t.setPosition(this._pivotCorrectX, this._pivotCorrectY);
};
Object.defineProperty(n.prototype, "_pivotCorrectX", {
get: function() {
return -this.pivotX * this._width + this._margin.left;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "_pivotCorrectY", {
get: function() {
return this.pivotY * this._height - this._margin.top;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "baseUserData", {
get: function() {
var t = this.packageItem.rawData;
t.seek(0, 4);
return t.readS();
},
enumerable: !1,
configurable: !0
});
n.prototype.setupScroll = function(e) {
this._scrollPane = this._node.addComponent(t.ScrollPane);
this._scrollPane.setup(e);
};
n.prototype.setupOverflow = function(e) {
e == t.OverflowType.Hidden && (this._rectMask = this._container.addComponent(cc.Mask));
this._margin.isNone || this.handleSizeChanged();
};
n.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
this._customMask ? this._customMask.node.setPosition(this._pivotCorrectX, this._pivotCorrectY) : this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(this._pivotCorrectX + this._alignOffset.x, this._pivotCorrectY - this._alignOffset.y);
};
n.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._customMask ? this._customMask.node.setPosition(this._pivotCorrectX, this._pivotCorrectY) : this._scrollPane || this._container.setPosition(this._pivotCorrectX, this._pivotCorrectY);
this._scrollPane ? this._scrollPane.onOwnerSizeChanged() : this._container.setContentSize(this.viewWidth, this.viewHeight);
};
n.prototype.handleGrayedChanged = function() {
var t = this.getController("grayed");
if (t) t.selectedIndex = this.grayed ? 1 : 0; else for (var e = this.grayed, i = this._children.length, n = 0; n < i; ++n) this._children[n].grayed = e;
};
n.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._scrollPane && this._scrollPane.handleControllerChanged(t);
};
n.prototype._hitTest = function(e, n) {
if (this._customMask) {
i.set(n);
i.y = t.GRoot.inst.height - n.y;
if (!this._customMask._hitTest(i)) return null;
}
if (this.hitArea) {
if (!this.hitArea.hitTest(e, n)) return null;
} else if (this._rectMask) {
i.set(e);
i.x += this._container.x;
i.y += this._container.y;
var o = this._container.getContentSize();
if (i.x < 0 || i.y < 0 || i.x >= o.width || i.y >= o.height) return null;
}
if (this._scrollPane) {
var r = this._scrollPane.hitTest(e, n);
if (!r) return null;
if (r != this) return r;
}
for (var s = null, a = this._children.length - 1; a >= 0; a--) {
var l = this._children[a];
if (this._maskContent != l && !l._touchDisabled && (s = l.hitTest(n))) break;
}
!s && this._opaque && (this.hitArea || e.x >= 0 && e.y >= 0 && e.x < this._width && e.y < this._height) && (s = this);
return s;
};
n.prototype.setBoundsChangedFlag = function() {
if ((this._scrollPane || this._trackBounds) && !this._boundsChanged) {
this._boundsChanged = !0;
this._partner.callLater(this.refresh);
}
};
n.prototype.refresh = function(t) {
if (isNaN(t)) {
if (this._boundsChanged) {
var e = this._children.length;
if (e > 0) for (var i = 0; i < e; i++) this._children[i].ensureSizeCorrect();
this.updateBounds();
}
} else this.node.$gobj.refresh();
};
n.prototype.ensureBoundsCorrect = function() {
var t = this._children.length;
if (t > 0) for (var e = 0; e < t; e++) this._children[e].ensureSizeCorrect();
this._boundsChanged && this.updateBounds();
};
n.prototype.updateBounds = function() {
var t = 0, e = 0, i = 0, n = 0, o = this._children.length;
if (o > 0) {
t = Number.POSITIVE_INFINITY, e = Number.POSITIVE_INFINITY;
var r = Number.NEGATIVE_INFINITY, s = Number.NEGATIVE_INFINITY, a = 0, l = 0;
for (l = 0; l < o; l++) {
var h = this._children[l];
(a = h.x) < t && (t = a);
(a = h.y) < e && (e = a);
(a = h.x + h.actualWidth) > r && (r = a);
(a = h.y + h.actualHeight) > s && (s = a);
}
i = r - t;
n = s - e;
}
this.setBounds(t, e, i, n);
};
n.prototype.setBounds = function(t, e, i, n) {
void 0 === n && (n = 0);
this._boundsChanged = !1;
this._scrollPane && this._scrollPane.setContentSize(Math.round(t + i), Math.round(e + n));
};
Object.defineProperty(n.prototype, "viewWidth", {
get: function() {
return this._scrollPane ? this._scrollPane.viewWidth : this.width - this._margin.left - this._margin.right;
},
set: function(t) {
this._scrollPane ? this._scrollPane.viewWidth = t : this.width = t + this._margin.left + this._margin.right;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "viewHeight", {
get: function() {
return this._scrollPane ? this._scrollPane.viewHeight : this.height - this._margin.top - this._margin.bottom;
},
set: function(t) {
this._scrollPane ? this._scrollPane.viewHeight = t : this.height = t + this._margin.top + this._margin.bottom;
},
enumerable: !1,
configurable: !0
});
n.prototype.getSnappingPosition = function(t, e, i) {
i || (i = new cc.Vec2());
var n = this._children.length;
if (0 == n) {
i.x = 0;
i.y = 0;
return i;
}
this.ensureBoundsCorrect();
var o = null, r = null, s = 0;
if (0 != e) {
for (;s < n; s++) if (e < (o = this._children[s]).y) {
if (0 == s) {
e = 0;
break;
}
e = e < (r = this._children[s - 1]).y + r.actualHeight / 2 ? r.y : o.y;
break;
}
s == n && (e = o.y);
}
if (0 != t) {
s > 0 && s--;
for (;s < n; s++) if (t < (o = this._children[s]).x) {
if (0 == s) {
t = 0;
break;
}
t = t < (r = this._children[s - 1]).x + r.actualWidth / 2 ? r.x : o.x;
break;
}
s == n && (t = o.x);
}
i.x = t;
i.y = e;
return i;
};
n.prototype.childSortingOrderChanged = function(t, e, i) {
void 0 === i && (i = 0);
if (0 == i) {
this._sortingChildCount--;
this.setChildIndex(t, this._children.length);
} else {
0 == e && this._sortingChildCount++;
var n = this._children.indexOf(t), o = this.getInsertPosForSortingChild(t);
n < o ? this._setChildIndex(t, n, o - 1) : this._setChildIndex(t, n, o);
}
};
n.prototype.constructFromResource = function() {
this.constructFromResource2(null, 0);
};
n.prototype.constructFromResource2 = function(e, i) {
var n, o, r, s, a, l, h, c, u = this.packageItem.getBranch();
if (!u.decoded) {
u.decoded = !0;
t.TranslationHelper.translateComponent(u);
}
var p = u.rawData;
p.seek(0, 0);
this._underConstruct = !0;
this.sourceWidth = p.readInt();
this.sourceHeight = p.readInt();
this.initWidth = this.sourceWidth;
this.initHeight = this.sourceHeight;
this.setSize(this.sourceWidth, this.sourceHeight);
if (p.readBool()) {
this.minWidth = p.readInt();
this.maxWidth = p.readInt();
this.minHeight = p.readInt();
this.maxHeight = p.readInt();
}
if (p.readBool()) {
a = p.readFloat();
l = p.readFloat();
this.setPivot(a, l, p.readBool());
}
if (p.readBool()) {
this._margin.top = p.readInt();
this._margin.bottom = p.readInt();
this._margin.left = p.readInt();
this._margin.right = p.readInt();
}
var d = p.readByte();
if (d == t.OverflowType.Scroll) {
var f = p.position;
p.seek(0, 7);
this.setupScroll(p);
p.position = f;
} else this.setupOverflow(d);
p.readBool() && p.skip(8);
this._buildingDisplayList = !0;
p.seek(0, 1);
var _, g = p.readShort();
for (n = 0; n < g; n++) {
s = p.readShort();
s += p.position;
var y = new t.Controller();
this._controllers.push(y);
y.parent = this;
y.setup(p);
p.position = s;
y.name && null == this[y.name] && (this[y.name] = y);
}
p.seek(0, 2);
var m = p.readShort();
for (n = 0; n < m; n++) {
o = p.readShort();
r = p.position;
if (e) _ = e[i + n]; else {
p.seek(r, 0);
var v = p.readByte(), b = p.readS(), w = p.readS(), C = null;
if (null != b) {
var S;
C = (S = null != w ? t.UIPackage.getById(w) : u.owner) ? S.getItemById(b) : null;
}
C ? (_ = t.UIObjectFactory.newObject(C)).constructFromResource() : _ = t.UIObjectFactory.newObject(v);
}
_._underConstruct = !0;
_.setup_beforeAdd(p, r);
_._parent = this;
_.node.parent = this._container;
this._children.push(_);
p.position = r + o;
_._name && null == this[_._name] && (this[_._name] = _);
}
p.seek(0, 3);
this.relations.setup(p, !0);
p.seek(0, 2);
p.skip(2);
for (n = 0; n < m; n++) {
s = p.readShort();
s += p.position;
p.seek(p.position, 3);
this._children[n].relations.setup(p, !1);
p.position = s;
}
p.seek(0, 2);
p.skip(2);
for (n = 0; n < m; n++) {
s = p.readShort();
s += p.position;
(_ = this._children[n]).setup_afterAdd(p, p.position);
_._underConstruct = !1;
p.position = s;
}
p.seek(0, 4);
p.skip(2);
this.opaque = p.readBool();
var x = p.readShort();
-1 != x && this.setMask(this.getChildAt(x), p.readBool());
var P = p.readS();
h = p.readInt();
c = p.readInt();
null != P ? (C = u.owner.getItemById(P)) && C.hitTestData && (this.hitArea = new t.PixelHitTest(C.hitTestData, h, c)) : 0 != h && -1 != c && (this.hitArea = new t.ChildHitArea(this.getChildAt(c)));
p.seek(0, 5);
var I = p.readShort();
for (n = 0; n < I; n++) {
s = p.readShort();
s += p.position;
var T = new t.Transition(this);
T.setup(p);
this._transitions.push(T);
p.position = s;
T.name && null == this[T.name] && (this[T.name] = T);
}
this.__isGfProxy = !0;
this.applyAllControllers();
this._buildingDisplayList = !1;
this._underConstruct = !1;
this.buildNativeDisplayList();
this.setBoundsChangedFlag();
u.objectType != t.ObjectType.Component && this.constructExtension(p);
this.onConstruct();
};
n.prototype.constructExtension = function() {};
n.prototype.onConstruct = function() {};
n.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
t.seek(i, 4);
var n = t.readShort();
-1 != n && this._scrollPane && (this._scrollPane.pageController = this._parent.getControllerAt(n));
for (var o = t.readShort(), r = 0; r < o; r++) {
var s = this.getController(t.readS()), a = t.readS();
s && (s.selectedPageId = a);
}
if (t.version >= 2) {
o = t.readShort();
for (r = 0; r < o; r++) {
var l = t.readS(), h = t.readShort(), c = t.readS();
l || console.error("getChildByPath miss target:" + this.name);
var u = this.getChildByPath(l);
u && u.setProp(h, c);
}
}
};
n.prototype.onEnable = function() {
for (var t = this._transitions.length, e = 0; e < t; ++e) this._transitions[e].onEnable();
};
n.prototype.onDisable = function() {
for (var t = this._transitions.length, e = 0; e < t; ++e) this._transitions[e].onDisable();
};
return n;
}(t.GObject);
t.GComponent = e;
var i = new cc.Vec2();
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GButton";
i._mode = t.ButtonMode.Common;
i._title = "";
i._icon = "";
i._sound = t.UIConfig.buttonSound;
i._soundVolumeScale = t.UIConfig.buttonSoundVolumeScale;
i._changeStateOnClick = !0;
i._downEffect = 0;
i._downEffectValue = .8;
return i;
}
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._icon;
},
set: function(t) {
this._icon = t;
t = this._selected && this._selectedIcon ? this._selectedIcon : this._icon;
this._iconObject && (this._iconObject.icon = t);
this.updateGear(7);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectedIcon", {
get: function() {
return this._selectedIcon;
},
set: function(t) {
this._selectedIcon = t;
t = this._selected && this._selectedIcon ? this._selectedIcon : this._icon;
this._iconObject && (this._iconObject.icon = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "title", {
get: function() {
return this._title;
},
set: function(t) {
this._title = t;
this._titleObject && (this._titleObject.text = this._selected && this._selectedTitle ? this._selectedTitle : this._title);
this.updateGear(6);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "text", {
get: function() {
return this.title;
},
set: function(t) {
this.title = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectedTitle", {
get: function() {
return this._selectedTitle;
},
set: function(t) {
this._selectedTitle = t;
this._titleObject && (this._titleObject.text = this._selected && this._selectedTitle ? this._selectedTitle : this._title);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleColor", {
get: function() {
var t = this.getTextField();
return t ? t.color : cc.Color.BLACK;
},
set: function(t) {
var e = this.getTextField();
e && (e.color = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleFontSize", {
get: function() {
var t = this.getTextField();
return t ? t.fontSize : 0;
},
set: function(t) {
var e = this.getTextField();
e && (e.fontSize = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "sound", {
get: function() {
return this._sound;
},
set: function(t) {
this._sound = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "soundVolumeScale", {
get: function() {
return this._soundVolumeScale;
},
set: function(t) {
this._soundVolumeScale = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selected", {
get: function() {
return this._selected;
},
set: function(e) {
if (this._mode != t.ButtonMode.Common && this._selected != e) {
this._selected = e;
this.setCurrentState();
this._selectedTitle && this._titleObject && (this._titleObject.text = this._selected ? this._selectedTitle : this._title);
if (this._selectedIcon) {
var i = this._selected ? this._selectedIcon : this._icon;
this._iconObject && (this._iconObject.icon = i);
}
if (this._relatedController && this._parent && !this._parent._buildingDisplayList) if (this._selected) {
this._relatedController.selectedPageId = this._relatedPageId;
this._relatedController.autoRadioGroupDepth && this._parent.adjustRadioGroupDepth(this, this._relatedController);
} else this._mode == t.ButtonMode.Check && this._relatedController.selectedPageId == this._relatedPageId && (this._relatedController.oppositePageId = this._relatedPageId);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "mode", {
get: function() {
return this._mode;
},
set: function(e) {
if (this._mode != e) {
e == t.ButtonMode.Common && (this.selected = !1);
this._mode = e;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "relatedController", {
get: function() {
return this._relatedController;
},
set: function(t) {
this._relatedController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "relatedPageId", {
get: function() {
return this._relatedPageId;
},
set: function(t) {
this._relatedPageId = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "changeStateOnClick", {
get: function() {
return this._changeStateOnClick;
},
set: function(t) {
this._changeStateOnClick = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "linkedPopup", {
get: function() {
return this._linkedPopup;
},
set: function(t) {
this._linkedPopup = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.getTextField = function() {
return this._titleObject instanceof t.GTextField ? this._titleObject : this._titleObject instanceof t.GLabel || this._titleObject instanceof i ? this._titleObject.getTextField() : null;
};
i.prototype.fireClick = function() {
t.GRoot.inst.inputProcessor.simulateClick(this);
};
i.prototype.setState = function(e) {
this._buttonController && (this._buttonController.selectedPage = e);
if (1 == this._downEffect) {
var n = this.numChildren;
if (e == i.DOWN || e == i.SELECTED_OVER || e == i.SELECTED_DISABLED) {
this._downColor || (this._downColor = new cc.Color());
var o = 255 * this._downEffectValue;
this._downColor.r = this._downColor.g = this._downColor.b = o;
for (var r = 0; r < n; r++) null == (s = this.getChildAt(r)).color || s instanceof t.GTextField || (s.color = this._downColor);
} else for (r = 0; r < n; r++) {
var s;
null == (s = this.getChildAt(r)).color || s instanceof t.GTextField || (s.color = cc.Color.WHITE);
}
} else if (2 == this._downEffect) if (e == i.DOWN || e == i.SELECTED_OVER || e == i.SELECTED_DISABLED) {
if (!this._downScaled) {
this._downScaled = !0;
this.setScale(this.scaleX * this._downEffectValue, this.scaleY * this._downEffectValue);
}
} else if (this._downScaled) {
this._downScaled = !1;
this.setScale(this.scaleX / this._downEffectValue, this.scaleY / this._downEffectValue);
}
};
i.prototype.setCurrentState = function() {
this.grayed && this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this._selected ? this.setState(i.SELECTED_DISABLED) : this.setState(i.DISABLED) : this._selected ? this.setState(this._over ? i.SELECTED_OVER : i.DOWN) : this.setState(this._over ? i.OVER : i.UP);
};
i.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._relatedController == t && (this.selected = this._relatedPageId == t.selectedPageId);
};
i.prototype.handleGrayedChanged = function() {
this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this.grayed ? this._selected && this._buttonController.hasPage(i.SELECTED_DISABLED) ? this.setState(i.SELECTED_DISABLED) : this.setState(i.DISABLED) : this._selected ? this.setState(i.DOWN) : this.setState(i.UP) : e.prototype.handleGrayedChanged.call(this);
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.titleColor;

case t.ObjectPropID.OutlineColor:
var n = this.getTextField();
return n ? n.strokeColor : 0;

case t.ObjectPropID.FontSize:
return this.titleFontSize;

case t.ObjectPropID.Selected:
return this.selected;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.titleColor = n;
break;

case t.ObjectPropID.OutlineColor:
var o = this.getTextField();
o && (o.strokeColor = n);
break;

case t.ObjectPropID.FontSize:
this.titleFontSize = n;
break;

case t.ObjectPropID.Selected:
this.selected = n;
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructExtension = function(e) {
e.seek(0, 6);
this._mode = e.readByte();
var n = e.readS();
n && (this._sound = n);
this._soundVolumeScale = e.readFloat();
this._downEffect = e.readByte();
this._downEffectValue = e.readFloat();
2 == this._downEffect && this.setPivot(.5, .5, this.pivotAsAnchor);
this._buttonController = this.getController("button");
this._titleObject = this.getChild("title");
this._iconObject = this.getChild("icon");
this._titleObject && (this._title = this._titleObject.text);
this._iconObject && (this._icon = this._iconObject.icon);
this._mode == t.ButtonMode.Common && this.setState(i.UP);
this._node.on(t.Event.TOUCH_BEGIN, this.onTouchBegin_1, this);
this._node.on(t.Event.TOUCH_END, this.onTouchEnd_1, this);
this._node.on(t.Event.ROLL_OVER, this.onRollOver_1, this);
this._node.on(t.Event.ROLL_OUT, this.onRollOut_1, this);
this._node.on(t.Event.CLICK, this.onClick_1, this);
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6) && t.readByte() == this.packageItem.objectType) {
var n, o;
null != (n = t.readS()) && (this.title = n);
null != (n = t.readS()) && (this.selectedTitle = n);
null != (n = t.readS()) && (this.icon = n);
null != (n = t.readS()) && (this.selectedIcon = n);
t.readBool() && (this.titleColor = t.readColor());
0 != (o = t.readInt()) && (this.titleFontSize = o);
(o = t.readShort()) >= 0 && (this._relatedController = this.parent.getControllerAt(o));
this._relatedPageId = t.readS();
null != (n = t.readS()) && (this._sound = n);
t.readBool() && (this._soundVolumeScale = t.readFloat());
this.selected = t.readBool();
}
};
i.prototype.onRollOver_1 = function() {
if (this._buttonController && this._buttonController.hasPage(i.OVER)) {
this._over = !0;
this._down || this.grayed && this._buttonController.hasPage(i.DISABLED) || this.setState(this._selected ? i.SELECTED_OVER : i.OVER);
}
};
i.prototype.onRollOut_1 = function() {
if (this._buttonController && this._buttonController.hasPage(i.OVER)) {
this._over = !1;
this._down || this.grayed && this._buttonController.hasPage(i.DISABLED) || this.setState(this._selected ? i.DOWN : i.UP);
}
};
i.prototype.onTouchBegin_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT) {
this._down = !0;
e.captureTouch();
this._mode == t.ButtonMode.Common && (this.grayed && this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this.setState(i.SELECTED_DISABLED) : this.setState(i.DOWN));
this._linkedPopup && (this._linkedPopup instanceof t.Window ? this._linkedPopup.toggleStatus() : this.root.togglePopup(this._linkedPopup, this));
}
};
i.prototype.onTouchEnd_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT && this._down) {
this._down = !1;
if (null == this._node) return;
this._mode == t.ButtonMode.Common ? this.grayed && this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this.setState(i.DISABLED) : this._over ? this.setState(i.OVER) : this.setState(i.UP) : this._over || null == this._buttonController || this._buttonController.selectedPage != i.OVER && this._buttonController.selectedPage != i.SELECTED_OVER || this.setCurrentState();
}
};
i.prototype.onClick_1 = function() {
var e = this;
if (this._sound) {
var i = t.UIPackage.getItemByURL(this._sound);
i && i.owner.getItemAssetAsync(i, function(i, n) {
i || t.GRoot.inst.playOneShotSound(n.asset, e._soundVolumeScale);
});
}
if (this._mode == t.ButtonMode.Check) {
if (this._changeStateOnClick) {
this.selected = !this._selected;
this._node.emit(t.Event.STATUS_CHANGED, this);
}
} else if (this._mode == t.ButtonMode.Radio) {
if (this._changeStateOnClick && !this._selected) {
this.selected = !0;
this._node.emit(t.Event.STATUS_CHANGED, this);
}
} else this._relatedController && (this._relatedController.selectedPageId = this._relatedPageId);
};
i.UP = "up";
i.DOWN = "down";
i.OVER = "over";
i.SELECTED_OVER = "selectedOver";
i.DISABLED = "disabled";
i.SELECTED_DISABLED = "selectedDisabled";
return i;
}(t.GComponent);
t.GButton = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._visibleItemCount = 0;
i._selectedIndex = 0;
i._popupDirection = t.PopupDirection.Auto;
i._node.name = "GComboBox";
i._visibleItemCount = t.UIConfig.defaultComboBoxVisibleItemCount;
i._itemsUpdated = !0;
i._selectedIndex = -1;
i._items = [];
i._values = [];
return i;
}
Object.defineProperty(i.prototype, "text", {
get: function() {
return this._titleObject ? this._titleObject.text : null;
},
set: function(t) {
this._titleObject && (this._titleObject.text = t);
this.updateGear(6);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._iconObject ? this._iconObject.icon : null;
},
set: function(t) {
this._iconObject && (this._iconObject.icon = t);
this.updateGear(7);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleColor", {
get: function() {
var t = this.getTextField();
return t ? t.color : cc.Color.BLACK;
},
set: function(t) {
var e = this.getTextField();
e && (e.color = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleFontSize", {
get: function() {
var t = this.getTextField();
return t ? t.fontSize : 0;
},
set: function(t) {
var e = this.getTextField();
e && (e.fontSize = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "visibleItemCount", {
get: function() {
return this._visibleItemCount;
},
set: function(t) {
this._visibleItemCount = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "popupDirection", {
get: function() {
return this._popupDirection;
},
set: function(t) {
this._popupDirection = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "items", {
get: function() {
return this._items;
},
set: function(t) {
t ? this._items = t.concat() : this._items.length = 0;
if (this._items.length > 0) {
this._selectedIndex >= this._items.length ? this._selectedIndex = this._items.length - 1 : -1 == this._selectedIndex && (this._selectedIndex = 0);
this.text = this._items[this._selectedIndex];
this._icons && this._selectedIndex < this._icons.length && (this.icon = this._icons[this._selectedIndex]);
} else {
this.text = "";
this._icons && (this.icon = null);
this._selectedIndex = -1;
}
this._itemsUpdated = !0;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icons", {
get: function() {
return this._icons;
},
set: function(t) {
this._icons = t;
this._icons && -1 != this._selectedIndex && this._selectedIndex < this._icons.length && (this.icon = this._icons[this._selectedIndex]);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "values", {
get: function() {
return this._values;
},
set: function(t) {
t ? this._values = t.concat() : this._values.length = 0;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectedIndex", {
get: function() {
return this._selectedIndex;
},
set: function(t) {
if (this._selectedIndex != t) {
this._selectedIndex = t;
if (this._selectedIndex >= 0 && this._selectedIndex < this._items.length) {
this.text = this._items[this._selectedIndex];
this._icons && this._selectedIndex < this._icons.length && (this.icon = this._icons[this._selectedIndex]);
} else {
this.text = "";
this._icons && (this.icon = null);
}
this.updateSelectionController();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "value", {
get: function() {
return this._values[this._selectedIndex];
},
set: function(t) {
var e = this._values.indexOf(t);
-1 == e && null == t && (e = this._values.indexOf(""));
this.selectedIndex = e;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectionController", {
get: function() {
return this._selectionController;
},
set: function(t) {
this._selectionController = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.getTextField = function() {
return this._titleObject instanceof t.GTextField ? this._titleObject : this._titleObject instanceof t.GLabel || this._titleObject instanceof t.GButton ? this._titleObject.getTextField() : null;
};
i.prototype.setState = function(t) {
this._buttonController && (this._buttonController.selectedPage = t);
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.titleColor;

case t.ObjectPropID.OutlineColor:
var n = this.getTextField();
return n ? n.strokeColor : 0;

case t.ObjectPropID.FontSize:
return (n = this.getTextField()) ? n.fontSize : 0;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.titleColor = n;
break;

case t.ObjectPropID.OutlineColor:
var o = this.getTextField();
o && (o.strokeColor = n);
break;

case t.ObjectPropID.FontSize:
(o = this.getTextField()) && (o.fontSize = n);
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructExtension = function(e) {
var i;
this._buttonController = this.getController("button");
this._titleObject = this.getChild("title");
this._iconObject = this.getChild("icon");
if (i = e.readS()) {
var n = t.UIPackage.createObjectFromURL(i);
if (!(n instanceof t.GComponent)) {
console.error("下拉框必须为元件");
return;
}
this.dropdown = n;
this.dropdown.name = "this.dropdown";
this._list = this.dropdown.getChild("list");
if (null == this._list) {
console.error(this.resourceURL + ": 下拉框的弹出元件里必须包含名为list的列表");
return;
}
this._list.on(t.Event.CLICK_ITEM, this.onClickItem, this);
this._list.addRelation(this.dropdown, t.RelationType.Width);
this._list.removeRelation(this.dropdown, t.RelationType.Height);
this.dropdown.addRelation(this._list, t.RelationType.Height);
this.dropdown.removeRelation(this._list, t.RelationType.Width);
this.dropdown.on(t.Event.UNDISPLAY, this.onPopupClosed, this);
}
this._node.on(t.Event.TOUCH_BEGIN, this.onTouchBegin_1, this);
this._node.on(t.Event.TOUCH_END, this.onTouchEnd_1, this);
this._node.on(t.Event.ROLL_OVER, this.onRollOver_1, this);
this._node.on(t.Event.ROLL_OUT, this.onRollOut_1, this);
};
i.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._selectionController == t && (this.selectedIndex = t.selectedIndex);
};
i.prototype.updateSelectionController = function() {
if (this._selectionController && !this._selectionController.changing && this._selectedIndex < this._selectionController.pageCount) {
var t = this._selectionController;
this._selectionController = null;
t.selectedIndex = this._selectedIndex;
this._selectionController = t;
}
};
i.prototype.dispose = function() {
if (this.dropdown) {
this.dropdown.dispose();
this.dropdown = null;
}
e.prototype.dispose.call(this);
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6) && t.readByte() == this.packageItem.objectType) {
var n, o, r, s, a = t.readShort();
for (n = 0; n < a; n++) {
r = t.readShort();
r += t.position;
this._items[n] = t.readS();
this._values[n] = t.readS();
if (null != (s = t.readS())) {
null == this._icons && (this._icons = new Array());
this._icons[n] = s;
}
t.position = r;
}
if (null != (s = t.readS())) {
this.text = s;
this._selectedIndex = this._items.indexOf(s);
} else if (this._items.length > 0) {
this._selectedIndex = 0;
this.text = this._items[0];
} else this._selectedIndex = -1;
null != (s = t.readS()) && (this.icon = s);
t.readBool() && (this.titleColor = t.readColor());
(o = t.readInt()) > 0 && (this._visibleItemCount = o);
this._popupDirection = t.readByte();
(o = t.readShort()) >= 0 && (this._selectionController = this.parent.getControllerAt(o));
}
};
i.prototype.showDropdown = function() {
if (this._itemsUpdated) {
this._itemsUpdated = !1;
this._list.removeChildrenToPool();
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._list.addItemFromPool();
n.name = i < this._values.length ? this._values[i] : "";
n.text = this._items[i];
n.icon = this._icons && i < this._icons.length ? this._icons[i] : null;
}
this._list.resizeToFit(this._visibleItemCount);
}
this._list.selectedIndex = -1;
this.dropdown.width = this.width;
this._list.ensureBoundsCorrect();
this.root.togglePopup(this.dropdown, this, this._popupDirection);
this.dropdown.parent && this.setState(t.GButton.DOWN);
};
i.prototype.onPopupClosed = function() {
this._over ? this.setState(t.GButton.OVER) : this.setState(t.GButton.UP);
};
i.prototype.onClickItem = function(t) {
var e = this, i = this._list.getChildIndex(t);
this._partner.callLater(function() {
e.onClickItem2(i);
}, .1);
};
i.prototype.onClickItem2 = function(e) {
this.dropdown.parent instanceof t.GRoot && this.dropdown.parent.hidePopup();
this._selectedIndex = -1;
this.selectedIndex = e;
this._node.emit(t.Event.STATUS_CHANGED, this);
};
i.prototype.onRollOver_1 = function() {
this._over = !0;
this._down || this.dropdown && this.dropdown.parent || this.setState(t.GButton.OVER);
};
i.prototype.onRollOut_1 = function() {
this._over = !1;
this._down || this.dropdown && this.dropdown.parent || this.setState(t.GButton.UP);
};
i.prototype.onTouchBegin_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT && !(e.initiator instanceof t.GTextInput && e.initiator.editable)) {
this._down = !0;
e.captureTouch();
this.dropdown && this.showDropdown();
}
};
i.prototype.onTouchEnd_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT && this._down) {
this._down = !1;
this.dropdown && !this.dropdown.parent && (this._over ? this.setState(t.GButton.OVER) : this.setState(t.GButton.UP));
}
};
return i;
}(t.GComponent);
t.GComboBox = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._type = 0;
t._lineSize = 0;
t._node.name = "GGraph";
t._lineSize = 1;
t._lineColor = new cc.Color();
t._fillColor = new cc.Color(255, 255, 255, 255);
t._content = t._node.addComponent(cc.Graphics);
return t;
}
i.prototype.drawRect = function(t, e, i, n) {
this._type = 1;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this._cornerRadius = n;
this.updateGraph();
};
i.prototype.drawEllipse = function(t, e, i) {
this._type = 2;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this.updateGraph();
};
i.prototype.drawRegularPolygon = function(t, e, i, n, o, r) {
this._type = 4;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this._sides = n;
this._startAngle = o || 0;
this._distances = r;
this.updateGraph();
};
i.prototype.drawPolygon = function(t, e, i, n) {
this._type = 3;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this._polygonPoints = n;
this.updateGraph();
};
Object.defineProperty(i.prototype, "distances", {
get: function() {
return this._distances;
},
set: function(t) {
this._distances = t;
3 == this._type && this.updateGraph();
},
enumerable: !1,
configurable: !0
});
i.prototype.clearGraphics = function() {
this._type = 0;
if (this._hasContent) {
this._content.clear();
this._hasContent = !1;
}
};
Object.defineProperty(i.prototype, "type", {
get: function() {
return this._type;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._fillColor;
},
set: function(t) {
this._fillColor.set(t);
0 != this._type && this.updateGraph();
},
enumerable: !1,
configurable: !0
});
i.prototype.updateGraph = function() {
var t = this._content;
if (this._hasContent) {
this._hasContent = !1;
t.clear();
}
var e = this._width, i = this._height;
if (0 != e && 0 != i) {
var n = -this.pivotX * this._width, o = this.pivotY * this._height, r = this._lineSize / 2;
t.lineWidth = this._lineSize;
t.strokeColor = this._lineColor;
t.fillColor = this._fillColor;
if (1 == this._type) this._cornerRadius ? t.roundRect(n + r, -i + o + r, e - this._lineSize, i - this._lineSize, this._cornerRadius[0]) : t.rect(n + r, -i + o + r, e - this._lineSize, i - this._lineSize); else if (2 == this._type) t.ellipse(e / 2 + n, -i / 2 + o, e / 2 - r, i / 2 - r); else if (3 == this._type) this.drawPath(t, this._polygonPoints, n, o); else if (4 == this._type) {
this._polygonPoints || (this._polygonPoints = []);
var s = Math.min(e, i) / 2 - r;
this._polygonPoints.length = 0;
for (var a, l = cc.misc.degreesToRadians(this._startAngle), h = 2 * Math.PI / this._sides, c = 0; c < this._sides; c++) {
if (this._distances) {
a = this._distances[c];
isNaN(a) && (a = 1);
} else a = 1;
var u = s + s * a * Math.cos(l), p = s + s * a * Math.sin(l);
this._polygonPoints.push(u, p);
l += h;
}
this.drawPath(t, this._polygonPoints, n, o);
}
0 != r && t.stroke();
0 != this._fillColor.a && t.fill();
this._hasContent = !0;
}
};
i.prototype.drawPath = function(t, e, i, n) {
var o = e.length;
t.moveTo(e[0] + i, -e[1] + n);
for (var r = 2; r < o; r += 2) t.lineTo(e[r] + i, -e[r + 1] + n);
t.lineTo(e[0] + i, -e[1] + n);
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
0 != this._type && this.updateGraph();
};
i.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
0 != this._type && this.updateGraph();
};
i.prototype.getProp = function(i) {
return i == t.ObjectPropID.Color ? this.color : e.prototype.getProp.call(this, i);
};
i.prototype.setProp = function(i, n) {
i == t.ObjectPropID.Color ? this.color = n : e.prototype.setProp.call(this, i, n);
};
i.prototype._hitTest = function(t) {
if (t.x >= 0 && t.y >= 0 && t.x < this._width && t.y < this._height) {
if (3 == this._type) {
var e = this._polygonPoints, i = e.length / 2, n = void 0, o = i - 1, r = !1;
this._width, this._height;
for (n = 0; n < i; ++n) {
var s = e[2 * n], a = e[2 * n + 1], l = e[2 * o], h = e[2 * o + 1];
(a < t.y && h >= t.y || h < t.y && a >= t.y) && (s <= t.x || l <= t.x) && s + (t.y - a) / (h - a) * (l - s) < t.x && (r = !r);
o = n;
}
return r ? this : null;
}
return this;
}
return null;
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._type = t.readByte();
if (0 != this._type) {
var n, o;
this._lineSize = t.readInt();
this._lineColor.set(t.readColor(!0));
this._fillColor.set(t.readColor(!0));
if (t.readBool()) {
this._cornerRadius = new Array(4);
for (n = 0; n < 4; n++) this._cornerRadius[n] = t.readFloat();
}
if (3 == this._type) {
o = t.readShort();
this._polygonPoints = [];
this._polygonPoints.length = o;
for (n = 0; n < o; n++) this._polygonPoints[n] = t.readFloat();
} else if (4 == this._type) {
this._sides = t.readShort();
this._startAngle = t.readFloat();
if ((o = t.readShort()) > 0) {
this._distances = [];
for (n = 0; n < o; n++) this._distances[n] = t.readFloat();
}
}
this.updateGraph();
}
};
return i;
}(t.GObject);
t.GGraph = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._layout = 0;
t._lineGap = 0;
t._columnGap = 0;
t._mainGridIndex = -1;
t._mainGridMinSize = 50;
t._mainChildIndex = -1;
t._totalSize = 0;
t._numChildren = 0;
t._updating = 0;
t._node.name = "GGroup";
t._touchDisabled = !0;
return t;
}
i.prototype.dispose = function() {
this._boundsChanged = !1;
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "layout", {
get: function() {
return this._layout;
},
set: function(t) {
if (this._layout != t) {
this._layout = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "lineGap", {
get: function() {
return this._lineGap;
},
set: function(t) {
if (this._lineGap != t) {
this._lineGap = t;
this.setBoundsChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "columnGap", {
get: function() {
return this._columnGap;
},
set: function(t) {
if (this._columnGap != t) {
this._columnGap = t;
this.setBoundsChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "excludeInvisibles", {
get: function() {
return this._excludeInvisibles;
},
set: function(t) {
if (this._excludeInvisibles != t) {
this._excludeInvisibles = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSizeDisabled", {
get: function() {
return this._autoSizeDisabled;
},
set: function(t) {
this._autoSizeDisabled = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "mainGridMinSize", {
get: function() {
return this._mainGridMinSize;
},
set: function(t) {
if (this._mainGridMinSize != t) {
this._mainGridMinSize = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "mainGridIndex", {
get: function() {
return this._mainGridIndex;
},
set: function(t) {
if (this._mainGridIndex != t) {
this._mainGridIndex = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
i.prototype.setBoundsChangedFlag = function(e) {
void 0 === e && (e = !1);
if (0 == this._updating && this._parent) {
e || (this._percentReady = !1);
if (!this._boundsChanged) {
this._boundsChanged = !0;
this._layout != t.GroupLayoutType.None && this._partner.callLater(this._ensureBoundsCorrect);
}
}
};
i.prototype._ensureBoundsCorrect = function() {
this.node.$gobj.ensureBoundsCorrect();
};
i.prototype.ensureSizeCorrect = function() {
if (null != this._parent && this._boundsChanged && 0 != this._layout) {
this._boundsChanged = !1;
if (this._autoSizeDisabled) this.resizeChildren(0, 0); else {
this.handleLayout();
this.updateBounds();
}
}
};
i.prototype.ensureBoundsCorrect = function() {
if (null != this._parent && this._boundsChanged) {
this._boundsChanged = !1;
if (0 == this._layout) this.updateBounds(); else if (this._autoSizeDisabled) this.resizeChildren(0, 0); else {
this.handleLayout();
this.updateBounds();
}
}
};
i.prototype.updateBounds = function() {
this._partner.unschedule(this._ensureBoundsCorrect);
var t, e, i, n = this._parent.numChildren, o = Number.POSITIVE_INFINITY, r = Number.POSITIVE_INFINITY, s = Number.NEGATIVE_INFINITY, a = Number.NEGATIVE_INFINITY, l = !0;
for (t = 0; t < n; t++) if ((e = this._parent.getChildAt(t)).group == this && (!this._excludeInvisibles || e.internalVisible3)) {
(i = e.xMin) < o && (o = i);
(i = e.yMin) < r && (r = i);
(i = e.xMin + e.width) > s && (s = i);
(i = e.yMin + e.height) > a && (a = i);
l = !1;
}
var h = 0, c = 0;
if (!l) {
this._updating |= 1;
this.setPosition(o, r);
this._updating &= 2;
h = s - o;
c = a - r;
}
if (0 == (2 & this._updating)) {
this._updating |= 2;
this.setSize(h, c);
this._updating &= 1;
} else {
this._updating &= 1;
this.resizeChildren(this._width - h, this._height - c);
}
};
i.prototype.handleLayout = function() {
this._updating |= 1;
var e, i, n;
if (this._layout == t.GroupLayoutType.Horizontal) {
var o = this.x;
n = this._parent.numChildren;
for (i = 0; i < n; i++) if ((e = this._parent.getChildAt(i)).group == this && (!this._excludeInvisibles || e.internalVisible3)) {
e.xMin = o;
0 != e.width && (o += e.width + this._columnGap);
}
} else if (this._layout == t.GroupLayoutType.Vertical) {
var r = this.y;
n = this._parent.numChildren;
for (i = 0; i < n; i++) if ((e = this._parent.getChildAt(i)).group == this && (!this._excludeInvisibles || e.internalVisible3)) {
e.yMin = r;
0 != e.height && (r += e.height + this._lineGap);
}
}
this._updating &= 2;
};
i.prototype.moveChildren = function(t, e) {
if (0 == (1 & this._updating) && null != this._parent) {
this._updating |= 1;
var i, n, o = this._parent.numChildren;
for (i = 0; i < o; i++) (n = this._parent.getChildAt(i)).group == this && n.setPosition(n.x + t, n.y + e);
this._updating &= 2;
}
};
i.prototype.resizeChildren = function(e, i) {
if (this._layout != t.GroupLayoutType.None && 0 == (2 & this._updating) && null != this._parent) {
this._updating |= 2;
if (this._boundsChanged) {
this._boundsChanged = !1;
if (!this._autoSizeDisabled) {
this.updateBounds();
return;
}
}
var n, o, r = this._parent.numChildren;
if (!this._percentReady) {
this._percentReady = !0;
this._numChildren = 0;
this._totalSize = 0;
this._mainChildIndex = -1;
var s = 0;
for (n = 0; n < r; n++) if ((o = this._parent.getChildAt(n)).group == this) {
if (!this._excludeInvisibles || o.internalVisible3) {
s == this._mainGridIndex && (this._mainChildIndex = n);
this._numChildren++;
1 == this._layout ? this._totalSize += o.width : this._totalSize += o.height;
}
s++;
}
if (-1 != this._mainChildIndex) if (1 == this._layout) {
o = this._parent.getChildAt(this._mainChildIndex);
this._totalSize += this._mainGridMinSize - o.width;
o._sizePercentInGroup = this._mainGridMinSize / this._totalSize;
} else {
o = this._parent.getChildAt(this._mainChildIndex);
this._totalSize += this._mainGridMinSize - o.height;
o._sizePercentInGroup = this._mainGridMinSize / this._totalSize;
}
for (n = 0; n < r; n++) (o = this._parent.getChildAt(n)).group == this && n != this._mainChildIndex && (this._totalSize > 0 ? o._sizePercentInGroup = (1 == this._layout ? o.width : o.height) / this._totalSize : o._sizePercentInGroup = 0);
}
var a = 0, l = 1, h = !1;
if (1 == this._layout) {
a = this.width - (this._numChildren - 1) * this._columnGap;
if (-1 != this._mainChildIndex && a >= this._totalSize) {
(o = this._parent.getChildAt(this._mainChildIndex)).setSize(a - (this._totalSize - this._mainGridMinSize), o._rawHeight + i, !0);
a -= o.width;
l -= o._sizePercentInGroup;
h = !0;
}
var c = this.x;
for (n = 0; n < r; n++) if ((o = this._parent.getChildAt(n)).group == this) if (!this._excludeInvisibles || o.internalVisible3) {
if (!h || n != this._mainChildIndex) {
o.setSize(Math.round(o._sizePercentInGroup / l * a), o._rawHeight + i, !0);
l -= o._sizePercentInGroup;
a -= o.width;
}
o.xMin = c;
0 != o.width && (c += o.width + this._columnGap);
} else o.setSize(o._rawWidth, o._rawHeight + i, !0);
} else {
a = this.height - (this._numChildren - 1) * this._lineGap;
if (-1 != this._mainChildIndex && a >= this._totalSize) {
(o = this._parent.getChildAt(this._mainChildIndex)).setSize(o._rawWidth + e, a - (this._totalSize - this._mainGridMinSize), !0);
a -= o.height;
l -= o._sizePercentInGroup;
h = !0;
}
var u = this.y;
for (n = 0; n < r; n++) if ((o = this._parent.getChildAt(n)).group == this) if (!this._excludeInvisibles || o.internalVisible3) {
if (!h || n != this._mainChildIndex) {
o.setSize(o._rawWidth + e, Math.round(o._sizePercentInGroup / l * a), !0);
l -= o._sizePercentInGroup;
a -= o.height;
}
o.yMin = u;
0 != o.height && (u += o.height + this._lineGap);
} else o.setSize(o._rawWidth + e, o._rawHeight, !0);
}
this._updating &= 1;
}
};
i.prototype.handleAlphaChanged = function() {
if (!this._underConstruct) for (var t = this._parent.numChildren, e = 0; e < t; e++) {
var i = this._parent.getChildAt(e);
i.group == this && (i.alpha = this.alpha);
}
};
i.prototype.handleVisibleChanged = function() {
if (this._parent) for (var t = this._parent.numChildren, e = 0; e < t; e++) {
var i = this._parent.getChildAt(e);
i.group == this && i.handleVisibleChanged();
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._layout = t.readByte();
this._lineGap = t.readInt();
this._columnGap = t.readInt();
if (t.version >= 2) {
this._excludeInvisibles = t.readBool();
this._autoSizeDisabled = t.readBool();
this._mainGridIndex = t.readShort();
}
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
this.visible || this.handleVisibleChanged();
};
return i;
}(t.GObject);
t.GGroup = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GImage";
i._touchDisabled = !0;
i._content = i._node.addComponent(t.Image);
i._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
i._content.trim = !1;
return i;
}
i.prototype.dispose = function() {
this._content = null;
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._node.color;
},
set: function(t) {
this._node.color = t;
this.updateGear(4);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "flip", {
get: function() {
return this._content.flip;
},
set: function(t) {
this._content.flip = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillMethod", {
get: function() {
return this._content.fillMethod;
},
set: function(t) {
this._content.fillMethod = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillOrigin", {
get: function() {
return this._content.fillOrigin;
},
set: function(t) {
this._content.fillOrigin = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillClockwise", {
get: function() {
return this._content.fillClockwise;
},
set: function(t) {
this._content.fillClockwise = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillAmount", {
get: function() {
return this._content.fillAmount;
},
set: function(t) {
this._content.fillAmount = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.constructFromResource = function() {
var e = this, i = this.packageItem.getBranch();
this.sourceWidth = i.width;
this.sourceHeight = i.height;
this.initWidth = this.sourceWidth;
this.initHeight = this.sourceHeight;
this.setSize(this.sourceWidth, this.sourceHeight);
(i = i.getHighResolution()).scale9Grid ? this._content.type = cc.Sprite.Type.SLICED : i.scaleByTile && (this._content.type = cc.Sprite.Type.TILED);
if (!i.tryLoad(function(t, i) {
!t && i.asset || console.log("[GImage]loadAsync error:" + i.file, t);
!t && e._content && (e._content.spriteFrame = i.asset);
})) {
var n = i.owner.sprites[i.id];
if (n) {
var o = new cc.SpriteFrame(t.UIConfig.defAtlasTexture, cc.rect(0, 0, 2, 2), !1, new cc.Vec2(0, 0), n.originalSize);
this._content.spriteFrame = o;
}
}
};
i.prototype.handleGrayedChanged = function() {
this._content.grayed = this._grayed;
};
i.prototype.getProp = function(i) {
return i == t.ObjectPropID.Color ? this.color : e.prototype.getProp.call(this, i);
};
i.prototype.setProp = function(i, n) {
i == t.ObjectPropID.Color ? this.color = n : e.prototype.setProp.call(this, i, n);
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
t.readBool() && (this.color = t.readColor());
this._content.flip = t.readByte();
this._content.fillMethod = t.readByte();
if (0 != this._content.fillMethod) {
this._content.fillOrigin = t.readByte();
this._content.fillClockwise = t.readBool();
this._content.fillAmount = t.readFloat();
}
};
return i;
}(t.GObject);
t.GImage = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._node.name = "GLabel";
return t;
}
Object.defineProperty(i.prototype, "icon", {
get: function() {
if (this._iconObject) return this._iconObject.icon;
},
set: function(t) {
this._iconObject && (this._iconObject.icon = t);
this.updateGear(7);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "title", {
get: function() {
return this._titleObject ? this._titleObject.text : null;
},
set: function(t) {
this._titleObject && (this._titleObject.text = t);
this.updateGear(6);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "text", {
get: function() {
return this.title;
},
set: function(t) {
this.title = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleColor", {
get: function() {
var t = this.getTextField();
return t ? t.color : cc.Color.WHITE;
},
set: function(t) {
var e = this.getTextField();
e && (e.color = t);
this.updateGear(4);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleFontSize", {
get: function() {
var t = this.getTextField();
return t ? t.fontSize : 0;
},
set: function(t) {
var e = this.getTextField();
e && (e.fontSize = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "editable", {
get: function() {
return !!(this._titleObject && this._titleObject instanceof t.GTextInput) && this._titleObject.editable;
},
set: function(e) {
this._titleObject && this._titleObject instanceof t.GTextInput && (this._titleObject.editable = e);
},
enumerable: !1,
configurable: !0
});
i.prototype.getTextField = function() {
return this._titleObject instanceof t.GTextField ? this._titleObject : this._titleObject instanceof i || this._titleObject instanceof t.GButton ? this._titleObject.getTextField() : null;
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.titleColor;

case t.ObjectPropID.OutlineColor:
var n = this.getTextField();
return n ? n.strokeColor : 0;

case t.ObjectPropID.FontSize:
return this.titleFontSize;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.titleColor = n;
break;

case t.ObjectPropID.OutlineColor:
var o = this.getTextField();
o && (o.strokeColor = n);
break;

case t.ObjectPropID.FontSize:
this.titleFontSize = n;
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructExtension = function() {
this._titleObject = this.getChild("title");
this._iconObject = this.getChild("icon");
};
i.prototype.setup_afterAdd = function(i, n) {
e.prototype.setup_afterAdd.call(this, i, n);
if (i.seek(n, 6) && i.readByte() == this.packageItem.objectType) {
var o;
null != (o = i.readS()) && (this.title = o);
null != (o = i.readS()) && (this.icon = o);
i.readBool() && (this.titleColor = i.readColor());
var r = i.readInt();
0 != r && (this.titleFontSize = r);
if (i.readBool()) {
var s = this.getTextField();
if (s instanceof t.GTextInput) {
null != (o = i.readS()) && (s.promptText = o);
null != (o = i.readS()) && (s.restrict = o);
0 != (r = i.readInt()) && (s.maxLength = r);
r = i.readInt();
i.readBool() && (s.password = !0);
} else i.skip(13);
}
}
};
return i;
}(t.GComponent);
t.GLabel = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i.scrollItemToViewOnClick = !0;
i.foldInvisibleItems = !1;
i._lineCount = 0;
i._columnCount = 0;
i._lineGap = 0;
i._columnGap = 0;
i._lastSelectedIndex = 0;
i._numItems = 0;
i._realNumItems = 0;
i._firstIndex = 0;
i._curLineItemCount = 0;
i._curLineItemCount2 = 0;
i._virtualListChanged = 0;
i.itemInfoVer = 0;
i._node.name = "GList";
i._trackBounds = !0;
i._pool = new t.GObjectPool();
i._layout = t.ListLayoutType.SingleColumn;
i._autoResizeItem = !0;
i._lastSelectedIndex = -1;
i._selectionMode = t.ListSelectionMode.Single;
i.opaque = !0;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
return i;
}
n.prototype.dispose = function() {
this._partner.unschedule(this._refreshVirtualList);
this._pool.clear();
e.prototype.dispose.call(this);
};
Object.defineProperty(n.prototype, "layout", {
get: function() {
return this._layout;
},
set: function(t) {
if (this._layout != t) {
this._layout = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "lineCount", {
get: function() {
return this._lineCount;
},
set: function(t) {
if (this._lineCount != t) {
this._lineCount = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "columnCount", {
get: function() {
return this._columnCount;
},
set: function(t) {
if (this._columnCount != t) {
this._columnCount = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "lineGap", {
get: function() {
return this._lineGap;
},
set: function(t) {
if (this._lineGap != t) {
this._lineGap = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "columnGap", {
get: function() {
return this._columnGap;
},
set: function(t) {
if (this._columnGap != t) {
this._columnGap = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "virtualItemSize", {
get: function() {
return this._itemSize;
},
set: function(t) {
if (this._virtual) {
null == this._itemSize && (this._itemSize = new cc.Size(0, 0));
this._itemSize.width = t.width;
this._itemSize.height = t.height;
this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "defaultItem", {
get: function() {
return this._defaultItem;
},
set: function(e) {
this._defaultItem = t.UIPackage.normalizeURL(e);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "autoResizeItem", {
get: function() {
return this._autoResizeItem;
},
set: function(t) {
if (this._autoResizeItem != t) {
this._autoResizeItem = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "selectionMode", {
get: function() {
return this._selectionMode;
},
set: function(t) {
this._selectionMode = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "selectionController", {
get: function() {
return this._selectionController;
},
set: function(t) {
this._selectionController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "itemPool", {
get: function() {
return this._pool;
},
enumerable: !1,
configurable: !0
});
n.prototype.getFromPool = function(t) {
t || (t = this._defaultItem);
var e = this._pool.getObject(t);
e && (e.visible = !0);
return e;
};
n.prototype.returnToPool = function(t) {
this._pool.returnObject(t);
};
n.prototype.addChildAt = function(i, n) {
e.prototype.addChildAt.call(this, i, n);
if (i instanceof t.GButton) {
i.selected = !1;
i.changeStateOnClick = !1;
}
i.on(t.Event.CLICK, this.onClickItem, this);
return i;
};
n.prototype.addItem = function(e) {
e || (e = this._defaultItem);
return this.addChild(t.UIPackage.createObjectFromURL(e));
};
n.prototype.addItemFromPool = function(t) {
return this.addChild(this.getFromPool(t));
};
n.prototype.removeChildAt = function(i, n) {
var o = e.prototype.removeChildAt.call(this, i, n);
n || o.off(t.Event.CLICK, this.onClickItem, this);
return o;
};
n.prototype.removeChildToPoolAt = function(t) {
var i = e.prototype.removeChildAt.call(this, t);
this.returnToPool(i);
};
n.prototype.removeChildToPool = function(t) {
e.prototype.removeChild.call(this, t);
this.returnToPool(t);
};
n.prototype.removeChildrenToPool = function(t, e) {
null == t && (t = 0);
null == e && (e = -1);
(e < 0 || e >= this._children.length) && (e = this._children.length - 1);
for (var i = t; i <= e; ++i) this.removeChildToPoolAt(t);
};
Object.defineProperty(n.prototype, "selectedIndex", {
get: function() {
var e;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var i = this._virtualItems[e];
if (i.obj instanceof t.GButton && i.obj.selected || !i.obj && i.selected) return this._loop ? e % this._numItems : e;
} else {
var n = this._children.length;
for (e = 0; e < n; e++) {
var o = this._children[e];
if (o instanceof t.GButton && o.selected) return e;
}
}
return -1;
},
set: function(e) {
if (e >= 0 && e < this.numItems) {
this._selectionMode != t.ListSelectionMode.Single && this.clearSelection();
this.addSelection(e);
} else this.clearSelection();
},
enumerable: !1,
configurable: !0
});
n.prototype.getSelection = function(e) {
e || (e = new Array());
var i;
if (this._virtual) for (i = 0; i < this._realNumItems; i++) {
var n = this._virtualItems[i];
if (n.obj instanceof t.GButton && n.obj.selected || !n.obj && n.selected) {
var o = i;
if (this._loop) {
o = i % this._numItems;
if (-1 != e.indexOf(o)) continue;
}
e.push(o);
}
} else {
var r = this._children.length;
for (i = 0; i < r; i++) {
var s = this._children[i];
s instanceof t.GButton && s.selected && e.push(i);
}
}
return e;
};
n.prototype.addSelection = function(e, i) {
if (this._selectionMode != t.ListSelectionMode.None) {
this.checkVirtualList();
this._selectionMode == t.ListSelectionMode.Single && this.clearSelection();
i && this.scrollToView(e);
this._lastSelectedIndex = e;
var n;
if (this._virtual) {
var o = this._virtualItems[e];
o.obj && (n = o.obj);
o.selected = !0;
} else n = this.getChildAt(e);
if (n instanceof t.GButton && !n.selected) {
n.selected = !0;
this.updateSelectionController(e);
}
}
};
n.prototype.removeSelection = function(e) {
if (this._selectionMode != t.ListSelectionMode.None) {
var i;
if (this._virtual) {
var n = this._virtualItems[e];
n.obj && (i = n.obj);
n.selected = !1;
} else i = this.getChildAt(e);
i instanceof t.GButton && (i.selected = !1);
}
};
n.prototype.clearSelection = function() {
var e;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var i = this._virtualItems[e];
i.obj instanceof t.GButton && (i.obj.selected = !1);
i.selected = !1;
} else {
var n = this._children.length;
for (e = 0; e < n; e++) {
var o = this._children[e];
o instanceof t.GButton && (o.selected = !1);
}
}
};
n.prototype.clearSelectionExcept = function(e) {
var i;
if (this._virtual) for (i = 0; i < this._realNumItems; i++) {
var n = this._virtualItems[i];
if (n.obj != e) {
n.obj instanceof t.GButton && (n.obj.selected = !1);
n.selected = !1;
}
} else {
var o = this._children.length;
for (i = 0; i < o; i++) {
var r = this._children[i];
r instanceof t.GButton && r != e && (r.selected = !1);
}
}
};
n.prototype.selectAll = function() {
this.checkVirtualList();
var e, i = -1;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var n = this._virtualItems[e];
if (n.obj instanceof t.GButton && !n.obj.selected) {
n.obj.selected = !0;
i = e;
}
n.selected = !0;
} else {
var o = this._children.length;
for (e = 0; e < o; e++) {
var r = this._children[e];
if (r instanceof t.GButton && !r.selected) {
r.selected = !0;
i = e;
}
}
}
-1 != i && this.updateSelectionController(i);
};
n.prototype.selectNone = function() {
this.clearSelection();
};
n.prototype.selectReverse = function() {
this.checkVirtualList();
var e, i = -1;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var n = this._virtualItems[e];
if (n.obj instanceof t.GButton) {
n.obj.selected = !n.obj.selected;
n.obj.selected && (i = e);
}
n.selected = !n.selected;
} else {
var o = this._children.length;
for (e = 0; e < o; e++) {
var r = this._children[e];
if (r instanceof t.GButton) {
r.selected = !r.selected;
r.selected && (i = e);
}
}
}
-1 != i && this.updateSelectionController(i);
};
n.prototype.handleArrowKey = function(e) {
var i = this.selectedIndex;
if (-1 != i) switch (e) {
case 1:
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowVertical) {
if (--i >= 0) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
for (var n = this._children[i], o = 0, r = i - 1; r >= 0; r--) {
var s = this._children[r];
if (s.y != n.y) {
n = s;
break;
}
o++;
}
for (;r >= 0; r--) if ((s = this._children[r]).y != n.y) {
this.clearSelection();
this.addSelection(r + o + 1, !0);
break;
}
}
break;

case 3:
if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
if (++i < this._children.length) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowVertical) {
n = this._children[i];
o = 0;
var a = this._children.length;
for (r = i + 1; r < a; r++) {
if ((s = this._children[r]).x != n.x) {
n = s;
break;
}
o++;
}
for (;r < a; r++) if ((s = this._children[r]).x != n.x) {
this.clearSelection();
this.addSelection(r - o - 1, !0);
break;
}
}
break;

case 5:
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowVertical) {
if (++i < this._children.length) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
n = this._children[i];
o = 0;
a = this._children.length;
for (r = i + 1; r < a; r++) {
if ((s = this._children[r]).y != n.y) {
n = s;
break;
}
o++;
}
for (;r < a; r++) if ((s = this._children[r]).y != n.y) {
this.clearSelection();
this.addSelection(r - o - 1, !0);
break;
}
}
break;

case 7:
if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
if (--i >= 0) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowVertical) {
n = this._children[i];
o = 0;
for (r = i - 1; r >= 0; r--) {
if ((s = this._children[r]).x != n.x) {
n = s;
break;
}
o++;
}
for (;r >= 0; r--) if ((s = this._children[r]).x != n.x) {
this.clearSelection();
this.addSelection(r + o + 1, !0);
break;
}
}
}
};
n.prototype.onClickItem = function(e) {
if (!this._scrollPane || !this._scrollPane.isDragged) {
var i = t.GObject.cast(e.currentTarget);
this.setSelectionOnEvent(i, e);
this._scrollPane && this.scrollItemToViewOnClick && this._scrollPane.scrollToView(i, !0);
this.dispatchItemEvent(i, e);
}
};
n.prototype.dispatchItemEvent = function(e, i) {
this._node.emit(t.Event.CLICK_ITEM, e, i);
};
n.prototype.setSelectionOnEvent = function(e, i) {
if (e instanceof t.GButton && this._selectionMode != t.ListSelectionMode.None) {
var n = !1, o = this.childIndexToItemIndex(this.getChildIndex(e));
if (this._selectionMode == t.ListSelectionMode.Single) {
if (!e.selected) {
this.clearSelectionExcept(e);
e.selected = !0;
}
} else if (i.isShiftDown) {
if (!e.selected) if (-1 != this._lastSelectedIndex) {
var r, s = Math.min(this._lastSelectedIndex, o), a = Math.max(this._lastSelectedIndex, o);
a = Math.min(a, this.numItems - 1);
if (this._virtual) for (r = s; r <= a; r++) {
var l = this._virtualItems[r];
l.obj instanceof t.GButton && (l.obj.selected = !0);
l.selected = !0;
} else for (r = s; r <= a; r++) {
var h = this.getChildAt(r);
h instanceof t.GButton && (h.selected = !0);
}
n = !0;
} else e.selected = !0;
} else if (i.isCtrlDown || this._selectionMode == t.ListSelectionMode.Multiple_SingleClick) e.selected = !e.selected; else if (e.selected) this.clearSelectionExcept(e); else {
this.clearSelectionExcept(e);
e.selected = !0;
}
n || (this._lastSelectedIndex = o);
e.selected && this.updateSelectionController(o);
}
};
n.prototype.resizeToFit = function(e, i) {
void 0 === e && (e = Number.POSITIVE_INFINITY);
void 0 === i && (i = 0);
this.ensureBoundsCorrect();
var n = this.numItems;
e > n && (e = n);
if (this._virtual) {
var o = Math.ceil(e / this._curLineItemCount);
this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal ? this.viewHeight = o * this._itemSize.height + Math.max(0, o - 1) * this._lineGap : this.viewWidth = o * this._itemSize.width + Math.max(0, o - 1) * this._columnGap;
} else if (0 == e) this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal ? this.viewHeight = i : this.viewWidth = i; else {
for (var r = e - 1, s = null; r >= 0; ) {
s = this.getChildAt(r);
if (!this.foldInvisibleItems || s.visible) break;
r--;
}
if (r < 0) this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal ? this.viewHeight = i : this.viewWidth = i; else {
var a = 0;
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
(a = s.y + s.height) < i && (a = i);
this.viewHeight = a;
} else {
(a = s.x + s.width) < i && (a = i);
this.viewWidth = a;
}
}
}
};
n.prototype.getMaxItemWidth = function() {
for (var t = this._children.length, e = 0, i = 0; i < t; i++) {
var n = this.getChildAt(i);
n.width > e && (e = n.width);
}
return e;
};
n.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
};
n.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._selectionController == t && (this.selectedIndex = t.selectedIndex);
};
n.prototype.updateSelectionController = function(t) {
if (this._selectionController && !this._selectionController.changing && t < this._selectionController.pageCount) {
var e = this._selectionController;
this._selectionController = null;
e.selectedIndex = t;
this._selectionController = e;
}
};
n.prototype.getSnappingPosition = function(n, o, r) {
if (this._virtual) {
r = r || new cc.Vec2();
var s, a;
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
s = o;
i = o;
a = this.getIndexOnPos1(!1);
o = i;
a < this._virtualItems.length && s - o > this._virtualItems[a].height / 2 && a < this._realNumItems && (o += this._virtualItems[a].height + this._lineGap);
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
s = n;
i = n;
a = this.getIndexOnPos2(!1);
n = i;
a < this._virtualItems.length && s - n > this._virtualItems[a].width / 2 && a < this._realNumItems && (n += this._virtualItems[a].width + this._columnGap);
} else {
s = n;
i = n;
a = this.getIndexOnPos3(!1);
n = i;
a < this._virtualItems.length && s - n > this._virtualItems[a].width / 2 && a < this._realNumItems && (n += this._virtualItems[a].width + this._columnGap);
}
r.x = n;
r.y = o;
return r;
}
return e.prototype.getSnappingPosition.call(this, n, o, r);
};
n.prototype.scrollToView = function(e, i, n) {
if (this._virtual) {
if (0 == this._numItems) return;
this.checkVirtualList();
if (e >= this._virtualItems.length) throw "Invalid child index: " + e + ">" + this._virtualItems.length;
this._loop && (e = Math.floor(this._firstIndex / this._numItems) * this._numItems + e);
var o, r, s = this._virtualItems[e], a = 0;
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
for (r = this._curLineItemCount - 1; r < e; r += this._curLineItemCount) a += this._virtualItems[r].height + this._lineGap;
o = new cc.Rect(0, a, this._itemSize.width, s.height);
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
for (r = this._curLineItemCount - 1; r < e; r += this._curLineItemCount) a += this._virtualItems[r].width + this._columnGap;
o = new cc.Rect(a, 0, s.width, this._itemSize.height);
} else {
var l = e / (this._curLineItemCount * this._curLineItemCount2);
o = new cc.Rect(l * this.viewWidth + e % this._curLineItemCount * (s.width + this._columnGap), e / this._curLineItemCount % this._curLineItemCount2 * (s.height + this._lineGap), s.width, s.height);
}
this._scrollPane && this._scrollPane.scrollToView(o, i, n);
} else {
var h = this.getChildAt(e);
h && (this._scrollPane ? this._scrollPane.scrollToView(h, i, n) : this.parent && this.parent.scrollPane && this.parent.scrollPane.scrollToView(h, i, n));
}
};
n.prototype.getFirstChildInView = function() {
return this.childIndexToItemIndex(e.prototype.getFirstChildInView.call(this));
};
n.prototype.childIndexToItemIndex = function(e) {
if (!this._virtual) return e;
if (this._layout == t.ListLayoutType.Pagination) {
for (var i = this._firstIndex; i < this._realNumItems; i++) if (this._virtualItems[i].obj && --e < 0) return i;
return e;
}
e += this._firstIndex;
this._loop && this._numItems > 0 && (e %= this._numItems);
return e;
};
n.prototype.itemIndexToChildIndex = function(e) {
if (!this._virtual) return e;
if (this._layout == t.ListLayoutType.Pagination) return this.getChildIndex(this._virtualItems[e].obj);
if (this._loop && this._numItems > 0) {
var i = this._firstIndex % this._numItems;
e >= i ? e -= i : e = this._numItems - i + e;
} else e -= this._firstIndex;
return e;
};
n.prototype.setVirtual = function() {
this._setVirtual(!1);
};
n.prototype.setVirtualAndLoop = function() {
this._setVirtual(!0);
};
n.prototype._setVirtual = function(e) {
if (!this._virtual) {
if (!this._scrollPane) throw "Virtual list must be scrollable!";
if (e) {
if (this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.FlowVertical) throw "Loop list is not supported for FlowHorizontal or FlowVertical layout!";
this._scrollPane.bouncebackEffect = !1;
}
this._virtual = !0;
this._loop = e;
this._virtualItems = new Array();
this.removeChildrenToPool();
if (null == this._itemSize) {
this._itemSize = new cc.Size(0, 0);
var i = this.getFromPool(null);
if (!i) throw "Virtual List must have a default list item resource.";
this._itemSize.width = i.width;
this._itemSize.height = i.height;
this.returnToPool(i);
}
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
this._scrollPane.scrollStep = this._itemSize.height;
this._loop && (this._scrollPane._loop = 2);
} else {
this._scrollPane.scrollStep = this._itemSize.width;
this._loop && (this._scrollPane._loop = 1);
}
this._node.on(t.Event.SCROLL, this.__scrolled, this);
this.setVirtualListChangedFlag(!0);
}
};
Object.defineProperty(n.prototype, "numItems", {
get: function() {
return this._virtual ? this._numItems : this._children.length;
},
set: function(t) {
if (this._virtual) {
if (null == this.itemRenderer) throw "Set itemRenderer first!";
this._numItems = t;
this._loop ? this._realNumItems = 6 * this._numItems : this._realNumItems = this._numItems;
var e = this._virtualItems.length;
if (this._realNumItems > e) for (o = e; o < this._realNumItems; o++) {
var i = {
width: this._itemSize.width,
height: this._itemSize.height,
updateFlag: 0
};
this._virtualItems.push(i);
} else for (o = this._realNumItems; o < e; o++) this._virtualItems[o].selected = !1;
0 != this._virtualListChanged && this._partner.unschedule(this._refreshVirtualList);
this._refreshVirtualList();
} else {
var n = this._children.length;
if (t > n) for (var o = n; o < t; o++) null == this.itemProvider ? this.addItemFromPool() : this.addItemFromPool(this.itemProvider(o)); else this.removeChildrenToPool(t, n);
if (null != this.itemRenderer) for (o = 0; o < t; o++) this.itemRenderer(o, this.getChildAt(o));
}
},
enumerable: !1,
configurable: !0
});
n.prototype.refreshVirtualList = function() {
this.setVirtualListChangedFlag(!1);
};
n.prototype.checkVirtualList = function() {
if (0 != this._virtualListChanged) {
this._refreshVirtualList();
this._partner.unschedule(this._refreshVirtualList);
}
};
n.prototype.setVirtualListChangedFlag = function(t) {
t ? this._virtualListChanged = 2 : 0 == this._virtualListChanged && (this._virtualListChanged = 1);
this._partner.callLater(this._refreshVirtualList);
};
n.prototype._refreshVirtualList = function(e) {
if (isNaN(e)) {
var i = 2 == this._virtualListChanged;
this._virtualListChanged = 0;
this._eventLocked = !0;
if (i) if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.SingleRow) this._curLineItemCount = 1; else if (this._layout == t.ListLayoutType.FlowHorizontal) if (this._columnCount > 0) this._curLineItemCount = this._columnCount; else {
this._curLineItemCount = Math.floor((this._scrollPane.viewWidth + this._columnGap) / (this._itemSize.width + this._columnGap));
this._curLineItemCount <= 0 && (this._curLineItemCount = 1);
} else if (this._layout == t.ListLayoutType.FlowVertical) if (this._lineCount > 0) this._curLineItemCount = this._lineCount; else {
this._curLineItemCount = Math.floor((this._scrollPane.viewHeight + this._lineGap) / (this._itemSize.height + this._lineGap));
this._curLineItemCount <= 0 && (this._curLineItemCount = 1);
} else {
if (this._columnCount > 0) this._curLineItemCount = this._columnCount; else {
this._curLineItemCount = Math.floor((this._scrollPane.viewWidth + this._columnGap) / (this._itemSize.width + this._columnGap));
this._curLineItemCount <= 0 && (this._curLineItemCount = 1);
}
if (this._lineCount > 0) this._curLineItemCount2 = this._lineCount; else {
this._curLineItemCount2 = Math.floor((this._scrollPane.viewHeight + this._lineGap) / (this._itemSize.height + this._lineGap));
this._curLineItemCount2 <= 0 && (this._curLineItemCount2 = 1);
}
}
var n = 0, o = 0;
if (this._realNumItems > 0) {
var r, s = Math.ceil(this._realNumItems / this._curLineItemCount) * this._curLineItemCount, a = Math.min(this._curLineItemCount, this._realNumItems);
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
for (r = 0; r < s; r += this._curLineItemCount) n += this._virtualItems[r].height + this._lineGap;
n > 0 && (n -= this._lineGap);
if (this._autoResizeItem) o = this._scrollPane.viewWidth; else {
for (r = 0; r < a; r++) o += this._virtualItems[r].width + this._columnGap;
o > 0 && (o -= this._columnGap);
}
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
for (r = 0; r < s; r += this._curLineItemCount) o += this._virtualItems[r].width + this._columnGap;
o > 0 && (o -= this._columnGap);
if (this._autoResizeItem) n = this._scrollPane.viewHeight; else {
for (r = 0; r < a; r++) n += this._virtualItems[r].height + this._lineGap;
n > 0 && (n -= this._lineGap);
}
} else {
o = Math.ceil(s / (this._curLineItemCount * this._curLineItemCount2)) * this.viewWidth;
n = this.viewHeight;
}
}
this.handleAlign(o, n);
this._scrollPane.setContentSize(o, n);
this._eventLocked = !1;
this.handleScroll(!0);
} else this.node.$gobj._refreshVirtualList();
};
n.prototype.__scrolled = function() {
this.handleScroll(!1);
};
n.prototype.getIndexOnPos1 = function(t) {
if (this._realNumItems < this._curLineItemCount) {
i = 0;
return 0;
}
var e, n, o;
if (this.numChildren > 0 && !t) {
if ((n = this.getChildAt(0).y) > i) {
for (e = this._firstIndex - this._curLineItemCount; e >= 0; e -= this._curLineItemCount) if ((n -= this._virtualItems[e].height + this._lineGap) <= i) {
i = n;
return e;
}
i = 0;
return 0;
}
for (e = this._firstIndex; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].height + this._lineGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
}
n = 0;
for (e = 0; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].height + this._lineGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
};
n.prototype.getIndexOnPos2 = function(t) {
if (this._realNumItems < this._curLineItemCount) {
i = 0;
return 0;
}
var e, n, o;
if (this.numChildren > 0 && !t) {
if ((n = this.getChildAt(0).x) > i) {
for (e = this._firstIndex - this._curLineItemCount; e >= 0; e -= this._curLineItemCount) if ((n -= this._virtualItems[e].width + this._columnGap) <= i) {
i = n;
return e;
}
i = 0;
return 0;
}
for (e = this._firstIndex; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].width + this._columnGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
}
n = 0;
for (e = 0; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].width + this._columnGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
};
n.prototype.getIndexOnPos3 = function() {
if (this._realNumItems < this._curLineItemCount) {
i = 0;
return 0;
}
var t, e, n = this.viewWidth, o = Math.floor(i / n), r = o * this._curLineItemCount * this._curLineItemCount2, s = o * n;
for (t = 0; t < this._curLineItemCount; t++) {
if ((e = s + this._virtualItems[r + t].width + this._columnGap) > i) {
i = s;
return r + t;
}
s = e;
}
i = s;
return r + this._curLineItemCount - 1;
};
n.prototype.handleScroll = function(e) {
if (!this._eventLocked) {
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
for (var i = 0; this.handleScroll1(e); ) {
e = !1;
if (++i > 20) {
console.log("FairyGUI: list will never be filled as the item renderer function always returns a different size.");
break;
}
}
this.handleArchOrder1();
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
i = 0;
for (;this.handleScroll2(e); ) {
e = !1;
if (++i > 20) {
console.log("FairyGUI: list will never be filled as the item renderer function always returns a different size.");
break;
}
}
this.handleArchOrder2();
} else this.handleScroll3(e);
this._boundsChanged = !1;
}
};
n.prototype.handleScroll1 = function(e) {
var n = this._scrollPane.scrollingPosY, o = n + this._scrollPane.viewHeight, r = o == this._scrollPane.contentHeight;
i = n;
var s = this.getIndexOnPos1(e);
n = i;
if (s == this._firstIndex && !e) return !1;
var a = this._firstIndex;
this._firstIndex = s;
var l, h, c, u, p, d = s, f = a > s, _ = this.numChildren, g = a + _ - 1, y = f ? g : a, m = 0, v = n, b = 0, w = 0, C = this._defaultItem, S = (this._scrollPane.viewWidth - this._columnGap * (this._curLineItemCount - 1)) / this._curLineItemCount;
this.itemInfoVer++;
for (;d < this._realNumItems && (r || v < o); ) {
if (!(h = this._virtualItems[d]).obj || e) {
if (null != this.itemProvider) {
null == (C = this.itemProvider(d % this._numItems)) && (C = this._defaultItem);
C = t.UIPackage.normalizeURL(C);
}
if (h.obj && h.obj.resourceURL != C) {
h.obj instanceof t.GButton && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
}
if (h.obj) l = e; else {
if (f) {
for (p = y; p >= a; p--) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == C) {
c.obj instanceof t.GButton && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y--;
break;
}
} else for (p = y; p <= g; p++) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == C) {
c.obj instanceof t.GButton && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y++;
break;
}
if (h.obj) this.setChildIndex(h.obj, f ? d - s : this.numChildren); else {
h.obj = this._pool.getObject(C);
f ? this.addChildAt(h.obj, d - s) : this.addChild(h.obj);
}
h.obj instanceof t.GButton && (h.obj.selected = h.selected);
l = !0;
}
if (l) {
this._autoResizeItem && (this._layout == t.ListLayoutType.SingleColumn || this._columnCount > 0) && h.obj.setSize(S, h.obj.height, !0);
this.itemRenderer(d % this._numItems, h.obj);
if (d % this._curLineItemCount == 0) {
b += Math.ceil(h.obj.height) - h.height;
d == s && a > s && (w = Math.ceil(h.obj.height) - h.height);
}
h.width = Math.ceil(h.obj.width);
h.height = Math.ceil(h.obj.height);
}
h.updateFlag = this.itemInfoVer;
h.obj.setPosition(m, v);
d == s && (o += h.height);
m += h.width + this._columnGap;
if (d % this._curLineItemCount == this._curLineItemCount - 1) {
m = 0;
v += h.height + this._lineGap;
}
d++;
}
for (u = 0; u < _; u++) if ((h = this._virtualItems[a + u]).updateFlag != this.itemInfoVer && h.obj) {
h.obj instanceof t.GButton && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
_ = this._children.length;
for (u = 0; u < _; u++) {
var x = this._virtualItems[s + u].obj;
this._children[u] != x && this.setChildIndex(x, u);
}
0 == b && 0 == w || this._scrollPane.changeContentSizeOnScrolling(0, b, 0, w);
return d > 0 && this.numChildren > 0 && this._container.y <= 0 && this.getChildAt(0).y > -this._container.y;
};
n.prototype.handleScroll2 = function(e) {
var n = this._scrollPane.scrollingPosX, o = n + this._scrollPane.viewWidth, r = n == this._scrollPane.contentWidth;
i = n;
var s = this.getIndexOnPos2(e);
n = i;
if (s == this._firstIndex && !e) return !1;
var a = this._firstIndex;
this._firstIndex = s;
var l, h, c, u, p, d = s, f = a > s, _ = this.numChildren, g = a + _ - 1, y = f ? g : a, m = n, v = 0, b = 0, w = 0, C = this._defaultItem, S = (this._scrollPane.viewHeight - this._lineGap * (this._curLineItemCount - 1)) / this._curLineItemCount;
this.itemInfoVer++;
for (;d < this._realNumItems && (r || m < o); ) {
if (!(h = this._virtualItems[d]).obj || e) {
if (null != this.itemProvider) {
null == (C = this.itemProvider(d % this._numItems)) && (C = this._defaultItem);
C = t.UIPackage.normalizeURL(C);
}
if (h.obj && h.obj.resourceURL != C) {
h.obj instanceof t.GButton && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
}
if (h.obj) l = e; else {
if (f) {
for (p = y; p >= a; p--) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == C) {
c.obj instanceof t.GButton && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y--;
break;
}
} else for (p = y; p <= g; p++) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == C) {
c.obj instanceof t.GButton && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y++;
break;
}
if (h.obj) this.setChildIndex(h.obj, f ? d - s : this.numChildren); else {
h.obj = this._pool.getObject(C);
f ? this.addChildAt(h.obj, d - s) : this.addChild(h.obj);
}
h.obj instanceof t.GButton && (h.obj.selected = h.selected);
l = !0;
}
if (l) {
this._autoResizeItem && (this._layout == t.ListLayoutType.SingleRow || this._lineCount > 0) && h.obj.setSize(h.obj.width, S, !0);
this.itemRenderer(d % this._numItems, h.obj);
if (d % this._curLineItemCount == 0) {
b += Math.ceil(h.obj.width) - h.width;
d == s && a > s && (w = Math.ceil(h.obj.width) - h.width);
}
h.width = Math.ceil(h.obj.width);
h.height = Math.ceil(h.obj.height);
}
h.updateFlag = this.itemInfoVer;
h.obj.setPosition(m, v);
d == s && (o += h.width);
v += h.height + this._lineGap;
if (d % this._curLineItemCount == this._curLineItemCount - 1) {
v = 0;
m += h.width + this._columnGap;
}
d++;
}
for (u = 0; u < _; u++) if ((h = this._virtualItems[a + u]).updateFlag != this.itemInfoVer && h.obj) {
h.obj instanceof t.GButton && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
_ = this._children.length;
for (u = 0; u < _; u++) {
var x = this._virtualItems[s + u].obj;
this._children[u] != x && this.setChildIndex(x, u);
}
0 == b && 0 == w || this._scrollPane.changeContentSizeOnScrolling(b, 0, w, 0);
return d > 0 && this.numChildren > 0 && this._container.x <= 0 && this.getChildAt(0).x > -this._container.x;
};
n.prototype.handleScroll3 = function(e) {
var n = this._scrollPane.scrollingPosX;
i = n;
var o = this.getIndexOnPos3(e);
n = i;
if (o != this._firstIndex || e) {
var r = this._firstIndex;
this._firstIndex = o;
var s, a, l, h, c, u = r, p = this._virtualItems.length, d = this._curLineItemCount * this._curLineItemCount2, f = o % this._curLineItemCount, _ = this.viewWidth, g = Math.floor(o / d) * d, y = g + 2 * d, m = this._defaultItem, v = (this._scrollPane.viewWidth - this._columnGap * (this._curLineItemCount - 1)) / this._curLineItemCount, b = (this._scrollPane.viewHeight - this._lineGap * (this._curLineItemCount2 - 1)) / this._curLineItemCount2;
this.itemInfoVer++;
for (a = g; a < y; a++) if (!(a >= this._realNumItems)) {
c = a % this._curLineItemCount;
if (a - g < d) {
if (c < f) continue;
} else if (c > f) continue;
(l = this._virtualItems[a]).updateFlag = this.itemInfoVer;
}
var w = null, C = 0;
for (a = g; a < y; a++) if (!(a >= this._realNumItems) && (l = this._virtualItems[a]).updateFlag == this.itemInfoVer) {
if (l.obj) {
s = e;
C = -1;
w = l.obj;
} else {
for (;u < p; ) {
if ((h = this._virtualItems[u]).obj && h.updateFlag != this.itemInfoVer) {
h.obj instanceof t.GButton && (h.selected = h.obj.selected);
l.obj = h.obj;
h.obj = null;
break;
}
u++;
}
-1 == C && (C = this.getChildIndex(w) + 1);
if (l.obj) C = this.setChildIndexBefore(l.obj, C); else {
if (null != this.itemProvider) {
null == (m = this.itemProvider(a % this._numItems)) && (m = this._defaultItem);
m = t.UIPackage.normalizeURL(m);
}
l.obj = this._pool.getObject(m);
this.addChildAt(l.obj, C);
}
C++;
l.obj instanceof t.GButton && (l.obj.selected = l.selected);
s = !0;
}
if (s) {
this._autoResizeItem && (this._curLineItemCount == this._columnCount && this._curLineItemCount2 == this._lineCount ? l.obj.setSize(v, b, !0) : this._curLineItemCount == this._columnCount ? l.obj.setSize(v, l.obj.height, !0) : this._curLineItemCount2 == this._lineCount && l.obj.setSize(l.obj.width, b, !0));
this.itemRenderer(a % this._numItems, l.obj);
l.width = Math.ceil(l.obj.width);
l.height = Math.ceil(l.obj.height);
}
}
var S = g / d * _, x = S, P = 0, I = 0;
for (a = g; a < y; a++) if (!(a >= this._realNumItems)) {
(l = this._virtualItems[a]).updateFlag == this.itemInfoVer && l.obj.setPosition(x, P);
l.height > I && (I = l.height);
if (a % this._curLineItemCount == this._curLineItemCount - 1) {
x = S;
P += I + this._lineGap;
I = 0;
if (a == g + d - 1) {
x = S += _;
P = 0;
}
} else x += l.width + this._columnGap;
}
for (a = u; a < p; a++) if ((l = this._virtualItems[a]).updateFlag != this.itemInfoVer && l.obj) {
l.obj instanceof t.GButton && (l.selected = l.obj.selected);
this.removeChildToPool(l.obj);
l.obj = null;
}
}
};
n.prototype.handleArchOrder1 = function() {
if (this._childrenRenderOrder == t.ChildrenRenderOrder.Arch) {
for (var e = this._scrollPane.posY + this.viewHeight / 2, i = Number.POSITIVE_INFINITY, n = 0, o = 0, r = this.numChildren, s = 0; s < r; s++) {
var a = this.getChildAt(s);
if ((!this.foldInvisibleItems || a.visible) && (n = Math.abs(e - a.y - a.height / 2)) < i) {
i = n;
o = s;
}
}
this.apexIndex = o;
}
};
n.prototype.handleArchOrder2 = function() {
if (this._childrenRenderOrder == t.ChildrenRenderOrder.Arch) {
for (var e = this._scrollPane.posX + this.viewWidth / 2, i = Number.POSITIVE_INFINITY, n = 0, o = 0, r = this.numChildren, s = 0; s < r; s++) {
var a = this.getChildAt(s);
if ((!this.foldInvisibleItems || a.visible) && (n = Math.abs(e - a.x - a.width / 2)) < i) {
i = n;
o = s;
}
}
this.apexIndex = o;
}
};
n.prototype.handleAlign = function(e, i) {
var n = 0, o = 0;
i < this.viewHeight && (this._verticalAlign == t.VertAlignType.Middle ? o = Math.floor((this.viewHeight - i) / 2) : this._verticalAlign == t.VertAlignType.Bottom && (o = this.viewHeight - i));
e < this.viewWidth && (this._align == t.AlignType.Center ? n = Math.floor((this.viewWidth - e) / 2) : this._align == t.AlignType.Right && (n = this.viewWidth - e));
if (n != this._alignOffset.x || o != this._alignOffset.y) {
this._alignOffset.x = n;
this._alignOffset.y = o;
this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(this._pivotCorrectX + this._alignOffset.x, this._pivotCorrectY - this._alignOffset.y);
}
};
n.prototype.updateBounds = function() {
if (!this._virtual) {
var e, i, n = 0, o = 0, r = 0, s = 0, a = 0, l = 0, h = 0, c = 0, u = 0, p = this._children.length, d = this.viewWidth, f = this.viewHeight, _ = 0, g = 0, y = 0;
if (this._layout == t.ListLayoutType.SingleColumn) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != o && (o += this._lineGap);
i.y = o;
this._autoResizeItem && i.setSize(d, i.height, !0);
o += Math.ceil(i.height);
i.width > r && (r = i.width);
}
}
if ((l = o) <= f && this._autoResizeItem && this._scrollPane && this._scrollPane._displayInDemand && this._scrollPane.vtScrollBar) {
d += this._scrollPane.vtScrollBar.width;
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
i.setSize(d, i.height, !0);
i.width > r && (r = i.width);
}
}
}
a = Math.ceil(r);
} else if (this._layout == t.ListLayoutType.SingleRow) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
i.x = n;
this._autoResizeItem && i.setSize(i.width, f, !0);
n += Math.ceil(i.width);
i.height > s && (s = i.height);
}
}
if ((a = n) <= d && this._autoResizeItem && this._scrollPane && this._scrollPane._displayInDemand && this._scrollPane.hzScrollBar) {
f += this._scrollPane.hzScrollBar.height;
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
i.setSize(i.width, f, !0);
i.height > s && (s = i.height);
}
}
}
l = Math.ceil(s);
} else if (this._layout == t.ListLayoutType.FlowHorizontal) if (this._autoResizeItem && this._columnCount > 0) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
_ += i.sourceWidth;
if (++h == this._columnCount || e == p - 1) {
y = (d - _ - (h - 1) * this._columnGap) / _;
n = 0;
for (h = g; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.setPosition(n, o);
if (h < e) {
i.setSize(i.sourceWidth + Math.round(i.sourceWidth * y), i.height, !0);
n += Math.ceil(i.width) + this._columnGap;
} else i.setSize(d - n, i.height, !0);
i.height > s && (s = i.height);
}
}
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
g = e + 1;
_ = 0;
}
}
}
l = o + Math.ceil(s);
a = d;
} else {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
if (0 != this._columnCount && h >= this._columnCount || 0 == this._columnCount && n + i.width > d && 0 != s) {
n = 0;
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
}
i.setPosition(n, o);
(n += Math.ceil(i.width)) > r && (r = n);
i.height > s && (s = i.height);
h++;
}
}
l = o + Math.ceil(s);
a = Math.ceil(r);
} else if (this._layout == t.ListLayoutType.FlowVertical) if (this._autoResizeItem && this._lineCount > 0) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
_ += i.sourceHeight;
if (++h == this._lineCount || e == p - 1) {
y = (f - _ - (h - 1) * this._lineGap) / _;
o = 0;
for (h = g; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.setPosition(n, o);
if (h < e) {
i.setSize(i.width, i.sourceHeight + Math.round(i.sourceHeight * y), !0);
o += Math.ceil(i.height) + this._lineGap;
} else i.setSize(i.width, f - o, !0);
i.width > r && (r = i.width);
}
}
n += Math.ceil(r) + this._columnGap;
r = 0;
h = 0;
g = e + 1;
_ = 0;
}
}
}
a = n + Math.ceil(r);
l = f;
} else {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != o && (o += this._lineGap);
if (0 != this._lineCount && h >= this._lineCount || 0 == this._lineCount && o + i.height > f && 0 != r) {
o = 0;
n += Math.ceil(r) + this._columnGap;
r = 0;
h = 0;
}
i.setPosition(n, o);
(o += Math.ceil(i.height)) > s && (s = o);
i.width > r && (r = i.width);
h++;
}
}
a = n + Math.ceil(r);
l = Math.ceil(s);
} else {
var m;
this._autoResizeItem && this._lineCount > 0 && (m = Math.floor((f - (this._lineCount - 1) * this._lineGap) / this._lineCount));
if (this._autoResizeItem && this._columnCount > 0) for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
if (0 == h && (0 != this._lineCount && u >= this._lineCount || 0 == this._lineCount && o + (this._lineCount > 0 ? m : i.height) > f)) {
c++;
o = 0;
u = 0;
}
_ += i.sourceWidth;
if (++h == this._columnCount || e == p - 1) {
y = (d - _ - (h - 1) * this._columnGap) / _;
n = 0;
for (h = g; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.setPosition(c * d + n, o);
if (h < e) {
i.setSize(i.sourceWidth + Math.round(i.sourceWidth * y), this._lineCount > 0 ? m : i.height, !0);
n += Math.ceil(i.width) + this._columnGap;
} else i.setSize(d - n, this._lineCount > 0 ? m : i.height, !0);
i.height > s && (s = i.height);
}
}
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
g = e + 1;
_ = 0;
u++;
}
}
} else for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
this._autoResizeItem && this._lineCount > 0 && i.setSize(i.width, m, !0);
if (0 != this._columnCount && h >= this._columnCount || 0 == this._columnCount && n + i.width > d && 0 != s) {
n = 0;
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
u++;
if (0 != this._lineCount && u >= this._lineCount || 0 == this._lineCount && o + i.height > f && 0 != r) {
c++;
o = 0;
u = 0;
}
}
i.setPosition(c * d + n, o);
(n += Math.ceil(i.width)) > r && (r = n);
i.height > s && (s = i.height);
h++;
}
}
l = c > 0 ? f : o + Math.ceil(s);
a = (c + 1) * d;
}
this.handleAlign(a, l);
this.setBounds(0, 0, a, l);
}
};
n.prototype.setup_beforeAdd = function(i, n) {
e.prototype.setup_beforeAdd.call(this, i, n);
i.seek(n, 5);
this._layout = i.readByte();
this._selectionMode = i.readByte();
this._align = i.readByte();
this._verticalAlign = i.readByte();
this._lineGap = i.readShort();
this._columnGap = i.readShort();
this._lineCount = i.readShort();
this._columnCount = i.readShort();
this._autoResizeItem = i.readBool();
this._childrenRenderOrder = i.readByte();
this._apexIndex = i.readShort();
if (i.readBool()) {
this._margin.top = i.readInt();
this._margin.bottom = i.readInt();
this._margin.left = i.readInt();
this._margin.right = i.readInt();
}
var o = i.readByte();
if (o == t.OverflowType.Scroll) {
var r = i.position;
i.seek(n, 7);
this.setupScroll(i);
i.position = r;
} else this.setupOverflow(o);
i.readBool() && i.skip(8);
if (i.version >= 2) {
this.scrollItemToViewOnClick = i.readBool();
this.foldInvisibleItems = i.readBool();
}
i.seek(n, 8);
this._defaultItem = i.readS();
this.readItems(i);
};
n.prototype.readItems = function(t) {
var e, i, n, o;
e = t.readShort();
for (i = 0; i < e; i++) {
n = t.readShort();
n += t.position;
if (null != (o = t.readS()) || (o = this._defaultItem)) {
var r = this.getFromPool(o);
if (r) {
this.addChild(r);
this.setupItem(t, r);
}
t.position = n;
} else t.position = n;
}
};
n.prototype.setupItem = function(e, i) {
var n, o, r;
null != (n = e.readS()) && (i.text = n);
null != (n = e.readS()) && i instanceof t.GButton && (i.selectedTitle = n);
null != (n = e.readS()) && (i.icon = n);
null != (n = e.readS()) && i instanceof t.GButton && (i.selectedIcon = n);
null != (n = e.readS()) && (i.name = n);
if (i instanceof t.GComponent) {
o = e.readShort();
for (r = 0; r < o; r++) {
var s = i.getController(e.readS());
n = e.readS();
s && (s.selectedPageId = n);
}
if (e.version >= 2) {
o = e.readShort();
for (r = 0; r < o; r++) {
var a = e.readS(), l = e.readShort(), h = e.readS(), c = i.getChildByPath(a);
c && c.setProp(l, h);
}
}
}
};
n.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
t.seek(i, 6);
var n = t.readShort();
-1 != n && (this._selectionController = this.parent.getControllerAt(n));
};
return n;
}(t.GComponent);
t.GList = e;
var i = 0;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {
this._count = 0;
this._pool = {};
}
e.prototype.clear = function() {
for (var t in this._pool) for (var e = this._pool[t], i = e.length, n = 0; n < i; n++) e[n].dispose();
this._pool = {};
this._count = 0;
};
Object.defineProperty(e.prototype, "count", {
get: function() {
return this._count;
},
enumerable: !1,
configurable: !0
});
e.prototype.getObject = function(e) {
if (null == (e = t.UIPackage.normalizeURL(e))) return null;
var i = this._pool[e];
if (i && i.length) {
this._count--;
return i.shift();
}
return t.UIPackage.createObjectFromURL(e);
};
e.prototype.returnObject = function(t) {
var e = t.resourceURL;
if (e) {
var i = this._pool[e];
if (null == i) {
i = new Array();
this._pool[e] = i;
}
this._count++;
i.push(t);
}
};
return e;
}();
t.GObjectPool = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._frame = 0;
i.VideoCallBack = function(e, n) {
switch (e) {
case 0:
i.node.emit(t.Event.VIDEOREADY);
break;

case 1:
i.node.emit(t.Event.VIDEOPLAY);
break;

case 2:
i.node.emit(t.Event.VIDEOENDED);
break;

case 4:
if (n) {
i.sourceWidth = n.width;
i.sourceHeight = n.height;
i._autoSize && i.setSize(i.sourceWidth, i.sourceHeight);
i.updateLayout();
}
}
};
i._node.name = "GLoader";
i._playing = !0;
i._url = "";
i._fill = t.LoaderFillType.None;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
i._showErrorSign = !0;
i._color = new cc.Color(255, 255, 255, 255);
i._container = new cc.Node("Image");
i._container.setAnchorPoint(0, 1);
i._node.addChild(i._container);
i._content = i._container.addComponent(t.MovieClip);
i._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
i._content.trim = !1;
i._content.setPlaySettings();
return i;
}
i.prototype.dispose = function() {
null == this._contentItem && this._content.spriteFrame && this.freeExternal(this._content.spriteFrame);
this._content2 && this._content2.dispose();
this._container = null;
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "url", {
get: function() {
return this._url;
},
set: function(t) {
if (this._url != t) {
this._url = t;
this.loadContent();
this.updateGear(7);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._url;
},
set: function(t) {
this.url = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fill", {
get: function() {
return this._fill;
},
set: function(t) {
if (this._fill != t) {
this._fill = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shrinkOnly", {
get: function() {
return this._shrinkOnly;
},
set: function(t) {
if (this._shrinkOnly != t) {
this._shrinkOnly = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSize", {
get: function() {
return this._autoSize;
},
set: function(t) {
if (this._autoSize != t) {
this._autoSize = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "playing", {
get: function() {
return this._playing;
},
set: function(e) {
var i, n;
if (this._playing != e) {
this._playing = e;
this._content instanceof t.MovieClip ? this._content.playing = e : this._videoDecoder && (e ? null === (i = this._videoDecoder) || void 0 === i || i.play() : null === (n = this._videoDecoder) || void 0 === n || n.stop());
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._frame;
},
set: function(e) {
if (this._frame != e) {
this._frame = e;
this._content instanceof t.MovieClip && (this._content.frame = e);
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._color;
},
set: function(t) {
this._color.set(t);
this.updateGear(4);
this._container.color = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillMethod", {
get: function() {
return this._content.fillMethod;
},
set: function(t) {
this._content.fillMethod = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillOrigin", {
get: function() {
return this._content.fillOrigin;
},
set: function(t) {
this._content.fillOrigin = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillClockwise", {
get: function() {
return this._content.fillClockwise;
},
set: function(t) {
this._content.fillClockwise = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillAmount", {
get: function() {
return this._content.fillAmount;
},
set: function(t) {
this._content.fillAmount = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "showErrorSign", {
get: function() {
return this._showErrorSign;
},
set: function(t) {
this._showErrorSign = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "component", {
get: function() {
return this._content2;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "texture", {
get: function() {
return this._content.spriteFrame;
},
set: function(t) {
this.url = null;
this._content.spriteFrame = t;
this._content.type = cc.Sprite.Type.SIMPLE;
if (null != t) {
this.sourceWidth = t.getRect().width;
this.sourceHeight = t.getRect().height;
} else this.sourceWidth = this.sourceHeight = 0;
this.updateLayout();
},
enumerable: !1,
configurable: !0
});
i.prototype.loadContent = function() {
this.clearContent();
this._url && (t.ToolSet.startsWith(this._url, "ui://") ? this.loadFromPackage(this._url) : t.ToolSet.startsWith(this._url, "video") ? this.loadVideo(this._url) : this.loadExternal());
};
i.prototype.loadFromPackage = function(e) {
var i = this;
this._contentItem = t.UIPackage.getItemByURL(e);
if (this._contentItem) {
this._contentItem = this._contentItem.getBranch();
this.sourceWidth = this._contentItem.width;
this.sourceHeight = this._contentItem.height;
this._contentItem = this._contentItem.getHighResolution();
this._autoSize && this.setSize(this.sourceWidth, this.sourceHeight);
if (this._contentItem.type == t.PackageItemType.Image) {
0 == this._content.fillMethod && (this._contentItem.scale9Grid ? this._content.type = cc.Sprite.Type.SLICED : this._contentItem.scaleByTile ? this._content.type = cc.Sprite.Type.TILED : this._content.type = cc.Sprite.Type.SIMPLE);
if (this._contentItem.decoded) {
this._content.spriteFrame = this._contentItem.asset;
this.updateLayout();
} else {
var n = this._contentItem;
if (!this._contentItem.tryLoad(function(t, e) {
if (t) i.setErrorState(); else if (i._content && i._contentItem == n) {
i._content.spriteFrame = e.asset;
i.updateLayout();
}
})) {
var o = this._contentItem.owner.sprites[this._contentItem.id];
if (o) {
var r = new cc.SpriteFrame(t.UIConfig.defAtlasTexture, cc.rect(0, 0, 2, 2), !1, new cc.Vec2(0, 0), o.originalSize);
this._content.spriteFrame = r;
}
}
}
} else if (this._contentItem.type == t.PackageItemType.MovieClip) {
this._contentItem.load();
this._content.interval = this._contentItem.interval;
this._content.swing = this._contentItem.swing;
this._content.repeatDelay = this._contentItem.repeatDelay;
this._content.frames = this._contentItem.frames;
this.updateLayout();
} else if (this._contentItem.type == t.PackageItemType.Component) {
this._contentItem.load();
var s = t.UIPackage.createObjectFromURL(e);
if (s) if (s instanceof t.GComponent) {
this._content2 = s;
this._container.addChild(this._content2.node);
this.updateLayout();
} else {
s.dispose();
this.setErrorState();
} else this.setErrorState();
} else {
this._contentItem.load();
this.setErrorState();
}
} else this.setErrorState();
};
i.prototype.loadExternal = function() {
var e = this, i = this.url, n = function(t, o) {
if (e._url == i && cc.isValid(e._node)) {
t && console.warn(t);
o instanceof cc.SpriteFrame ? e.onExternalLoadSuccess(o) : o instanceof cc.Texture2D ? e.onExternalLoadSuccess(new cc.SpriteFrame(o)) : cc.assetManager.loadRemote(e._url, {
ext: ".jpg"
}, n);
}
};
t.ToolSet.startsWith(this._url, "http://") || t.ToolSet.startsWith(this._url, "https://") || t.ToolSet.startsWith(this._url, "/") ? cc.assetManager.loadRemote(this._url, {
ext: ".png"
}, n) : cc.resources.load(this._url, cc.Asset, n);
};
Object.defineProperty(i.prototype, "volume", {
get: function() {
return this._volume;
},
set: function(t) {
if (this._volume != t) {
this._volume = t;
this._videoDecoder && (this._videoDecoder.volume = t);
}
},
enumerable: !1,
configurable: !0
});
i.prototype.loadVideo = function(e) {
console.log("loadVideo:" + e);
e = e.slice(6, e.length);
if (null == this._videoDecoder) {
this._videoDecoder = this._container.getComponent("VideoDecoder");
null == this._videoDecoder && (this._videoDecoder = this._container.addComponent("VideoDecoder"));
this._videoDecoder.targetSprite = this._content;
this._videoDecoder.loop = this.loop;
this._videoDecoder.playOnAwake = this._playing;
this._videoDecoder.eventCallBack = this.VideoCallBack;
}
if (this._videoDecoder) if (t.ToolSet.startsWith(e, "http://") || t.ToolSet.startsWith(e, "https://")) this._videoDecoder.videoUrl = e; else {
var i = e.indexOf("/"), n = t.moduleResolver(e.slice(0, i)), o = e.slice(i + 1, e.length);
t.ToolSet.endsWith(o, ".mp4") && (o = e.slice(0, e.length - 4));
var r = this;
cc.assetManager.loadBundle(n, function(t, e) {
null == e || e.load(o, function(t, e) {
e && r._videoDecoder && (r._videoDecoder.videoClip = e);
});
});
}
};
i.prototype.seek = function(t) {
var e;
null === (e = this._videoDecoder) || void 0 === e || e.seek(t);
};
i.prototype.setVideoType = function(t) {
if (this._videoDecoder) switch (t) {
case i.VideoType.normal:
this._videoDecoder.videoType = 0;
break;

case i.VideoType.hollow:
this._videoDecoder.videoType = 1;
break;

case i.VideoType.transparent:
this._videoDecoder.videoType = 2;
}
};
i.prototype.setHollowColor = function(t, e, i, n) {
this._videoDecoder && (this._videoDecoder.hollowColor = cc.color(t, e, i, n));
};
i.prototype.setAlphaSplit = function(t) {
this._videoDecoder && (this._videoDecoder.split = t);
};
i.prototype.freeExternal = function() {};
i.prototype.onExternalLoadSuccess = function(t) {
this._content.spriteFrame = t;
this._content.type = cc.Sprite.Type.SIMPLE;
this.sourceWidth = t.getRect().width;
this.sourceHeight = t.getRect().height;
this._autoSize && this.setSize(this.sourceWidth, this.sourceHeight);
this.updateLayout();
};
i.prototype.onExternalLoadFailed = function() {
this.setErrorState();
};
i.prototype.setErrorState = function() {
if (this._showErrorSign) {
null == this._errorSign && null != t.UIConfig.loaderErrorSign && (this._errorSign = i._errorSignPool.getObject(t.UIConfig.loaderErrorSign));
if (this._errorSign) {
this._errorSign.setSize(this.width, this.height);
this._container.addChild(this._errorSign.node);
}
}
};
i.prototype.clearErrorState = function() {
if (this._errorSign) {
this._container.removeChild(this._errorSign.node);
i._errorSignPool.returnObject(this._errorSign);
this._errorSign = null;
}
};
i.prototype.updateLayout = function() {
if (null != this._content2 || null != this._content) {
var e = this.sourceWidth, i = this.sourceHeight, n = -this.pivotX * this._width, o = this.pivotY * this._height;
if (this._autoSize) {
this._updatingLayout = !0;
0 == e && (e = 50);
0 == i && (i = 30);
this.setSize(e, i);
this._updatingLayout = !1;
this._container.setContentSize(this._width, this._height);
this._container.setPosition(n, o);
if (this._content2) {
this._content2.setPosition(n + this._width * this.pivotX, o - this._height * this.pivotY);
this._content2.setScale(1, 1);
}
if (e == this._width && i == this._height) return;
}
var r, s, a = 1, l = 1;
if (this._fill != t.LoaderFillType.None) {
a = this.width / this.sourceWidth;
l = this.height / this.sourceHeight;
if (1 != a || 1 != l) {
this._fill == t.LoaderFillType.ScaleMatchHeight ? a = l : this._fill == t.LoaderFillType.ScaleMatchWidth ? l = a : this._fill == t.LoaderFillType.Scale ? a > l ? a = l : l = a : this._fill == t.LoaderFillType.ScaleNoBorder && (a > l ? l = a : a = l);
if (this._shrinkOnly) {
a > 1 && (a = 1);
l > 1 && (l = 1);
}
e = this.sourceWidth * a;
i = this.sourceHeight * l;
}
}
this._container.setContentSize(e, i);
if (this._content2) {
this._content2.setPosition(n + this._width * this.pivotX, o - this._height * this.pivotY);
this._content2.setScale(a, l);
}
r = this._align == t.AlignType.Left ? 0 : this._align == t.AlignType.Center ? Math.floor((this._width - e) / 2) : this._width - e;
s = -(s = this._verticalAlign == t.VertAlignType.Top ? 0 : this._verticalAlign == t.VertAlignType.Middle ? Math.floor((this._height - i) / 2) : this._height - i);
this._container.setPosition(n + r, o + s);
} else if (this._autoSize) {
this._updatingLayout = !0;
this.setSize(50, 30);
this._updatingLayout = !1;
}
};
i.prototype.clearContent = function() {
this.clearErrorState();
if (!this._contentItem) {
var t = this._content.spriteFrame;
t && this.freeExternal(t);
}
if (this._content2) {
this._container.removeChild(this._content2.node);
this._content2.dispose();
this._content2 = null;
}
this._content.frames = null;
this._content.spriteFrame = null;
this._contentItem = null;
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleGrayedChanged = function() {
this._content.grayed = this._grayed;
};
i.prototype._hitTest = function(t, e) {
if (this._content2) {
var i = this._content2.hitTest(e);
if (i) return i;
}
return t.x >= 0 && t.y >= 0 && t.x < this._width && t.y < this._height ? this : null;
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.Playing:
return this.playing;

case t.ObjectPropID.Frame:
return this.frame;

case t.ObjectPropID.TimeScale:
return this._content.timeScale;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.Playing:
this.playing = n;
break;

case t.ObjectPropID.Frame:
this.frame = n;
break;

case t.ObjectPropID.TimeScale:
this._content.timeScale = n;
break;

case t.ObjectPropID.DeltaTime:
this._content.advance(n);
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.setup_beforeAdd = function(t, n) {
e.prototype.setup_beforeAdd.call(this, t, n);
t.seek(n, 5);
this._url = t.readS();
this._align = t.readByte();
this._verticalAlign = t.readByte();
this._fill = t.readByte();
this._shrinkOnly = t.readBool();
this._autoSize = t.readBool();
this._showErrorSign = t.readBool();
this._playing = t.readBool();
this._frame = t.readInt();
t.readBool() && (this.color = t.readColor());
this._content.fillMethod = t.readByte();
if (0 != this._content.fillMethod) {
this._content.fillOrigin = t.readByte();
this._content.fillClockwise = t.readBool();
this._content.fillAmount = t.readFloat();
}
this._url && this.loadContent();
if ("string" == typeof this.data && "" != this.data) {
this.data.indexOf(i.VideoType.hollow) >= 0 ? this.setVideoType(i.VideoType.hollow) : this.data.indexOf(i.VideoType.transparent) >= 0 && this.setVideoType(i.VideoType.transparent);
if (this.data.indexOf("loop") >= 0) {
this.loop = !0;
this._videoDecoder && (this._videoDecoder.loop = this.loop);
}
}
};
i.VideoType = {
normal: "normal",
hollow: "hollow",
transparent: "transparent"
};
i._errorSignPool = new t.GObjectPool();
return i;
}(t.GObject);
t.GLoader = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._frame = 0;
i._node.name = "GLoader3D";
i._playing = !0;
i._url = "";
i._fill = t.LoaderFillType.None;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
i._color = new cc.Color(255, 255, 255, 255);
i._container = new cc.Node("Wrapper");
i._container.setAnchorPoint(0, 1);
i._node.addChild(i._container);
return i;
}
i.prototype.dispose = function() {
this._container = null;
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "url", {
get: function() {
return this._url;
},
set: function(t) {
if (this._url != t) {
this._url = t;
this.loadContent();
this.updateGear(7);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._url;
},
set: function(t) {
this.url = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fill", {
get: function() {
return this._fill;
},
set: function(t) {
if (this._fill != t) {
this._fill = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shrinkOnly", {
get: function() {
return this._shrinkOnly;
},
set: function(t) {
if (this._shrinkOnly != t) {
this._shrinkOnly = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSize", {
get: function() {
return this._autoSize;
},
set: function(t) {
if (this._autoSize != t) {
this._autoSize = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "playing", {
get: function() {
return this._playing;
},
set: function(t) {
if (this._playing != t) {
this._playing = t;
this.updateGear(5);
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._frame;
},
set: function(t) {
if (this._frame != t) {
this._frame = t;
this.updateGear(5);
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "animationName", {
get: function() {
return this._animationName;
},
set: function(t) {
if (this._animationName != t) {
this._animationName = t;
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "skinName", {
get: function() {
return this._skinName;
},
set: function(t) {
if (this._skinName != t) {
this._skinName = t;
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "loop", {
get: function() {
return this._loop;
},
set: function(t) {
if (this._loop != t) {
this._loop = t;
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._color;
},
set: function(t) {
this._color.set(t);
this.updateGear(4);
this._content && (this._content.node.color = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "content", {
get: function() {
return this._content;
},
enumerable: !1,
configurable: !0
});
i.prototype.loadContent = function() {
this.clearContent();
this._url && (t.ToolSet.startsWith(this._url, "ui://") ? this.loadFromPackage(this._url) : this.loadExternal());
};
i.prototype.loadFromPackage = function(e) {
this._contentItem = t.UIPackage.getItemByURL(e);
if (this._contentItem) {
this._contentItem = this._contentItem.getBranch();
this.sourceWidth = this._contentItem.width;
this.sourceHeight = this._contentItem.height;
this._contentItem = this._contentItem.getHighResolution();
this._autoSize && this.setSize(this.sourceWidth, this.sourceHeight);
this._contentItem.type != t.PackageItemType.Spine && this._contentItem.type != t.PackageItemType.DragonBones || this._contentItem.owner.getItemAssetAsync(this._contentItem, this.onLoaded.bind(this));
}
};
i.prototype.onLoaded = function(e, i) {
if (this._contentItem == i) {
e && console.warn(e);
if (this._contentItem.asset && this._container.isValid) {
this._contentItem.type == t.PackageItemType.Spine ? this.setSpine(this._contentItem.asset, this._contentItem.skeletonAnchor, !1) : this._contentItem.type == t.PackageItemType.DragonBones && this.setDragonBones(this._contentItem.asset, this._contentItem.atlasAsset, this._contentItem.skeletonAnchor);
this._node.emit(t.Event.LOADED, this);
}
}
};
i.prototype.setSpine = function(t, e, i) {
this.freeSpine();
var n = new cc.Node();
n.color = this._color;
this._container.addChild(n);
n.setPosition(e.x, -e.y);
this._content = n.addComponent(sp.Skeleton);
if (null != this.data && "string" == typeof this.data) {
var o = this.data.toLowerCase();
o.indexOf("private_cache") >= 0 && this._content.setAnimationCacheMode(sp.Skeleton.AnimationCacheMode.PRIVATE_CACHE);
o.indexOf("shared_cache") >= 0 && this._content.setAnimationCacheMode(sp.Skeleton.AnimationCacheMode.SHARED_CACHE);
}
this._content.premultipliedAlpha = i;
this._content.skeletonData = t;
this.onChangeSpine();
this.updateLayout();
};
i.prototype.freeSpine = function() {
this._content && this._content.destroy();
};
i.prototype.setDragonBones = function(t, e, i, n) {
this.url = null;
this.freeDragonBones();
var o = new cc.Node();
o.color = this._color;
this._container.addChild(o);
o.setPosition(i.x, -i.y);
this._content = o.addComponent(dragonBones.ArmatureDisplay);
this._content.premultipliedAlpha = n;
this._content.dragonAsset = t;
this._content.dragonAtlasAsset = e;
var r = t.init(dragonBones.CCFactory.getInstance(), e._uuid), s = this._content._factory.getDragonBonesData(r);
this._content.armatureName = s.armatureNames[0];
this.onChangeDragonBones();
this.updateLayout();
};
i.prototype.freeDragonBones = function() {
this._content && this._content.destroy();
};
i.prototype.onChange = function() {
if (null != this._contentItem) {
this._contentItem.type == t.PackageItemType.Spine && this.onChangeSpine();
this._contentItem.type == t.PackageItemType.DragonBones && this.onChangeDragonBones();
}
};
i.prototype.onChangeSpine = function() {
if (this._content instanceof sp.Skeleton) {
if (this._animationName) {
var e = this._content.getCurrent(0);
if (!e || e.animation.name != this._animationName || e.isComplete() && !e.loop) {
this._content.defaultAnimation = this._animationName;
e = this._content.setAnimation(0, this._animationName, this._loop);
}
if (this._playing) this._content.paused = !1; else {
this._content.paused = !0;
e.trackTime = t.ToolSet.lerp(0, e.animationEnd - e.animationStart, this._frame / 100);
}
} else this._content.clearTrack(0);
var i = this._skinName || this._content.skeletonData.getRuntimeData().skins[0].name;
this._content._skeleton.skin != i && this._content.setSkin(i);
}
};
i.prototype.onChangeDragonBones = function() {
this._content instanceof dragonBones.ArmatureDisplay && (this._animationName ? this._playing ? this._content.playAnimation(this._animationName, this._loop ? 0 : 1) : this._content.armature().animation.gotoAndStopByFrame(this._animationName, this._frame) : this._content.armature().animation.reset());
};
i.prototype.loadExternal = function() {
t.ToolSet.startsWith(this._url, "http://") || t.ToolSet.startsWith(this._url, "https://") || t.ToolSet.startsWith(this._url, "/") ? cc.assetManager.loadRemote(this._url, sp.SkeletonData, this.onLoaded2.bind(this)) : cc.resources.load(this._url, sp.SkeletonData, this.onLoaded2.bind(this));
};
i.prototype.onLoaded2 = function(t) {
this._url && cc.isValid(this._node) && t && console.warn(t);
};
i.prototype.updateLayout = function() {
var e = this.sourceWidth, i = this.sourceHeight, n = -this.pivotX * this._width, o = this.pivotY * this._height;
if (this._autoSize) {
this._updatingLayout = !0;
0 == e && (e = 50);
0 == i && (i = 30);
this.setSize(e, i);
this._updatingLayout = !1;
if (e == this._width && i == this._height) {
this._container.setScale(1, 1);
this._container.setPosition(n, o);
return;
}
}
var r, s, a = 1, l = 1;
if (this._fill != t.LoaderFillType.None) {
a = this.width / this.sourceWidth;
l = this.height / this.sourceHeight;
if (1 != a || 1 != l) {
this._fill == t.LoaderFillType.ScaleMatchHeight ? a = l : this._fill == t.LoaderFillType.ScaleMatchWidth ? l = a : this._fill == t.LoaderFillType.Scale ? a > l ? a = l : l = a : this._fill == t.LoaderFillType.ScaleNoBorder && (a > l ? l = a : a = l);
if (this._shrinkOnly) {
a > 1 && (a = 1);
l > 1 && (l = 1);
}
e = this.sourceWidth * a;
i = this.sourceHeight * l;
}
}
this._container.setScale(a, l);
r = this._align == t.AlignType.Left ? 0 : this._align == t.AlignType.Center ? Math.floor((this._width - e) / 2) : this._width - e;
s = -(s = this._verticalAlign == t.VertAlignType.Top ? 0 : this._verticalAlign == t.VertAlignType.Middle ? Math.floor((this._height - i) / 2) : this._height - i);
this._container.setPosition(n + r, o + s);
};
i.prototype.clearContent = function() {
this._contentItem = null;
if (this._content) {
this._content.node.destroy();
this._content = null;
}
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleGrayedChanged = function() {};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.Playing:
return this.playing;

case t.ObjectPropID.Frame:
return this.frame;

case t.ObjectPropID.TimeScale:
return 1;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.Playing:
this.playing = n;
break;

case t.ObjectPropID.Frame:
this.frame = n;
break;

case t.ObjectPropID.TimeScale:
case t.ObjectPropID.DeltaTime:
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._url = t.readS();
this._align = t.readByte();
this._verticalAlign = t.readByte();
this._fill = t.readByte();
this._shrinkOnly = t.readBool();
this._autoSize = t.readBool();
this._animationName = t.readS();
this._skinName = t.readS();
this._playing = t.readBool();
this._frame = t.readInt();
this._loop = t.readBool();
t.readBool() && (this.color = t.readColor());
this._url && this.loadContent();
};
return i;
}(t.GObject);
t.GLoader3D = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GMovieClip";
i._touchDisabled = !0;
i._content = i._node.addComponent(t.MovieClip);
i._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
i._content.trim = !1;
i._content.setPlaySettings();
return i;
}
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._node.color;
},
set: function(t) {
this._node.color = t;
this.updateGear(4);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "playing", {
get: function() {
return this._content.playing;
},
set: function(t) {
if (this._content.playing != t) {
this._content.playing = t;
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._content.frame;
},
set: function(t) {
if (this._content.frame != t) {
this._content.frame = t;
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "timeScale", {
get: function() {
return this._content.timeScale;
},
set: function(t) {
this._content.timeScale = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.rewind = function() {
this._content.rewind();
};
i.prototype.syncStatus = function(t) {
this._content.syncStatus(t._content);
};
i.prototype.advance = function(t) {
this._content.advance(t);
};
i.prototype.setPlaySettings = function(t, e, i, n, o) {
this._content.setPlaySettings(t, e, i, n, o);
};
i.prototype.handleGrayedChanged = function() {
this._content.grayed = this._grayed;
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.Playing:
return this.playing;

case t.ObjectPropID.Frame:
return this.frame;

case t.ObjectPropID.TimeScale:
return this.timeScale;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.Playing:
this.playing = n;
break;

case t.ObjectPropID.Frame:
this.frame = n;
break;

case t.ObjectPropID.TimeScale:
this.timeScale = n;
break;

case t.ObjectPropID.DeltaTime:
this.advance(n);
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructFromResource = function() {
var t = this.packageItem.getBranch();
this.sourceWidth = t.width;
this.sourceHeight = t.height;
this.initWidth = this.sourceWidth;
this.initHeight = this.sourceHeight;
this.setSize(this.sourceWidth, this.sourceHeight);
(t = t.getHighResolution()).load();
this._content.interval = t.interval;
this._content.swing = t.swing;
this._content.repeatDelay = t.repeatDelay;
this._content.frames = t.frames;
this._content.smoothing = t.smoothing;
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
t.readBool() && (this.color = t.readColor());
t.readByte();
this._content.frame = t.readInt();
this._content.playing = t.readBool();
};
return i;
}(t.GObject);
t.GMovieClip = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._min = 0;
i._max = 0;
i._value = 0;
i._barMaxWidth = 0;
i._barMaxHeight = 0;
i._barMaxWidthDelta = 0;
i._barMaxHeightDelta = 0;
i._barStartX = 0;
i._barStartY = 0;
i._node.name = "GProgressBar";
i._titleType = t.ProgressTitleType.Percent;
i._value = 50;
i._max = 100;
return i;
}
Object.defineProperty(i.prototype, "titleType", {
get: function() {
return this._titleType;
},
set: function(t) {
if (this._titleType != t) {
this._titleType = t;
this.update(this._value);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "min", {
get: function() {
return this._min;
},
set: function(t) {
if (this._min != t) {
this._min = t;
this.update(this._value);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "max", {
get: function() {
return this._max;
},
set: function(t) {
if (this._max != t) {
this._max = t;
this.update(this._value);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "value", {
get: function() {
return this._value;
},
set: function(e) {
if (this._value != e) {
t.GTween.kill(this, !1, this.update);
this._value = e;
this.update(e);
}
},
enumerable: !1,
configurable: !0
});
i.prototype.tweenValue = function(e, i) {
var n, o = t.GTween.getTween(this, this.update);
if (o) {
n = o.value.x;
o.kill();
} else n = this._value;
this._value = e;
return t.GTween.to(n, this._value, i).setTarget(this, this.update).setEase(t.EaseType.Linear);
};
i.prototype.update = function(e) {
var i = t.ToolSet.clamp01((e - this._min) / (this._max - this._min));
if (this._titleObject) switch (this._titleType) {
case t.ProgressTitleType.Percent:
this._titleObject.text = Math.floor(100 * i) + "%";
break;

case t.ProgressTitleType.ValueAndMax:
this._titleObject.text = Math.floor(e) + "/" + Math.floor(this._max);
break;

case t.ProgressTitleType.Value:
this._titleObject.text = "" + Math.floor(e);
break;

case t.ProgressTitleType.Max:
this._titleObject.text = "" + Math.floor(this._max);
}
var n = this.width - this._barMaxWidthDelta, o = this.height - this._barMaxHeightDelta;
if (this._reverse) {
if (this._barObjectH && !this.setFillAmount(this._barObjectH, 1 - i)) {
this._barObjectH.width = Math.round(n * i);
this._barObjectH.x = this._barStartX + (n - this._barObjectH.width);
}
if (this._barObjectV && !this.setFillAmount(this._barObjectV, 1 - i)) {
this._barObjectV.height = Math.round(o * i);
this._barObjectV.y = this._barStartY + (o - this._barObjectV.height);
}
} else {
this._barObjectH && (this.setFillAmount(this._barObjectH, i) || (this._barObjectH.width = Math.round(n * i)));
this._barObjectV && (this.setFillAmount(this._barObjectV, i) || (this._barObjectV.height = Math.round(o * i)));
}
this._aniObject && this._aniObject.setProp(t.ObjectPropID.Frame, Math.floor(100 * i));
};
i.prototype.setFillAmount = function(e, i) {
if ((e instanceof t.GImage || e instanceof t.GLoader) && e.fillMethod != t.FillMethod.None) {
e.fillAmount = i;
return !0;
}
return !1;
};
i.prototype.constructExtension = function(t) {
t.seek(0, 6);
this._titleType = t.readByte();
this._reverse = t.readBool();
this._titleObject = this.getChild("title");
this._barObjectH = this.getChild("bar");
this._barObjectV = this.getChild("bar_v");
this._aniObject = this.getChild("ani");
if (this._barObjectH) {
this._barMaxWidth = this._barObjectH.width;
this._barMaxWidthDelta = this.width - this._barMaxWidth;
this._barStartX = this._barObjectH.x;
}
if (this._barObjectV) {
this._barMaxHeight = this._barObjectV.height;
this._barMaxHeightDelta = this.height - this._barMaxHeight;
this._barStartY = this._barObjectV.y;
}
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._barObjectH && (this._barMaxWidth = this.width - this._barMaxWidthDelta);
this._barObjectV && (this._barMaxHeight = this.height - this._barMaxHeightDelta);
this._underConstruct || this.update(this._value);
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6)) if (t.readByte() == this.packageItem.objectType) {
this._value = t.readInt();
this._max = t.readInt();
t.version >= 2 && (this._min = t.readInt());
this.update(this._value);
} else this.update(this._value); else this.update(this._value);
};
return i;
}(t.GComponent);
t.GProgressBar = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._fontSize = 0;
t._leading = 0;
t._node.name = "GTextField";
t._touchDisabled = !0;
t._text = "";
t._color = new cc.Color(255, 255, 255, 255);
t.createRenderer();
t.fontSize = 12;
t.leading = 3;
t.singleLine = !1;
t._sizeDirty = !1;
t._node.on(cc.Node.EventType.SIZE_CHANGED, t.onLabelSizeChanged, t);
return t;
}
i.prototype.dispose = function() {
this._realFont = null;
e.prototype.dispose.call(this);
};
i.prototype.createRenderer = function() {
this._label = this._node.addComponent(cc.Label);
this.autoSize = t.AutoSizeType.Both;
};
Object.defineProperty(i.prototype, "text", {
get: function() {
return this._text;
},
set: function(t) {
this._text = t;
null == this._text && (this._text = "");
this.updateGear(6);
this.markSizeChanged();
this.updateText();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "font", {
get: function() {
return this._font;
},
set: function(e) {
if (this._font != e || !e) {
this._font = e;
this.markSizeChanged();
var i = e || t.UIConfig.defaultFont;
if (t.ToolSet.startsWith(i, "ui://")) {
var n = t.UIPackage.getItemByURL(i);
if (n) {
var o = n.owner.getItemAsset(n);
if (o.spriteFrame) i = o; else {
var r = i;
i = t.UIConfig.defaultFont;
n.loading = n.loading || [];
var s = this;
n.loading.push(function() {
if (s._realFont && s._font == r) {
s._realFont = o;
s.updateFont();
s.updateFontColor();
s.updateFontSize();
}
});
}
} else i = t.UIConfig.defaultFont;
}
this._realFont = i;
this.updateFont();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fontSize", {
get: function() {
return this._fontSize;
},
set: function(t) {
if (!(t < 0) && this._fontSize != t) {
this._fontSize = t;
this.markSizeChanged();
this.updateFontSize();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._color;
},
set: function(t) {
this._color.set(t);
this.updateGear(4);
this.updateFontColor();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._label ? this._label.horizontalAlign : 0;
},
set: function(t) {
this._label && (this._label.horizontalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._label ? this._label.verticalAlign : 0;
},
set: function(t) {
this._label && (this._label.verticalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "leading", {
get: function() {
return this._leading;
},
set: function(t) {
if (this._leading != t) {
this._leading = t;
this.markSizeChanged();
this.updateFontSize();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "letterSpacing", {
get: function() {
return this._label ? this._label.spacingX : 0;
},
set: function(t) {
if (this._label && this._label.spacingX != t) {
this.markSizeChanged();
this._label.spacingX = t;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "underline", {
get: function() {
return !!this._label && this._label.enableUnderline;
},
set: function(t) {
this._label && (this._label.enableUnderline = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "bold", {
get: function() {
return !!this._label && this._label.enableBold;
},
set: function(t) {
this._label && (this._label.enableBold = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "italic", {
get: function() {
return !!this._label && this._label.enableItalic;
},
set: function(t) {
this._label && (this._label.enableItalic = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "singleLine", {
get: function() {
return !!this._label && !this._label.enableWrapText;
},
set: function(t) {
this._label && (this._label.enableWrapText = !t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "stroke", {
get: function() {
return this._outline && this._outline.enabled ? this._outline.width : 0;
},
set: function(t) {
if (0 == t) this._outline && (this._outline.enabled = !1); else {
if (this._outline) this._outline.enabled = !0; else {
this._outline = this._node.addComponent(cc.LabelOutline);
this.updateStrokeColor();
}
this._outline.width = t;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "strokeColor", {
get: function() {
return this._strokeColor;
},
set: function(t) {
this._strokeColor || (this._strokeColor = new cc.Color());
this._strokeColor.set(t);
this.updateGear(4);
this.updateStrokeColor();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shadowOffset", {
get: function() {
return this._shadowOffset;
},
set: function(t) {
this._shadowOffset || (this._shadowOffset = new cc.Vec2());
this._shadowOffset.set(t);
if (0 != this._shadowOffset.x || 0 != this._shadowOffset.y) {
if (this._shadow) this._shadow.enabled = !0; else {
this._shadow = this._node.addComponent(cc.LabelShadow);
this.updateShadowColor();
}
this._shadow.offset.x = t.x;
this._shadow.offset.y = -t.y;
} else this._shadow && (this._shadow.enabled = !1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shadowColor", {
get: function() {
return this._shadowColor;
},
set: function(t) {
this._shadowColor || (this._shadowColor = new cc.Color());
this._shadowColor.set(t);
this.updateShadowColor();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "ubbEnabled", {
get: function() {
return this._ubbEnabled;
},
set: function(t) {
if (this._ubbEnabled != t) {
this._ubbEnabled = t;
this.markSizeChanged();
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSize", {
get: function() {
return this._autoSize;
},
set: function(t) {
if (this._autoSize != t) {
this._autoSize = t;
this.markSizeChanged();
this.updateOverflow();
}
},
enumerable: !1,
configurable: !0
});
i.prototype.parseTemplate = function(t) {
for (var e, i, n, o, r = 0, s = ""; -1 != (e = t.indexOf("{", r)); ) if (e > 0 && 92 == t.charCodeAt(e - 1)) {
s += t.substring(r, e - 1);
s += "{";
r = e + 1;
} else {
s += t.substring(r, e);
r = e;
if (-1 == (e = t.indexOf("}", r))) break;
if (e != r + 1) {
-1 != (i = (n = t.substring(r + 1, e)).indexOf("=")) ? s += null == (o = this._templateVars[n.substring(0, i)]) ? n.substring(i + 1) : o : null != (o = this._templateVars[n]) && (s += o);
r = e + 1;
} else {
s += t.substr(r, 2);
r = e + 1;
}
}
r < t.length && (s += t.substr(r));
return s;
};
Object.defineProperty(i.prototype, "templateVars", {
get: function() {
return this._templateVars;
},
set: function(t) {
if (null != this._templateVars || null != t) {
this._templateVars = t;
this.flushVars();
}
},
enumerable: !1,
configurable: !0
});
i.prototype.setVar = function(t, e) {
this._templateVars || (this._templateVars = {});
this._templateVars[t] = e;
return this;
};
i.prototype.flushVars = function() {
this.markSizeChanged();
this.updateText();
};
Object.defineProperty(i.prototype, "textWidth", {
get: function() {
this.ensureSizeCorrect();
return this._node.width;
},
enumerable: !1,
configurable: !0
});
i.prototype.ensureSizeCorrect = function() {
if (this._sizeDirty) {
this._label._forceUpdateRenderData ? this._label._forceUpdateRenderData() : this._label._updateRenderData(!0);
this._sizeDirty = !1;
}
};
i.prototype.updateText = function() {
var e = this._text;
this._templateVars && (e = this.parseTemplate(e));
this._ubbEnabled && (e = t.UBBParser.inst.parse(e, !0));
this._label.string = e;
};
i.prototype.assignFont = function(e, i) {
if (i instanceof cc.Font) e.font = i; else {
var n = t.getFontByName(i);
if (n) e.font = n; else {
e.fontFamily = i;
e.useSystemFont = !0;
}
}
};
i.prototype.assignFontColor = function(e, i) {
var n = e.font;
n instanceof cc.BitmapFont && !n._fntConfig.canTint && (i = cc.Color.WHITE);
this._grayed && (i = t.ToolSet.toGrayed(i));
e.node.color = i;
};
i.prototype.updateFont = function() {
this.assignFont(this._label, this._realFont);
};
i.prototype.updateFontColor = function() {
this.assignFontColor(this._label, this._color);
};
i.prototype.updateStrokeColor = function() {
if (this._outline) {
this._strokeColor || (this._strokeColor = new cc.Color());
this._grayed ? this._outline.color = t.ToolSet.toGrayed(this._strokeColor) : this._outline.color = this._strokeColor;
}
};
i.prototype.updateShadowColor = function() {
if (this._shadow) {
this._shadowColor || (this._shadowColor = new cc.Color());
this._grayed ? this._shadow.color = t.ToolSet.toGrayed(this._shadowColor) : this._shadow.color = this._shadowColor;
}
};
i.prototype.updateFontSize = function() {
var t = this._label.font;
if (t instanceof cc.BitmapFont) {
var e = t._fntConfig;
e.resizable ? this._label.fontSize = this._fontSize : this._label.fontSize = e.fontSize;
this._label.lineHeight = this._label.fontSize + (this._leading + 4) * e.fontSize / this._label.fontSize;
} else {
this._label.fontSize = this._fontSize;
this._label.lineHeight = this._fontSize + this._leading;
}
};
i.prototype.updateOverflow = function() {
if (this._autoSize == t.AutoSizeType.Both) this._label.overflow = cc.Label.Overflow.NONE; else if (this._autoSize == t.AutoSizeType.Height) {
this._label.overflow = cc.Label.Overflow.RESIZE_HEIGHT;
this._node.width = this._width;
} else if (this._autoSize == t.AutoSizeType.Shrink) {
this._label.overflow = cc.Label.Overflow.SHRINK;
this._node.setContentSize(this._width, this._height);
} else {
this._label.overflow = cc.Label.Overflow.CLAMP;
this._node.setContentSize(this._width, this._height);
}
};
i.prototype.markSizeChanged = function() {
if (!(this._underConstruct || this._autoSize != t.AutoSizeType.Both && this._autoSize != t.AutoSizeType.Height || this._sizeDirty)) {
this._node.emit(t.Event.SIZE_DELAY_CHANGE, this);
this._sizeDirty = !0;
}
};
i.prototype.onLabelSizeChanged = function() {
this._sizeDirty = !1;
if (!this._underConstruct && (this._autoSize == t.AutoSizeType.Both || this._autoSize == t.AutoSizeType.Height)) {
this._updatingSize = !0;
this.setSize(this._node.width, this._node.height);
this._updatingSize = !1;
}
};
i.prototype.handleSizeChanged = function() {
this._updatingSize || (this._autoSize == t.AutoSizeType.None || this._autoSize == t.AutoSizeType.Shrink ? this._node.setContentSize(this._width, this._height) : this._autoSize == t.AutoSizeType.Height && (this._node.width = this._width));
};
i.prototype.handleGrayedChanged = function() {
this.updateFontColor();
this.updateStrokeColor();
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.OutlineColor:
return this.strokeColor;

case t.ObjectPropID.FontSize:
return this.fontSize;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.OutlineColor:
this.strokeColor = n;
break;

case t.ObjectPropID.FontSize:
this.fontSize = n;
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this.font = t.readS();
this.fontSize = t.readShort();
this.color = t.readColor();
this.align = t.readByte();
this.verticalAlign = t.readByte();
this.leading = t.readShort();
this.letterSpacing = t.readShort();
this._ubbEnabled = t.readBool();
this.autoSize = t.readByte();
this.underline = t.readBool();
this.italic = t.readBool();
this.bold = t.readBool();
this.singleLine = t.readBool();
if (t.readBool()) {
this.strokeColor = t.readColor();
this.stroke = t.readFloat();
}
if (t.readBool()) {
this.shadowColor = t.readColor();
var n = t.readFloat(), o = t.readFloat();
this.shadowOffset = new cc.Vec2(n, o);
}
t.readBool() && (this._templateVars = {});
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
t.seek(i, 6);
var n = t.readS();
null != n && (this.text = n);
};
return i;
}(t.GObject);
t.GTextField = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.getSpriteFrame = function(i) {
var n = t.UIPackage.getItemByURL(i);
if (n) {
n.load();
if (n.type == t.PackageItemType.Image) return n.asset;
if (n.type == t.PackageItemType.MovieClip) return n.frames[0].texture;
}
return e.prototype.getSpriteFrame.call(this, i);
};
return i;
}(cc.SpriteAtlas);
t.RichTextImageAtlas = e;
var i = new e(), n = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._node.name = "GRichTextField";
i._touchDisabled = !1;
i.linkUnderline = t.UIConfig.linkUnderline;
return i;
}
n.prototype.createRenderer = function() {
this._richText = this._node.addComponent(cc.RichText);
this._richText.handleTouchEvent = !1;
this.autoSize = t.AutoSizeType.None;
this._richText.imageAtlas = i;
};
Object.defineProperty(n.prototype, "align", {
get: function() {
return this._richText.horizontalAlign;
},
set: function(t) {
this._richText.horizontalAlign = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "underline", {
get: function() {
return this._underline;
},
set: function(t) {
if (this._underline != t) {
this._underline = t;
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "bold", {
get: function() {
return this._bold;
},
set: function(t) {
if (this._bold != t) {
this._bold = t;
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "italic", {
get: function() {
return this._italics;
},
set: function(t) {
if (this._italics != t) {
this._italics = t;
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
n.prototype.markSizeChanged = function() {};
n.prototype.updateText = function() {
var e = this._text;
this._templateVars && (e = this.parseTemplate(e));
if (this._ubbEnabled) {
t.UBBParser.inst.linkUnderline = this.linkUnderline;
t.UBBParser.inst.linkColor = this.linkColor;
e = t.UBBParser.inst.parse(e);
}
this._bold && (e = "<b>" + e + "</b>");
this._italics && (e = "<i>" + e + "</i>");
this._underline && (e = "<u>" + e + "</u>");
var i = this._color;
this._grayed && (i = t.ToolSet.toGrayed(i));
e = "<color=" + i.toHEX("#rrggbb") + ">" + e + "</color>";
if (this._autoSize == t.AutoSizeType.Both) {
0 != this._richText.maxWidth && (this._richText.maxWidth = 0);
this._richText.string = e;
0 != this.maxWidth && this._node.width > this.maxWidth && (this._richText.maxWidth = this.maxWidth);
} else this._richText.string = e;
};
n.prototype.updateFont = function() {
this.assignFont(this._richText, this._realFont);
};
n.prototype.updateFontColor = function() {
this.assignFontColor(this._richText, this._color);
};
n.prototype.updateFontSize = function() {
var t = this._fontSize, e = this._richText.font;
e instanceof cc.BitmapFont && (e._fntConfig.resizable || (t = e._fntConfig.fontSize));
this._richText.fontSize = t;
this._richText.lineHeight = t + 2 * this._leading;
};
n.prototype.updateOverflow = function() {
this._autoSize == t.AutoSizeType.Both ? this._richText.maxWidth = 0 : this._richText.maxWidth = this._width;
};
n.prototype.handleSizeChanged = function() {
this._updatingSize || this._autoSize != t.AutoSizeType.Both && (this._richText.maxWidth = this._width);
};
return n;
}(t.GTextField);
t.GRichTextField = n;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GRoot";
i.opaque = !1;
i._volumeScale = 1;
i._popupStack = new Array();
i._justClosedPopups = new Array();
i._modalLayer = new t.GGraph();
i._modalLayer.setSize(i.width, i.height);
i._modalLayer.drawRect(0, cc.Color.TRANSPARENT, t.UIConfig.modalLayerColor);
i._modalLayer.addRelation(i, t.RelationType.Size);
i._thisOnResized = i.startWinResize.bind(i);
i._inputProcessor = i.node.addComponent(t.InputProcessor);
i._inputProcessor._captureCallback = i.onTouchBegin_1;
cc.view.on("canvas-resize", i._thisOnResized);
return i;
}
Object.defineProperty(i, "inst", {
get: function() {
if (!i._inst) throw "Call GRoot.create first!";
return i._inst;
},
enumerable: !1,
configurable: !0
});
i.create = function(e, n, o) {
void 0 === n && (n = 1920);
void 0 === o && (o = 1080);
i.designWidth = n;
i.designHeight = o;
i._inst = new i();
e = e || cc.director.getScene();
i.isSceneRoot = e == cc.director.getScene();
e.addChild(i._inst.node);
i._inst.startWinResize();
var r = new Uint8Array([ 255, 255, 255, 128, 255, 255, 255, 128, 255, 255, 255, 128, 255, 255, 255, 128 ]);
t.UIConfig.defAtlasTexture.initWithData(r, cc.Texture2D.PixelFormat.RGBA8888, 2, 2);
return i._inst;
};
i.prototype.onDestroy = function() {
cc.view.off("canvas-resize", this._thisOnResized);
this == i._inst && (i._inst = null);
};
i.prototype.getTouchPosition = function(t) {
return this._inputProcessor.getTouchPosition(t);
};
Object.defineProperty(i.prototype, "touchTarget", {
get: function() {
return this._inputProcessor.getTouchTarget();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "inputProcessor", {
get: function() {
return this._inputProcessor;
},
enumerable: !1,
configurable: !0
});
i.prototype.showWindow = function(t) {
this.addChild(t);
t.requestFocus();
t.x > this.width ? t.x = this.width - t.width : t.x + t.width < 0 && (t.x = 0);
t.y > this.height ? t.y = this.height - t.height : t.y + t.height < 0 && (t.y = 0);
this.adjustModalLayer();
};
i.prototype.hideWindow = function(t) {
t.hide();
};
i.prototype.hideWindowImmediately = function(t) {
t.parent == this && this.removeChild(t);
this.adjustModalLayer();
};
i.prototype.bringToFront = function(e) {
var i, n = this.numChildren;
i = this._modalLayer.parent && !e.modal ? this.getChildIndex(this._modalLayer) - 1 : n - 1;
for (;i >= 0; i--) {
var o = this.getChildAt(i);
if (o == e) return;
if (o instanceof t.Window) break;
}
i >= 0 && this.setChildIndex(e, i);
};
i.prototype.showModalWait = function(e) {
if (null != t.UIConfig.globalModalWaiting) {
null == this._modalWaitPane && (this._modalWaitPane = t.UIPackage.createObjectFromURL(t.UIConfig.globalModalWaiting));
this._modalWaitPane.setSize(this.width, this.height);
this._modalWaitPane.addRelation(this, t.RelationType.Size);
this.addChild(this._modalWaitPane);
this._modalWaitPane.text = e;
}
};
i.prototype.closeModalWait = function() {
this._modalWaitPane && this._modalWaitPane.parent && this.removeChild(this._modalWaitPane);
};
i.prototype.closeAllExceptModals = function() {
for (var e = this._children.slice(), i = e.length, n = 0; n < i; n++) {
var o = e[n];
o instanceof t.Window && !o.modal && o.hide();
}
};
i.prototype.closeAllWindows = function() {
for (var e = this._children.slice(), i = e.length, n = 0; n < i; n++) {
var o = e[n];
o instanceof t.Window && o.hide();
}
};
i.prototype.getTopWindow = function() {
for (var e = this.numChildren - 1; e >= 0; e--) {
var i = this.getChildAt(e);
if (i instanceof t.Window) return i;
}
return null;
};
Object.defineProperty(i.prototype, "modalLayer", {
get: function() {
return this._modalLayer;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "hasModalWindow", {
get: function() {
return null != this._modalLayer.parent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "modalWaiting", {
get: function() {
return this._modalWaitPane && this._modalWaitPane.node.activeInHierarchy;
},
enumerable: !1,
configurable: !0
});
i.prototype.getPopupPosition = function(e, i, n, o) {
var r = o || new cc.Vec2(), s = 0, a = 0;
if (i) {
r = i.localToGlobal();
var l = i.localToGlobal(i.width, i.height), h = e.parent;
if (h) {
r = h.globalToLocal(r.x, r.y);
l = h.globalToLocal(l.x, l.y);
}
s = l.x - r.x;
a = l.y - r.y;
} else {
r = this.getTouchPosition();
r = this.globalToLocal(r.x, r.y);
}
r.x + e.width > this.width && (r.x = r.x + s - e.width);
r.y += a;
if ((void 0 === n || n === t.PopupDirection.Auto) && r.y + e.height > this.height || !1 === n || n === t.PopupDirection.Up) {
r.y = r.y - a - e.height - 1;
if (r.y < 0) {
r.y = 0;
r.x += s / 2;
}
}
return r;
};
i.prototype.showPopup = function(t, e, i) {
if (this._popupStack.length > 0) {
var n = this._popupStack.indexOf(t);
if (-1 != n) for (var o = this._popupStack.length - 1; o >= n; o--) this.removeChild(this._popupStack.pop());
}
this._popupStack.push(t);
if (e) for (var r = e; r; ) {
if (r.parent == this) {
t.sortingOrder < r.sortingOrder && (t.sortingOrder = r.sortingOrder);
break;
}
r = r.parent;
}
this.addChild(t);
this.adjustModalLayer();
var s = this.getPopupPosition(t, e, i);
t.setPosition(s.x, s.y);
};
i.prototype.togglePopup = function(t, e, i) {
-1 == this._justClosedPopups.indexOf(t) && this.showPopup(t, e, i);
};
i.prototype.hidePopup = function(t) {
if (t) {
var e = this._popupStack.indexOf(t);
if (-1 != e) for (var i = this._popupStack.length - 1; i >= e; i--) this.closePopup(this._popupStack.pop());
} else {
for (i = this._popupStack.length - 1; i >= 0; i--) this.closePopup(this._popupStack[i]);
this._popupStack.length = 0;
}
};
Object.defineProperty(i.prototype, "hasAnyPopup", {
get: function() {
return 0 != this._popupStack.length;
},
enumerable: !1,
configurable: !0
});
i.prototype.closePopup = function(e) {
e.parent && (e instanceof t.Window ? e.hide() : this.removeChild(e));
};
i.prototype.showTooltips = function(e) {
if (null == this._defaultTooltipWin) {
var i = t.UIConfig.tooltipsWin;
if (!i) {
console.error("UIConfig.tooltipsWin not defined");
return;
}
this._defaultTooltipWin = t.UIPackage.createObjectFromURL(i);
}
this._defaultTooltipWin.text = e;
this.showTooltipsWin(this._defaultTooltipWin);
};
i.prototype.showTooltipsWin = function(t) {
this.hideTooltips();
this._tooltipWin = t;
var e = this.getTouchPosition();
e.x += 10;
e.y += 20;
this.globalToLocal(e.x, e.y, e);
if (e.x + this._tooltipWin.width > this.width) {
e.x = e.x - this._tooltipWin.width - 1;
e.x < 0 && (e.x = 10);
}
if (e.y + this._tooltipWin.height > this.height) {
e.y = e.y - this._tooltipWin.height - 1;
e.y < 0 && (e.y = 10);
}
this._tooltipWin.setPosition(e.x, e.y);
this.addChild(this._tooltipWin);
};
i.prototype.hideTooltips = function() {
if (this._tooltipWin) {
this._tooltipWin.parent && this.removeChild(this._tooltipWin);
this._tooltipWin = null;
}
};
Object.defineProperty(i.prototype, "volumeScale", {
get: function() {
return this._volumeScale;
},
set: function(t) {
this._volumeScale = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.playOneShotSound = function(t, e) {
void 0 === e && (e = 1);
cc.audioEngine.play(t, !1, this._volumeScale * e);
};
i.prototype.adjustModalLayer = function() {
var e = this.numChildren;
this._modalWaitPane && this._modalWaitPane.parent && this.setChildIndex(this._modalWaitPane, e - 1);
for (var i = e - 1; i >= 0; i--) {
var n = this.getChildAt(i);
if (n instanceof t.Window && n.modal) {
null == this._modalLayer.parent ? this.addChildAt(this._modalLayer, i) : this.setChildIndexBefore(this._modalLayer, i);
return;
}
}
this._modalLayer.parent && this.removeChild(this._modalLayer);
};
i.prototype.onTouchBegin_1 = function(t) {
this._tooltipWin && this.hideTooltips();
this._justClosedPopups.length = 0;
if (this._popupStack.length > 0) {
for (var e = t.initiator; e && e != this; ) {
var i = this._popupStack.indexOf(e);
if (-1 != i) {
for (var n = this._popupStack.length - 1; n > i; n--) {
var o = this._popupStack.pop();
this.closePopup(o);
this._justClosedPopups.push(o);
}
return;
}
e = e.findParent();
}
for (n = this._popupStack.length - 1; n >= 0; n--) {
o = this._popupStack[n];
this.closePopup(o);
this._justClosedPopups.push(o);
}
this._popupStack.length = 0;
}
};
i.prototype.startWinResize = function() {
console.log("Groot startWinResize");
var t = cc.view.getVisibleSize(), e = cc.view.getCanvasSize();
e.width /= cc.view.getScaleX();
e.height /= cc.view.getScaleY();
var n = Math.min(e.width / i.designWidth, e.height / i.designHeight);
e.width /= n;
e.height /= n;
if (i.isSceneRoot) {
var o = cc.view.getViewportRect().origin;
o.x = o.x / cc.view.getScaleX();
o.y = o.y / cc.view.getScaleY();
this.setSize(e.width, e.height);
this._node.setPosition(-o.x, this._height * n - o.y);
this._node.setScale(n, n);
} else {
this.setSize(e.width, e.height);
var r = this._node.parent.convertToNodeSpaceAR(new cc.Vec2(0, 0));
this._node.setPosition(r.x + (t.width - e.width * n) / 2, e.height * n + r.y + (t.height - e.height * n) / 2);
this._node.setScale(n, n);
}
this.updateContentScaleLevel();
};
i.prototype.onWinResize = function() {
console.log("Groot resize stack:" + new Error().stack);
var t = cc.view.getVisibleSize(), e = cc.view.getCanvasSize();
console.log(`Groot before change canvase: (${e.width}, ${e.height}), (${cc.view.getScaleX()}, ${cc.view.getScaleY()})`);
e.width /= cc.view.getScaleX();
e.height /= cc.view.getScaleY();
console.log(`Groot before onWinResize: canvase: (${e.width}, ${e.height}), design:(${i.designWidth}, ${i.designHeight}), visible: (${t.width}, ${t.height})`);
var n = Math.min(e.width / i.designWidth, e.height / i.designHeight);
e.width /= n;
e.height /= n;
console.log(`Groot after onWinResize: (${e.width}, ${e.height}), scale:${n}`);
this.setSize(e.width, e.height);
this._node.setScale(n, n);
};
i.prototype.handlePositionChanged = function() {};
i.prototype.updateContentScaleLevel = function() {
var t = Math.max(cc.view.getScaleX(), cc.view.getScaleY());
i.contentScaleLevel = t >= 3.5 ? 3 : t >= 2.5 ? 2 : t >= 1.5 ? 1 : 0;
};
i.contentScaleLevel = 0;
i.designWidth = 0;
i.designHeight = 0;
i.isSceneRoot = !1;
return i;
}(t.GComponent);
t.GRoot = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var t = e.call(this) || this;
t._node.name = "GScrollBar";
t._dragOffset = new cc.Vec2();
t._scrollPerc = 0;
return t;
}
n.prototype.setScrollPane = function(t, e) {
this._target = t;
this._vertical = e;
};
n.prototype.setDisplayPerc = function(t) {
if (this._vertical) {
this._fixedGripSize || (this._grip.height = Math.floor(t * this._bar.height));
this._grip.y = this._bar.y + (this._bar.height - this._grip.height) * this._scrollPerc;
} else {
this._fixedGripSize || (this._grip.width = Math.floor(t * this._bar.width));
this._grip.x = this._bar.x + (this._bar.width - this._grip.width) * this._scrollPerc;
}
this._grip.visible = 0 != t && 1 != t;
};
n.prototype.setScrollPerc = function(t) {
this._scrollPerc = t;
this._vertical ? this._grip.y = this._bar.y + (this._bar.height - this._grip.height) * this._scrollPerc : this._grip.x = this._bar.x + (this._bar.width - this._grip.width) * this._scrollPerc;
};
Object.defineProperty(n.prototype, "minSize", {
get: function() {
return this._vertical ? (this._arrowButton1 ? this._arrowButton1.height : 0) + (this._arrowButton2 ? this._arrowButton2.height : 0) : (this._arrowButton1 ? this._arrowButton1.width : 0) + (this._arrowButton2 ? this._arrowButton2.width : 0);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "gripDragging", {
get: function() {
return this._gripDragging;
},
enumerable: !1,
configurable: !0
});
n.prototype.constructExtension = function(e) {
e.seek(0, 6);
this._fixedGripSize = e.readBool();
this._grip = this.getChild("grip");
if (this._grip) {
this._bar = this.getChild("bar");
if (this._bar) {
this._arrowButton1 = this.getChild("arrow1");
this._arrowButton2 = this.getChild("arrow2");
this._grip.on(t.Event.TOUCH_BEGIN, this.onGripTouchDown, this);
this._grip.on(t.Event.TOUCH_MOVE, this.onGripTouchMove, this);
this._grip.on(t.Event.TOUCH_END, this.onGripTouchEnd, this);
this._arrowButton1 && this._arrowButton1.on(t.Event.TOUCH_BEGIN, this.onClickArrow1, this);
this._arrowButton2 && this._arrowButton2.on(t.Event.TOUCH_BEGIN, this.onClickArrow2, this);
this.on(t.Event.TOUCH_BEGIN, this.onBarTouchBegin, this);
} else console.error("需要定义bar");
} else console.error("需要定义grip");
};
n.prototype.onGripTouchDown = function(t) {
t.stopPropagation();
t.captureTouch();
this._gripDragging = !0;
this._target.updateScrollBarVisible();
this.globalToLocal(t.pos.x, t.pos.y, this._dragOffset);
this._dragOffset.x -= this._grip.x;
this._dragOffset.y -= this._grip.y;
};
n.prototype.onGripTouchMove = function(t) {
if (this.onStage) {
var e = this.globalToLocal(t.pos.x, t.pos.y, i);
if (this._vertical) {
var n = e.y - this._dragOffset.y;
this._target.setPercY((n - this._bar.y) / (this._bar.height - this._grip.height), !1);
} else {
var o = e.x - this._dragOffset.x;
this._target.setPercX((o - this._bar.x) / (this._bar.width - this._grip.width), !1);
}
}
};
n.prototype.onGripTouchEnd = function() {
if (this.onStage) {
this._gripDragging = !1;
this._target.updateScrollBarVisible();
}
};
n.prototype.onClickArrow1 = function(t) {
t.stopPropagation();
this._vertical ? this._target.scrollUp() : this._target.scrollLeft();
};
n.prototype.onClickArrow2 = function(t) {
t.stopPropagation();
this._vertical ? this._target.scrollDown() : this._target.scrollRight();
};
n.prototype.onBarTouchBegin = function(t) {
var e = this._grip.globalToLocal(t.pos.x, t.pos.y, i);
this._vertical ? e.y < 0 ? this._target.scrollUp(4) : this._target.scrollDown(4) : e.x < 0 ? this._target.scrollLeft(4) : this._target.scrollRight(4);
};
return n;
}(t.GComponent);
t.GScrollBar = e;
var i = new cc.Vec2();
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._min = 0;
i._max = 0;
i._value = 0;
i._barMaxWidth = 0;
i._barMaxHeight = 0;
i._barMaxWidthDelta = 0;
i._barMaxHeightDelta = 0;
i._clickPercent = 0;
i._barStartX = 0;
i._barStartY = 0;
i.changeOnClick = !0;
i.canDrag = !0;
i._node.name = "GSlider";
i._titleType = t.ProgressTitleType.Percent;
i._value = 50;
i._max = 100;
i._clickPos = new cc.Vec2();
return i;
}
Object.defineProperty(n.prototype, "titleType", {
get: function() {
return this._titleType;
},
set: function(t) {
this._titleType = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "wholeNumbers", {
get: function() {
return this._wholeNumbers;
},
set: function(t) {
if (this._wholeNumbers != t) {
this._wholeNumbers = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "min", {
get: function() {
return this._min;
},
set: function(t) {
if (this._min != t) {
this._min = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "max", {
get: function() {
return this._max;
},
set: function(t) {
if (this._max != t) {
this._max = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "value", {
get: function() {
return this._value;
},
set: function(t) {
if (this._value != t) {
this._value = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
n.prototype.update = function() {
this.updateWithPercent((this._value - this._min) / (this._max - this._min));
};
n.prototype.updateWithPercent = function(e, i) {
e = t.ToolSet.clamp01(e);
if (i) {
var n = t.ToolSet.clamp(this._min + (this._max - this._min) * e, this._min, this._max);
if (this._wholeNumbers) {
n = Math.round(n);
e = t.ToolSet.clamp01((n - this._min) / (this._max - this._min));
}
if (n != this._value) {
this._value = n;
this._node.emit(t.Event.STATUS_CHANGED, this);
}
}
if (this._titleObject) switch (this._titleType) {
case t.ProgressTitleType.Percent:
this._titleObject.text = Math.floor(100 * e) + "%";
break;

case t.ProgressTitleType.ValueAndMax:
this._titleObject.text = this._value + "/" + this._max;
break;

case t.ProgressTitleType.Value:
this._titleObject.text = "" + this._value;
break;

case t.ProgressTitleType.Max:
this._titleObject.text = "" + this._max;
}
var o = this.width - this._barMaxWidthDelta, r = this.height - this._barMaxHeightDelta;
if (this._reverse) {
if (this._barObjectH) {
this._barObjectH.width = Math.round(o * e);
this._barObjectH.x = this._barStartX + (o - this._barObjectH.width);
}
if (this._barObjectV) {
this._barObjectV.height = Math.round(r * e);
this._barObjectV.y = this._barStartY + (r - this._barObjectV.height);
}
} else {
this._barObjectH && (this._barObjectH.width = Math.round(o * e));
this._barObjectV && (this._barObjectV.height = Math.round(r * e));
}
};
n.prototype.constructExtension = function(e) {
e.seek(0, 6);
this._titleType = e.readByte();
this._reverse = e.readBool();
if (e.version >= 2) {
this._wholeNumbers = e.readBool();
this.changeOnClick = e.readBool();
}
this._titleObject = this.getChild("title");
this._barObjectH = this.getChild("bar");
this._barObjectV = this.getChild("bar_v");
this._gripObject = this.getChild("grip");
if (this._barObjectH) {
this._barMaxWidth = this._barObjectH.width;
this._barMaxWidthDelta = this.width - this._barMaxWidth;
this._barStartX = this._barObjectH.x;
}
if (this._barObjectV) {
this._barMaxHeight = this._barObjectV.height;
this._barMaxHeightDelta = this.height - this._barMaxHeight;
this._barStartY = this._barObjectV.y;
}
if (this._gripObject) {
this._gripObject.on(t.Event.TOUCH_BEGIN, this.onGripTouchBegin, this);
this._gripObject.on(t.Event.TOUCH_MOVE, this.onGripTouchMove, this);
}
this._node.on(t.Event.TOUCH_BEGIN, this.onBarTouchBegin, this);
};
n.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._barObjectH && (this._barMaxWidth = this.width - this._barMaxWidthDelta);
this._barObjectV && (this._barMaxHeight = this.height - this._barMaxHeightDelta);
this._underConstruct || this.update();
};
n.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6)) if (t.readByte() == this.packageItem.objectType) {
this._value = t.readInt();
this._max = t.readInt();
t.version >= 2 && (this._min = t.readInt());
this.update();
} else this.update(); else this.update();
};
n.prototype.onGripTouchBegin = function(e) {
this.canDrag = !0;
e.stopPropagation();
e.captureTouch();
this._clickPos = this.globalToLocal(e.pos.x, e.pos.y);
this._clickPercent = t.ToolSet.clamp01((this._value - this._min) / (this._max - this._min));
};
n.prototype.onGripTouchMove = function(t) {
if (this.canDrag) {
var e, n = this.globalToLocal(t.pos.x, t.pos.y, i), o = n.x - this._clickPos.x, r = n.y - this._clickPos.y;
if (this._reverse) {
o = -o;
r = -r;
}
e = this._barObjectH ? this._clickPercent + o / this._barMaxWidth : this._clickPercent + r / this._barMaxHeight;
this.updateWithPercent(e, !0);
}
};
n.prototype.onBarTouchBegin = function(e) {
if (this.changeOnClick) {
var n = this._gripObject.globalToLocal(e.pos.x, e.pos.y, i), o = t.ToolSet.clamp01((this._value - this._min) / (this._max - this._min)), r = 0;
null != this._barObjectH && (r = (n.x - this._gripObject.width / 2) / this._barMaxWidth);
null != this._barObjectV && (r = (n.y - this._gripObject.height / 2) / this._barMaxHeight);
this._reverse ? o -= r : o += r;
this.updateWithPercent(o, !0);
}
};
return n;
}(t.GComponent);
t.GSlider = e;
var i = new cc.Vec2();
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var t = e.call(this) || this;
t._node.name = "GTextInput";
t._touchDisabled = !1;
return t;
}
n.prototype.createRenderer = function() {
this._editBox = this._node.addComponent(i);
this._editBox.maxLength = -1;
this._editBox._updateTextLabel();
this._node.on("text-changed", this.onTextChanged, this);
this.on(t.Event.TOUCH_END, this.onTouchEnd1, this);
this.autoSize = t.AutoSizeType.None;
};
Object.defineProperty(n.prototype, "editable", {
get: function() {
return this._editBox.enabled;
},
set: function(t) {
this._editBox.enabled = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "maxLength", {
get: function() {
return this._editBox.maxLength;
},
set: function(t) {
0 == t && (t = -1);
this._editBox.maxLength = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "promptText", {
get: function() {
return this._promptText;
},
set: function(e) {
this._promptText = e;
var i = !this._editBox.placeholderLabel;
this._editBox._updatePlaceholderLabel();
i && this.assignFont(this._editBox.placeholderLabel, this._realFont);
this._editBox.placeholderLabel.string = t.UBBParser.inst.parse(this._promptText, !0);
if (t.UBBParser.inst.lastColor) {
var n = this._editBox.placeholderLabel.node.color;
n || (n = new cc.Color());
n.fromHEX(t.UBBParser.inst.lastColor);
this.assignFontColor(this._editBox.placeholderLabel, n);
} else this.assignFontColor(this._editBox.placeholderLabel, this._color);
t.UBBParser.inst.lastSize ? this._editBox.placeholderLabel.fontSize = parseInt(t.UBBParser.inst.lastSize) : this._editBox.placeholderLabel.fontSize = this._fontSize;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "restrict", {
get: function() {
return "";
},
set: function() {},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "password", {
get: function() {
return this._editBox.inputFlag == cc.EditBox.InputFlag.PASSWORD;
},
set: function(t) {
this._editBox.inputFlag = t ? cc.EditBox.InputFlag.PASSWORD : cc.EditBox.InputFlag.DEFAULT;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "align", {
get: function() {
return this._editBox.textLabel.horizontalAlign;
},
set: function(t) {
this._editBox.textLabel.horizontalAlign = t;
this._editBox.placeholderLabel && (this._editBox.placeholderLabel.horizontalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "verticalAlign", {
get: function() {
return this._editBox.textLabel.verticalAlign;
},
set: function(t) {
this._editBox.textLabel.verticalAlign = t;
this._editBox.placeholderLabel && (this._editBox.placeholderLabel.verticalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "singleLine", {
get: function() {
return this._editBox.inputMode != cc.EditBox.InputMode.ANY;
},
set: function(t) {
this._editBox.inputMode = t ? cc.EditBox.InputMode.SINGLE_LINE : cc.EditBox.InputMode.ANY;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "inputMode", {
get: function() {
return this._editBox.inputMode;
},
set: function(e) {
e == t.InputMode.ANY || e == t.InputMode.SINGLE_LINE || e == t.InputMode.NUMERIC ? this._editBox.inputMode = e : console.warn("[GTextInput] invalid input mode");
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "inputFlag", {
get: function() {
return this._editBox.inputFlag;
},
set: function(e) {
e == t.InputFlag.PASSWORD || e == t.InputFlag.DEFAULT ? this._editBox.inputFlag = e : console.warn("[GTextInput] invalid input flag");
},
enumerable: !1,
configurable: !0
});
n.prototype.requestFocus = function() {
this._editBox.focus();
};
n.prototype.markSizeChanged = function() {};
n.prototype.updateText = function() {
var e = this._text;
this._templateVars && (e = this.parseTemplate(e));
this._ubbEnabled && (e = t.UBBParser.inst.parse(t.ToolSet.encodeHTML(e), !0));
this._editBox.string = e;
};
n.prototype.updateFont = function() {
this.assignFont(this._editBox.textLabel, this._realFont);
this._editBox.placeholderLabel && this.assignFont(this._editBox.placeholderLabel, this._realFont);
};
n.prototype.updateFontColor = function() {
this.assignFontColor(this._editBox.textLabel, this._color);
};
n.prototype.updateFontSize = function() {
this._editBox.textLabel.fontSize = this._fontSize;
this._editBox.textLabel.lineHeight = this._fontSize + this._leading;
this._editBox.placeholderLabel && (this._editBox.placeholderLabel.fontSize = this._editBox.textLabel.fontSize);
};
n.prototype.updateOverflow = function() {};
n.prototype.onTextChanged = function() {
this._text = this._editBox.string;
};
n.prototype.onTouchEnd1 = function(t) {
this._editBox.openKeyboard(t.touch);
};
n.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 4);
var n = t.readS();
null != n && (this.promptText = n);
null != (n = t.readS()) && (this.restrict = n);
var o = t.readInt();
0 != o && (this.maxLength = o);
o = t.readInt();
t.readBool() && (this.password = !0);
if (this._editBox.placeholderLabel) {
var r = this._editBox.textLabel.horizontalAlign;
this._editBox.placeholderLabel.horizontalAlign = r;
var s = this._editBox.textLabel.verticalAlign;
this._editBox.placeholderLabel.verticalAlign = s;
}
};
return n;
}(t.GTextField);
t.GTextInput = e;
var i = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
e.prototype._registerEvent = function() {};
e.prototype._syncSize = function() {
var t = this.node.getContentSize();
this._impl.setSize(t.width, t.height);
this.textLabel && this.textLabel.node.setContentSize(t.width, t.height);
this.placeholderLabel && this.placeholderLabel.node.setContentSize(t.width, t.height);
};
e.prototype.openKeyboard = function() {
var t = this._impl;
t && t.beginEditing();
};
return e;
}(cc.EditBox);
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._indent = 15;
i._rootNode = new t.GTreeNode(!0);
i._rootNode._setTree(i);
i._rootNode.expanded = !0;
return i;
}
Object.defineProperty(n.prototype, "rootNode", {
get: function() {
return this._rootNode;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "indent", {
get: function() {
return this._indent;
},
set: function(t) {
this._indent = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "clickToExpand", {
get: function() {
return this._clickToExpand;
},
set: function(t) {
this._clickToExpand = t;
},
enumerable: !1,
configurable: !0
});
n.prototype.getSelectedNode = function() {
return -1 != this.selectedIndex ? this.getChildAt(this.selectedIndex)._treeNode : null;
};
n.prototype.getSelectedNodes = function(t) {
t || (t = new Array());
i.length = 0;
e.prototype.getSelection.call(this, i);
for (var n = i.length, o = new Array(), r = 0; r < n; r++) {
var s = this.getChildAt(i[r])._treeNode;
o.push(s);
}
return o;
};
n.prototype.selectNode = function(t, e) {
for (var i = t.parent; i && i != this._rootNode; ) {
i.expanded = !0;
i = i.parent;
}
t._cell && this.addSelection(this.getChildIndex(t._cell), e);
};
n.prototype.unselectNode = function(t) {
t._cell && this.removeSelection(this.getChildIndex(t._cell));
};
n.prototype.expandAll = function(t) {
t || (t = this._rootNode);
t.expanded = !0;
for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
n.isFolder && this.expandAll(n);
}
};
n.prototype.collapseAll = function(t) {
t || (t = this._rootNode);
t != this._rootNode && (t.expanded = !1);
for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
n.isFolder && this.collapseAll(n);
}
};
n.prototype.createCell = function(e) {
var i = this.getFromPool(e._resURL);
if (!(i instanceof t.GComponent)) throw new Error("cannot create tree node object.");
i._treeNode = e;
e._cell = i;
var n, o = i.getChild("indent");
o && (o.width = (e.level - 1) * this._indent);
if (n = i.getController("expanded")) {
n.on(t.Event.STATUS_CHANGED, this.__expandedStateChanged, this);
n.selectedIndex = e.expanded ? 1 : 0;
}
(n = i.getController("leaf")) && (n.selectedIndex = e.isFolder ? 0 : 1);
e.isFolder && e._cell.on(t.Event.TOUCH_BEGIN, this.__cellMouseDown, this);
this.treeNodeRender && this.treeNodeRender(e, i);
};
n.prototype._afterInserted = function(t) {
t._cell || this.createCell(t);
var e = this.getInsertIndexForNode(t);
this.addChildAt(t._cell, e);
this.treeNodeRender && this.treeNodeRender(t, t._cell);
t.isFolder && t.expanded && this.checkChildren(t, e);
};
n.prototype.getInsertIndexForNode = function(t) {
var e = t.getPrevSibling();
null == e && (e = t.parent);
for (var i = this.getChildIndex(e._cell) + 1, n = t.level, o = this.numChildren, r = i; r < o && !(this.getChildAt(r)._treeNode.level <= n); r++) i++;
return i;
};
n.prototype._afterRemoved = function(t) {
this.removeNode(t);
};
n.prototype._afterExpanded = function(t) {
if (t != this._rootNode) {
null != this.treeNodeWillExpand && this.treeNodeWillExpand(t, !0);
if (null != t._cell) {
this.treeNodeRender && this.treeNodeRender(t, t._cell);
var e = t._cell.getController("expanded");
e && (e.selectedIndex = 1);
t._cell.parent && this.checkChildren(t, this.getChildIndex(t._cell));
}
} else this.checkChildren(this._rootNode, 0);
};
n.prototype._afterCollapsed = function(t) {
if (t != this._rootNode) {
this.treeNodeWillExpand && this.treeNodeWillExpand(t, !1);
if (null != t._cell) {
this.treeNodeRender && this.treeNodeRender(t, t._cell);
var e = t._cell.getController("expanded");
e && (e.selectedIndex = 0);
t._cell.parent && this.hideFolderNode(t);
}
} else this.checkChildren(this._rootNode, 0);
};
n.prototype._afterMoved = function(t) {
var e, i = this.getChildIndex(t._cell);
e = t.isFolder ? this.getFolderEndIndex(i, t.level) : i + 1;
var n, o, r = this.getInsertIndexForNode(t), s = e - i;
if (r < i) for (n = 0; n < s; n++) {
o = this.getChildAt(i + n);
this.setChildIndex(o, r + n);
} else for (n = 0; n < s; n++) {
o = this.getChildAt(i);
this.setChildIndex(o, r);
}
};
n.prototype.getFolderEndIndex = function(t, e) {
for (var i = this.numChildren, n = t + 1; n < i; n++) if (this.getChildAt(n)._treeNode.level <= e) return n;
return i;
};
n.prototype.checkChildren = function(t, e) {
for (var i = t.numChildren, n = 0; n < i; n++) {
e++;
var o = t.getChildAt(n);
null == o._cell && this.createCell(o);
o._cell.parent || this.addChildAt(o._cell, e);
o.isFolder && o.expanded && (e = this.checkChildren(o, e));
}
return e;
};
n.prototype.hideFolderNode = function(t) {
for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
n._cell && this.removeChild(n._cell);
n.isFolder && n.expanded && this.hideFolderNode(n);
}
};
n.prototype.removeNode = function(t) {
if (t._cell) {
t._cell.parent && this.removeChild(t._cell);
this.returnToPool(t._cell);
t._cell._treeNode = null;
t._cell = null;
}
if (t.isFolder) for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
this.removeNode(n);
}
};
n.prototype.__cellMouseDown = function(e) {
var i = t.GObject.cast(e.currentTarget)._treeNode;
this._expandedStatusInEvt = i.expanded;
};
n.prototype.__expandedStateChanged = function(t) {
t.parent._treeNode.expanded = 1 == t.selectedIndex;
};
n.prototype.dispatchItemEvent = function(t, i) {
if (0 != this._clickToExpand) {
var n = t._treeNode;
n && this._expandedStatusInEvt == n.expanded && (2 == this._clickToExpand || (n.expanded = !n.expanded));
}
e.prototype.dispatchItemEvent.call(this, t, i);
};
n.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 9);
this._indent = t.readInt();
this._clickToExpand = t.readByte();
};
n.prototype.readItems = function(e) {
var i, n, o, r, s, a, l, h = 0;
i = e.readShort();
for (n = 0; n < i; n++) {
o = e.readShort();
o += e.position;
if (null != (r = e.readS()) || (r = this.defaultItem)) {
s = e.readBool();
l = e.readByte();
var c = new t.GTreeNode(s, r);
c.expanded = !0;
if (0 == n) this._rootNode.addChild(c); else if (l > h) a.addChild(c); else if (l < h) {
for (var u = l; u <= h; u++) a = a.parent;
a.addChild(c);
} else a.parent.addChild(c);
a = c;
h = l;
this.setupItem(e, c.cell);
e.position = o;
} else e.position = o;
}
};
return n;
}(t.GList);
t.GTree = e;
var i = new Array();
})(t || (t = {}));
(function(t) {
var e = function() {
function t(t, e) {
this._level = 0;
this._resURL = e;
t && (this._children = new Array());
}
Object.defineProperty(t.prototype, "expanded", {
get: function() {
return this._expanded;
},
set: function(t) {
if (null != this._children && this._expanded != t) {
this._expanded = t;
this._tree && (this._expanded ? this._tree._afterExpanded(this) : this._tree._afterCollapsed(this));
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "isFolder", {
get: function() {
return null != this._children;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "parent", {
get: function() {
return this._parent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "text", {
get: function() {
return this._cell ? this._cell.text : null;
},
set: function(t) {
this._cell && (this._cell.text = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "icon", {
get: function() {
return this._cell ? this._cell.icon : null;
},
set: function(t) {
this._cell && (this._cell.icon = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "cell", {
get: function() {
return this._cell;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "resURL", {
get: function() {
return this._resURL;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "level", {
get: function() {
return this._level;
},
enumerable: !1,
configurable: !0
});
t.prototype._setLevel = function(t) {
this._level = t;
};
t.prototype.addChild = function(t) {
this.addChildAt(t, this._children.length);
return t;
};
t.prototype.addChildAt = function(t, e) {
if (!t) throw new Error("child is null");
var i = this._children.length;
if (e >= 0 && e <= i) {
if (t._parent == this) this.setChildIndex(t, e); else {
t._parent && t._parent.removeChild(t);
e == this._children.length ? this._children.push(t) : this._children.splice(e, 0, t);
t._parent = this;
t._level = this._level + 1;
t._setTree(this._tree);
(this._tree && this == this._tree.rootNode || this._cell && this._cell.parent && this._expanded) && this._tree._afterInserted(t);
}
return t;
}
throw new RangeError("Invalid child index");
};
t.prototype.removeChild = function(t) {
var e = this._children.indexOf(t);
-1 != e && this.removeChildAt(e);
return t;
};
t.prototype.removeChildAt = function(t) {
if (t >= 0 && t < this.numChildren) {
var e = this._children[t];
this._children.splice(t, 1);
e._parent = null;
if (this._tree) {
e._setTree(null);
this._tree._afterRemoved(e);
}
return e;
}
throw "Invalid child index";
};
t.prototype.removeChildren = function(t, e) {
t = t || 0;
null == e && (e = -1);
(e < 0 || e >= this.numChildren) && (e = this.numChildren - 1);
for (var i = t; i <= e; ++i) this.removeChildAt(t);
};
t.prototype.getChildAt = function(t) {
if (t >= 0 && t < this.numChildren) return this._children[t];
throw "Invalid child index";
};
t.prototype.getChildIndex = function(t) {
return this._children.indexOf(t);
};
t.prototype.getPrevSibling = function() {
if (null == this._parent) return null;
var t = this._parent._children.indexOf(this);
return t <= 0 ? null : this._parent._children[t - 1];
};
t.prototype.getNextSibling = function() {
if (null == this._parent) return null;
var t = this._parent._children.indexOf(this);
return t < 0 || t >= this._parent._children.length - 1 ? null : this._parent._children[t + 1];
};
t.prototype.setChildIndex = function(t, e) {
var i = this._children.indexOf(t);
if (-1 == i) throw "Not a child of this container";
var n = this._children.length;
e < 0 ? e = 0 : e > n && (e = n);
if (i != e) {
this._children.splice(i, 1);
this._children.splice(e, 0, t);
(this._tree && this == this._tree.rootNode || this._cell && this._cell.parent && this._expanded) && this._tree._afterMoved(t);
}
};
t.prototype.swapChildren = function(t, e) {
var i = this._children.indexOf(t), n = this._children.indexOf(e);
if (-1 == i || -1 == n) throw "Not a child of this container";
this.swapChildrenAt(i, n);
};
t.prototype.swapChildrenAt = function(t, e) {
var i = this._children[t], n = this._children[e];
this.setChildIndex(i, e);
this.setChildIndex(n, t);
};
Object.defineProperty(t.prototype, "numChildren", {
get: function() {
return this._children.length;
},
enumerable: !1,
configurable: !0
});
t.prototype.expandToRoot = function() {
for (var t = this; t; ) {
t.expanded = !0;
t = t.parent;
}
};
Object.defineProperty(t.prototype, "tree", {
get: function() {
return this._tree;
},
enumerable: !1,
configurable: !0
});
t.prototype._setTree = function(t) {
this._tree = t;
this._tree && this._tree.treeNodeWillExpand && this._expanded && this._tree.treeNodeWillExpand(this, !0);
if (this._children) for (var e = this._children.length, i = 0; i < e; i++) {
var n = this._children[i];
n._level = this._level + 1;
n._setTree(t);
}
};
return t;
}();
t.GTreeNode = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function t() {
this.left = 0;
this.right = 0;
this.top = 0;
this.bottom = 0;
}
t.prototype.copy = function(t) {
this.top = t.top;
this.bottom = t.bottom;
this.left = t.left;
this.right = t.right;
};
t.prototype.isNone = function() {
return 0 == this.left && 0 == this.right && 0 == this.top && 0 == this.bottom;
};
return t;
}();
t.Margin = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {
this.width = 0;
this.height = 0;
}
e.prototype.load = function() {
return this.owner.getItemAsset(this);
};
e.prototype.tryLoad = function(t) {
return this.owner.getItemAssetAsync(this, t);
};
e.prototype.getBranch = function() {
if (this.branches && -1 != this.owner._branchIndex) {
var t = this.branches[this.owner._branchIndex];
if (t) return this.owner.getItemById(t);
}
return this;
};
e.prototype.getHighResolution = function() {
if (this.highResolution && t.GRoot.contentScaleLevel > 0) {
var e = this.highResolution[t.GRoot.contentScaleLevel - 1];
if (e) return this.owner.getItemById(e);
}
return this;
};
e.prototype.toString = function() {
return this.name;
};
return e;
}();
t.PackageItem = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function e(e) {
if (!e && !(e = t.UIConfig.popupMenu)) throw "UIConfig.popupMenu not defined";
this._contentPane = t.UIPackage.createObjectFromURL(e);
this._contentPane.on(t.Event.DISPLAY, this.onDisplay, this);
this._list = this._contentPane.getChild("list");
this._list.removeChildrenToPool();
this._list.addRelation(this._contentPane, t.RelationType.Width);
this._list.removeRelation(this._contentPane, t.RelationType.Height);
this._contentPane.addRelation(this._list, t.RelationType.Height);
this._list.on(t.Event.CLICK_ITEM, this.onClickItem, this);
}
e.prototype.dispose = function() {
this._contentPane.dispose();
};
e.prototype.addItem = function(t, e) {
var i = this._list.addItemFromPool();
i.title = t;
i.data = e;
i.grayed = !1;
var n = i.getController("checked");
n && (n.selectedIndex = 0);
return i;
};
e.prototype.addItemAt = function(t, e, i) {
var n = this._list.getFromPool();
this._list.addChildAt(n, e);
n.title = t;
n.data = i;
n.grayed = !1;
var o = n.getController("checked");
o && (o.selectedIndex = 0);
return n;
};
e.prototype.addSeperator = function() {
if (null == t.UIConfig.popupMenu_seperator) throw "UIConfig.popupMenu_seperator not defined";
this.list.addItemFromPool(t.UIConfig.popupMenu_seperator);
};
e.prototype.getItemName = function(t) {
return this._list.getChildAt(t).name;
};
e.prototype.setItemText = function(t, e) {
this._list.getChild(t).title = e;
};
e.prototype.setItemVisible = function(t, e) {
var i = this._list.getChild(t);
if (i.visible != e) {
i.visible = e;
this._list.setBoundsChangedFlag();
}
};
e.prototype.setItemGrayed = function(t, e) {
this._list.getChild(t).grayed = e;
};
e.prototype.setItemCheckable = function(t, e) {
var i = this._list.getChild(t).getController("checked");
i && (e ? 0 == i.selectedIndex && (i.selectedIndex = 1) : i.selectedIndex = 0);
};
e.prototype.setItemChecked = function(t, e) {
var i = this._list.getChild(t).getController("checked");
i && (i.selectedIndex = e ? 2 : 1);
};
e.prototype.isItemChecked = function(t) {
var e = this._list.getChild(t).getController("checked");
return !!e && 2 == e.selectedIndex;
};
e.prototype.removeItem = function(t) {
var e = this._list.getChild(t);
if (e) {
var i = this._list.getChildIndex(e);
this._list.removeChildToPoolAt(i);
return !0;
}
return !1;
};
e.prototype.clearItems = function() {
this._list.removeChildrenToPool();
};
Object.defineProperty(e.prototype, "itemCount", {
get: function() {
return this._list.numChildren;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "contentPane", {
get: function() {
return this._contentPane;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "list", {
get: function() {
return this._list;
},
enumerable: !1,
configurable: !0
});
e.prototype.show = function(e, i) {
(null != e ? e.root : t.GRoot.inst).showPopup(this.contentPane, e instanceof t.GRoot ? null : e, i);
};
e.prototype.onClickItem = function(t, e) {
var i = this;
this._list._partner.callLater(function() {
i.onClickItem2(t, e);
}, .1);
};
e.prototype.onClickItem2 = function(e, i) {
if (e instanceof t.GButton) if (e.grayed) this._list.selectedIndex = -1; else {
var n = e.getController("checked");
n && 0 != n.selectedIndex && (1 == n.selectedIndex ? n.selectedIndex = 2 : n.selectedIndex = 1);
this._contentPane.parent.hidePopup(this.contentPane);
e.data instanceof Function && e.data(e, i);
}
};
e.prototype.onDisplay = function() {
this._list.selectedIndex = -1;
this._list.resizeToFit(1e5, 10);
};
return e;
}();
t.PopupMenu = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function e(t) {
this._owner = t;
this._defs = new Array();
}
Object.defineProperty(e.prototype, "owner", {
get: function() {
return this._owner;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "target", {
get: function() {
return this._target;
},
set: function(t) {
if (this._target != t) {
this._target && this.releaseRefTarget(this._target);
this._target = t;
this._target && this.addRefTarget(this._target);
}
},
enumerable: !1,
configurable: !0
});
e.prototype.add = function(e, i) {
if (e != t.RelationType.Size) {
for (var n = this._defs.length, o = 0; o < n; o++) if (this._defs[o].type == e) return;
this.internalAdd(e, i);
} else {
this.add(t.RelationType.Width, i);
this.add(t.RelationType.Height, i);
}
};
e.prototype.internalAdd = function(e, n) {
if (e != t.RelationType.Size) {
var o = new i();
o.percent = n;
o.type = e;
o.axis = e <= t.RelationType.Right_Right || e == t.RelationType.Width || e >= t.RelationType.LeftExt_Left && e <= t.RelationType.RightExt_Right ? 0 : 1;
this._defs.push(o);
} else {
this.internalAdd(t.RelationType.Width, n);
this.internalAdd(t.RelationType.Height, n);
}
};
e.prototype.remove = function(e) {
if (e != t.RelationType.Size) {
for (var i = this._defs.length, n = 0; n < i; n++) if (this._defs[n].type == e) {
this._defs.splice(n, 1);
break;
}
} else {
this.remove(t.RelationType.Width);
this.remove(t.RelationType.Height);
}
};
e.prototype.copyFrom = function(t) {
this.target = t.target;
this._defs.length = 0;
for (var e = t._defs.length, n = 0; n < e; n++) {
var o = t._defs[n], r = new i();
r.copyFrom(o);
this._defs.push(r);
}
};
e.prototype.dispose = function() {
if (this._target) {
this.releaseRefTarget(this._target);
this._target = null;
}
};
Object.defineProperty(e.prototype, "isEmpty", {
get: function() {
return 0 == this._defs.length;
},
enumerable: !1,
configurable: !0
});
e.prototype.applyOnSelfResized = function(e, i, n) {
for (var o = this._owner.x, r = this._owner.y, s = this._defs.length, a = 0; a < s; a++) switch (this._defs[a].type) {
case t.RelationType.Center_Center:
this._owner.x -= (.5 - (n ? this._owner.pivotX : 0)) * e;
break;

case t.RelationType.Right_Center:
case t.RelationType.Right_Left:
case t.RelationType.Right_Right:
this._owner.x -= (1 - (n ? this._owner.pivotX : 0)) * e;
break;

case t.RelationType.Middle_Middle:
this._owner.y -= (.5 - (n ? this._owner.pivotY : 0)) * i;
break;

case t.RelationType.Bottom_Middle:
case t.RelationType.Bottom_Top:
case t.RelationType.Bottom_Bottom:
this._owner.y -= (1 - (n ? this._owner.pivotY : 0)) * i;
}
if (o != this._owner.x || r != this._owner.y) {
o = this._owner.x - o;
r = this._owner.y - r;
this._owner.updateGearFromRelations(1, o, r);
if (this._owner.parent) {
var l = this._owner.parent._transitions.length;
if (l > 0) for (a = 0; a < l; ++a) this._owner.parent._transitions[a].updateFromRelations(this._owner.id, o, r);
}
}
};
e.prototype.applyOnXYChanged = function(e, i, n) {
var o;
switch (e.type) {
case t.RelationType.Left_Left:
case t.RelationType.Left_Center:
case t.RelationType.Left_Right:
case t.RelationType.Center_Center:
case t.RelationType.Right_Left:
case t.RelationType.Right_Center:
case t.RelationType.Right_Right:
this._owner.x += i;
break;

case t.RelationType.Top_Top:
case t.RelationType.Top_Middle:
case t.RelationType.Top_Bottom:
case t.RelationType.Middle_Middle:
case t.RelationType.Bottom_Top:
case t.RelationType.Bottom_Middle:
case t.RelationType.Bottom_Bottom:
this._owner.y += n;
break;

case t.RelationType.Width:
case t.RelationType.Height:
break;

case t.RelationType.LeftExt_Left:
case t.RelationType.LeftExt_Right:
if (this._owner != this._target.parent) {
o = this._owner.xMin;
this._owner.width = this._owner._rawWidth - i;
this._owner.xMin = o + i;
} else this._owner.width = this._owner._rawWidth - i;
break;

case t.RelationType.RightExt_Left:
case t.RelationType.RightExt_Right:
if (this._owner != this._target.parent) {
o = this._owner.xMin;
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = o;
} else this._owner.width = this._owner._rawWidth + i;
break;

case t.RelationType.TopExt_Top:
case t.RelationType.TopExt_Bottom:
if (this._owner != this._target.parent) {
o = this._owner.yMin;
this._owner.height = this._owner._rawHeight - n;
this._owner.yMin = o + n;
} else this._owner.height = this._owner._rawHeight - n;
break;

case t.RelationType.BottomExt_Top:
case t.RelationType.BottomExt_Bottom:
if (this._owner != this._target.parent) {
o = this._owner.yMin;
this._owner.height = this._owner._rawHeight + n;
this._owner.yMin = o;
} else this._owner.height = this._owner._rawHeight + n;
}
};
e.prototype.applyOnSizeChanged = function(e) {
var i, n, o = 0, r = 0, s = 0;
if (0 == e.axis) {
if (this._target != this._owner.parent) {
o = this._target.x;
this._target.pivotAsAnchor && (r = this._target.pivotX);
}
e.percent ? 0 != this._targetWidth && (s = this._target._width / this._targetWidth) : s = this._target._width - this._targetWidth;
} else {
if (this._target != this._owner.parent) {
o = this._target.y;
this._target.pivotAsAnchor && (r = this._target.pivotY);
}
e.percent ? 0 != this._targetHeight && (s = this._target._height / this._targetHeight) : s = this._target._height - this._targetHeight;
}
switch (e.type) {
case t.RelationType.Left_Left:
e.percent ? this._owner.xMin = o + (this._owner.xMin - o) * s : 0 != r && (this._owner.x += s * -r);
break;

case t.RelationType.Left_Center:
e.percent ? this._owner.xMin = o + (this._owner.xMin - o) * s : this._owner.x += s * (.5 - r);
break;

case t.RelationType.Left_Right:
e.percent ? this._owner.xMin = o + (this._owner.xMin - o) * s : this._owner.x += s * (1 - r);
break;

case t.RelationType.Center_Center:
e.percent ? this._owner.xMin = o + (this._owner.xMin + .5 * this._owner._rawWidth - o) * s - .5 * this._owner._rawWidth : this._owner.x += s * (.5 - r);
break;

case t.RelationType.Right_Left:
e.percent ? this._owner.xMin = o + (this._owner.xMin + this._owner._rawWidth - o) * s - this._owner._rawWidth : 0 != r && (this._owner.x += s * -r);
break;

case t.RelationType.Right_Center:
e.percent ? this._owner.xMin = o + (this._owner.xMin + this._owner._rawWidth - o) * s - this._owner._rawWidth : this._owner.x += s * (.5 - r);
break;

case t.RelationType.Right_Right:
e.percent ? this._owner.xMin = o + (this._owner.xMin + this._owner._rawWidth - o) * s - this._owner._rawWidth : this._owner.x += s * (1 - r);
break;

case t.RelationType.Top_Top:
e.percent ? this._owner.yMin = o + (this._owner.yMin - o) * s : 0 != r && (this._owner.y += s * -r);
break;

case t.RelationType.Top_Middle:
e.percent ? this._owner.yMin = o + (this._owner.yMin - o) * s : this._owner.y += s * (.5 - r);
break;

case t.RelationType.Top_Bottom:
e.percent ? this._owner.yMin = o + (this._owner.yMin - o) * s : this._owner.y += s * (1 - r);
break;

case t.RelationType.Middle_Middle:
e.percent ? this._owner.yMin = o + (this._owner.yMin + .5 * this._owner._rawHeight - o) * s - .5 * this._owner._rawHeight : this._owner.y += s * (.5 - r);
break;

case t.RelationType.Bottom_Top:
e.percent ? this._owner.yMin = o + (this._owner.yMin + this._owner._rawHeight - o) * s - this._owner._rawHeight : 0 != r && (this._owner.y += s * -r);
break;

case t.RelationType.Bottom_Middle:
e.percent ? this._owner.yMin = o + (this._owner.yMin + this._owner._rawHeight - o) * s - this._owner._rawHeight : this._owner.y += s * (.5 - r);
break;

case t.RelationType.Bottom_Bottom:
e.percent ? this._owner.yMin = o + (this._owner.yMin + this._owner._rawHeight - o) * s - this._owner._rawHeight : this._owner.y += s * (1 - r);
break;

case t.RelationType.Width:
i = this._owner._underConstruct && this._owner == this._target.parent ? this._owner.sourceWidth - this._target.initWidth : this._owner._rawWidth - this._targetWidth;
e.percent && (i *= s);
if (this._target == this._owner.parent) if (this._owner.pivotAsAnchor) {
n = this._owner.xMin;
this._owner.setSize(this._target._width + i, this._owner._rawHeight, !0);
this._owner.xMin = n;
} else this._owner.setSize(this._target._width + i, this._owner._rawHeight, !0); else this._owner.width = this._target._width + i;
break;

case t.RelationType.Height:
i = this._owner._underConstruct && this._owner == this._target.parent ? this._owner.sourceHeight - this._target.initHeight : this._owner._rawHeight - this._targetHeight;
e.percent && (i *= s);
if (this._target == this._owner.parent) if (this._owner.pivotAsAnchor) {
n = this._owner.yMin;
this._owner.setSize(this._owner._rawWidth, this._target._height + i, !0);
this._owner.yMin = n;
} else this._owner.setSize(this._owner._rawWidth, this._target._height + i, !0); else this._owner.height = this._target._height + i;
break;

case t.RelationType.LeftExt_Left:
n = this._owner.xMin;
i = e.percent ? o + (n - o) * s - n : s * -r;
this._owner.width = this._owner._rawWidth - i;
this._owner.xMin = n + i;
break;

case t.RelationType.LeftExt_Right:
n = this._owner.xMin;
i = e.percent ? o + (n - o) * s - n : s * (1 - r);
this._owner.width = this._owner._rawWidth - i;
this._owner.xMin = n + i;
break;

case t.RelationType.RightExt_Left:
n = this._owner.xMin;
i = e.percent ? o + (n + this._owner._rawWidth - o) * s - (n + this._owner._rawWidth) : s * -r;
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = n;
break;

case t.RelationType.RightExt_Right:
n = this._owner.xMin;
if (e.percent) if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.width = o + this._target._width - this._target._width * r + (this._owner.sourceWidth - o - this._target.initWidth + this._target.initWidth * r) * s : this._owner.width = o + (this._owner._rawWidth - o) * s; else {
i = o + (n + this._owner._rawWidth - o) * s - (n + this._owner._rawWidth);
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = n;
} else if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.width = this._owner.sourceWidth + (this._target._width - this._target.initWidth) * (1 - r) : this._owner.width = this._owner._rawWidth + s * (1 - r); else {
i = s * (1 - r);
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = n;
}
break;

case t.RelationType.TopExt_Top:
n = this._owner.yMin;
i = e.percent ? o + (n - o) * s - n : s * -r;
this._owner.height = this._owner._rawHeight - i;
this._owner.yMin = n + i;
break;

case t.RelationType.TopExt_Bottom:
n = this._owner.yMin;
i = e.percent ? o + (n - o) * s - n : s * (1 - r);
this._owner.height = this._owner._rawHeight - i;
this._owner.yMin = n + i;
break;

case t.RelationType.BottomExt_Top:
n = this._owner.yMin;
i = e.percent ? o + (n + this._owner._rawHeight - o) * s - (n + this._owner._rawHeight) : s * -r;
this._owner.height = this._owner._rawHeight + i;
this._owner.yMin = n;
break;

case t.RelationType.BottomExt_Bottom:
n = this._owner.yMin;
if (e.percent) if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.height = o + this._target._height - this._target._height * r + (this._owner.sourceHeight - o - this._target.initHeight + this._target.initHeight * r) * s : this._owner.height = o + (this._owner._rawHeight - o) * s; else {
i = o + (n + this._owner._rawHeight - o) * s - (n + this._owner._rawHeight);
this._owner.height = this._owner._rawHeight + i;
this._owner.yMin = n;
} else if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.height = this._owner.sourceHeight + (this._target._height - this._target.initHeight) * (1 - r) : this._owner.height = this._owner._rawHeight + s * (1 - r); else {
i = s * (1 - r);
this._owner.height = this._owner._rawHeight + i;
this._owner.yMin = n;
}
}
};
e.prototype.addRefTarget = function(e) {
e != this._owner.parent && e.on(t.Event.XY_CHANGED, this.__targetXYChanged, this);
e.on(t.Event.SIZE_CHANGED, this.__targetSizeChanged, this);
e.on(t.Event.SIZE_DELAY_CHANGE, this.__targetSizeWillChange, this);
this._targetX = this._target.x;
this._targetY = this._target.y;
this._targetWidth = this._target._width;
this._targetHeight = this._target._height;
};
e.prototype.releaseRefTarget = function(e) {
if (e.node) {
e.off(t.Event.XY_CHANGED, this.__targetXYChanged, this);
e.off(t.Event.SIZE_CHANGED, this.__targetSizeChanged, this);
e.off(t.Event.SIZE_DELAY_CHANGE, this.__targetSizeWillChange, this);
}
};
e.prototype.__targetXYChanged = function() {
if (null != this._owner.relations.handling || null != this._owner.group && this._owner.group._updating) {
this._targetX = this._target.x;
this._targetY = this._target.y;
} else {
this._owner.relations.handling = this._target;
for (var t = this._owner.x, e = this._owner.y, i = this._target.x - this._targetX, n = this._target.y - this._targetY, o = this._defs.length, r = 0; r < o; r++) {
var s = this._defs[r];
this.applyOnXYChanged(s, i, n);
}
this._targetX = this._target.x;
this._targetY = this._target.y;
if (t != this._owner.x || e != this._owner.y) {
t = this._owner.x - t;
e = this._owner.y - e;
this._owner.updateGearFromRelations(1, t, e);
if (this._owner.parent) {
var a = this._owner.parent._transitions.length;
if (a > 0) for (r = 0; r < a; ++r) this._owner.parent._transitions[r].updateFromRelations(this._owner.id, t, e);
}
}
this._owner.relations.handling = null;
}
};
e.prototype.__targetSizeChanged = function() {
if (null == this._owner.relations.handling) {
this._owner.relations.handling = this._target;
for (var e = this._owner.x, i = this._owner.y, n = this._owner._rawWidth, o = this._owner._rawHeight, r = this._defs.length, s = 0; s < r; s++) {
var a = this._defs[s];
this.applyOnSizeChanged(a);
}
if (null != this._owner.data && "string" == typeof this._owner.data) {
var l = this._owner.data.toLowerCase();
if (l.indexOf("safearealeft") >= 0) {
this._owner.xMin += t.UIConfig.safeAreaLeft;
this._owner.data = null;
} else if (l.indexOf("safearearight") >= 0) {
this._owner.x -= t.UIConfig.safeAreaLeft;
this._owner.data = null;
}
}
this._targetWidth = this._target._width;
this._targetHeight = this._target._height;
if (e != this._owner.x || i != this._owner.y) {
e = this._owner.x - e;
i = this._owner.y - i;
this._owner.updateGearFromRelations(1, e, i);
if (this._owner.parent) {
var h = this._owner.parent._transitions.length;
if (h > 0) for (s = 0; s < h; ++s) this._owner.parent._transitions[s].updateFromRelations(this._owner.id, e, i);
}
}
if (n != this._owner._rawWidth || o != this._owner._rawHeight) {
n = this._owner._rawWidth - n;
o = this._owner._rawHeight - o;
this._owner.updateGearFromRelations(2, n, o);
}
this._owner.relations.handling = null;
}
};
e.prototype.__targetSizeWillChange = function() {
this._owner.relations.sizeDirty = !0;
};
return e;
}();
t.RelationItem = e;
var i = function() {
function t() {}
t.prototype.copyFrom = function(t) {
this.percent = t.percent;
this.type = t.type;
this.axis = t.axis;
};
return t;
}();
t.RelationDef = i;
})(t || (t = {}));
(function(t) {
var e = function() {
function e(t) {
this._owner = t;
this._items = new Array();
}
e.prototype.add = function(e, i, n) {
for (var o = this._items.length, r = 0; r < o; r++) {
var s = this._items[r];
if (s.target == e) {
s.add(i, n);
return;
}
}
var a = new t.RelationItem(this._owner);
a.target = e;
a.add(i, n);
this._items.push(a);
};
e.prototype.remove = function(t, e) {
e = e || 0;
for (var i = this._items.length, n = 0; n < i; ) {
var o = this._items[n];
if (o.target == t) {
o.remove(e);
if (o.isEmpty) {
o.dispose();
this._items.splice(n, 1);
i--;
} else n++;
} else n++;
}
};
e.prototype.contains = function(t) {
for (var e = this._items.length, i = 0; i < e; i++) if (this._items[i].target == t) return !0;
return !1;
};
e.prototype.clearFor = function(t) {
for (var e = this._items.length, i = 0; i < e; ) {
var n = this._items[i];
if (n.target == t) {
n.dispose();
this._items.splice(i, 1);
e--;
} else i++;
}
};
e.prototype.clearAll = function() {
for (var t = this._items.length, e = 0; e < t; e++) this._items[e].dispose();
this._items.length = 0;
};
e.prototype.copyFrom = function(e) {
this.clearAll();
for (var i = e._items, n = i.length, o = 0; o < n; o++) {
var r = i[o], s = new t.RelationItem(this._owner);
s.copyFrom(r);
this._items.push(s);
}
};
e.prototype.dispose = function() {
this.clearAll();
};
e.prototype.onOwnerSizeChanged = function(t, e, i) {
if (0 != this._items.length) for (var n = this._items.length, o = 0; o < n; o++) this._items[o].applyOnSelfResized(t, e, i);
};
e.prototype.ensureRelationsSizeCorrect = function() {
if (0 != this._items.length) {
this.sizeDirty = !1;
for (var t = this._items.length, e = 0; e < t; e++) this._items[e].target.ensureSizeCorrect();
}
};
Object.defineProperty(e.prototype, "empty", {
get: function() {
return 0 == this._items.length;
},
enumerable: !1,
configurable: !0
});
e.prototype.setup = function(e, i) {
for (var n, o = e.readByte(), r = 0; r < o; r++) {
var s = e.readShort();
n = -1 == s ? this._owner.parent : i ? this._owner.getChildAt(s) : this._owner.parent.getChildAt(s);
var a = new t.RelationItem(this._owner);
a.target = n;
this._items.push(a);
for (var l = e.readByte(), h = 0; h < l; h++) {
var c = e.readByte(), u = e.readBool();
a.internalAdd(c, u);
}
}
};
return e;
}();
t.Relations = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(c, e);
function c() {
var t = null !== e && e.apply(this, arguments) || this;
t._aniFlag = 0;
return t;
}
c.prototype.setup = function(e) {
var i = this._owner = this.node.$gobj;
this._maskContainer = new cc.Node("ScrollPane");
this._maskContainer.setAnchorPoint(0, 1);
this._maskContainer.parent = i.node;
this._container = i._container;
this._container.parent = this._maskContainer;
this._scrollBarMargin = new t.Margin();
this._mouseWheelEnabled = !0;
this._xPos = 0;
this._yPos = 0;
this._aniFlag = 0;
this._tweening = 0;
this._footerLockedSize = 0;
this._headerLockedSize = 0;
this._viewSize = new cc.Vec2();
this._contentSize = new cc.Vec2();
this._pageSize = new cc.Vec2(1, 1);
this._overlapSize = new cc.Vec2();
this._tweenTime = new cc.Vec2();
this._tweenStart = new cc.Vec2();
this._tweenDuration = new cc.Vec2();
this._tweenChange = new cc.Vec2();
this._velocity = new cc.Vec2();
this._containerPos = new cc.Vec2();
this._beginTouchPos = new cc.Vec2();
this._lastTouchPos = new cc.Vec2();
this._lastTouchGlobalPos = new cc.Vec2();
this._scrollStep = t.UIConfig.defaultScrollStep;
this._mouseWheelStep = 2 * this._scrollStep;
this._decelerationRate = t.UIConfig.defaultScrollDecelerationRate;
this._snappingPolicy = 0;
i.on(t.Event.TOUCH_BEGIN, this.onTouchBegin, this);
i.on(t.Event.TOUCH_MOVE, this.onTouchMove, this);
i.on(t.Event.TOUCH_END, this.onTouchEnd, this);
i.on(t.Event.MOUSE_WHEEL, this.onMouseWheel, this);
this._scrollType = e.readByte();
var n = e.readByte(), o = e.readInt();
if (e.readBool()) {
this._scrollBarMargin.top = e.readInt();
this._scrollBarMargin.bottom = e.readInt();
this._scrollBarMargin.left = e.readInt();
this._scrollBarMargin.right = e.readInt();
}
var r = e.readS(), s = e.readS(), a = e.readS(), l = e.readS();
0 != (1 & o) && (this._displayOnLeft = !0);
0 != (2 & o) && (this._snapToItem = !0);
0 != (4 & o) && (this._displayInDemand = !0);
0 != (8 & o) && (this._pageMode = !0);
this._touchEffect = !!(16 & o) || !(32 & o) && t.UIConfig.defaultScrollTouchEffect;
this._bouncebackEffect = !!(64 & o) || !(128 & o) && t.UIConfig.defaultScrollBounceEffect;
0 != (256 & o) && (this._inertiaDisabled = !0);
0 == (512 & o) && this._maskContainer.addComponent(cc.Mask);
0 != (1024 & o) && (this._floating = !0);
0 != (2048 & o) && (this._dontClipMargin = !0);
n == t.ScrollBarDisplayType.Default && (n = t.UIConfig.defaultScrollBarDisplay);
if (n != t.ScrollBarDisplayType.Hidden) {
if ((this._scrollType == t.ScrollType.Both || this._scrollType == t.ScrollType.Vertical) && (h = r || t.UIConfig.verticalScrollBar)) {
this._vtScrollBar = t.UIPackage.createObjectFromURL(h);
if (!this._vtScrollBar) throw "cannot create scrollbar from " + h;
this._vtScrollBar.setScrollPane(this, !0);
this._vtScrollBar.node.parent = i.node;
}
if (this._scrollType == t.ScrollType.Both || this._scrollType == t.ScrollType.Horizontal) {
var h;
if (h = s || t.UIConfig.horizontalScrollBar) {
this._hzScrollBar = t.UIPackage.createObjectFromURL(h);
if (!this._hzScrollBar) throw "cannot create scrollbar from " + h;
this._hzScrollBar.setScrollPane(this, !1);
this._hzScrollBar.node.parent = i.node;
}
}
n == t.ScrollBarDisplayType.Auto && (this._scrollBarDisplayAuto = !0);
if (this._scrollBarDisplayAuto) {
this._vtScrollBar && (this._vtScrollBar.node.active = !1);
this._hzScrollBar && (this._hzScrollBar.node.active = !1);
i.on(t.Event.ROLL_OVER, this.onRollOver, this);
i.on(t.Event.ROLL_OUT, this.onRollOut, this);
}
}
if (a) {
this._header = t.UIPackage.createObjectFromURL(a);
if (null == this._header) throw "cannot create scrollPane header from " + a;
this._maskContainer.insertChild(this._header.node, 0);
}
if (l) {
this._footer = t.UIPackage.createObjectFromURL(l);
if (null == this._footer) throw "cannot create scrollPane footer from " + l;
this._maskContainer.insertChild(this._footer.node, 0);
}
this._refreshBarAxis = this._scrollType == t.ScrollType.Both || this._scrollType == t.ScrollType.Vertical ? "y" : "x";
this.setSize(i.width, i.height);
};
c.prototype.onDestroy = function() {
delete this._pageController;
this._hzScrollBar && this._hzScrollBar.dispose();
this._vtScrollBar && this._vtScrollBar.dispose();
this._header && this._header.dispose();
this._footer && this._footer.dispose();
};
c.prototype.hitTest = function(t, e) {
var i;
return this._vtScrollBar && (i = this._vtScrollBar.hitTest(e)) ? i : this._hzScrollBar && (i = this._hzScrollBar.hitTest(e)) ? i : this._header && this._header.node.activeInHierarchy && (i = this._header.hitTest(e)) ? i : this._footer && this._footer.node.activeInHierarchy && (i = this._footer.hitTest(e)) ? i : t.x >= this._owner.margin.left && t.y >= this._owner.margin.top && t.x < this._owner.margin.left + this._viewSize.x && t.y < this._owner.margin.top + this._viewSize.y ? this._owner : null;
};
Object.defineProperty(c.prototype, "owner", {
get: function() {
return this._owner;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "hzScrollBar", {
get: function() {
return this._hzScrollBar;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "vtScrollBar", {
get: function() {
return this._vtScrollBar;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "header", {
get: function() {
return this._header;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "footer", {
get: function() {
return this._footer;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "bouncebackEffect", {
get: function() {
return this._bouncebackEffect;
},
set: function(t) {
this._bouncebackEffect = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "touchEffect", {
get: function() {
return this._touchEffect;
},
set: function(t) {
this._touchEffect = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "scrollStep", {
get: function() {
return this._scrollStep;
},
set: function(e) {
this._scrollStep = e;
0 == this._scrollStep && (this._scrollStep = t.UIConfig.defaultScrollStep);
this._mouseWheelStep = 2 * this._scrollStep;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "decelerationRate", {
get: function() {
return this._decelerationRate;
},
set: function(t) {
this._decelerationRate = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "snapToItem", {
get: function() {
return this._snapToItem;
},
set: function(t) {
this._snapToItem = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "snappingPolicy", {
get: function() {
return this._snappingPolicy;
},
set: function(t) {
this._snappingPolicy = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "mouseWheelEnabled", {
get: function() {
return this._mouseWheelEnabled;
},
set: function(t) {
this._mouseWheelEnabled = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "isDragged", {
get: function() {
return this._dragged;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "percX", {
get: function() {
return 0 == this._overlapSize.x ? 0 : this._xPos / this._overlapSize.x;
},
set: function(t) {
this.setPercX(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPercX = function(e, i) {
this._owner.ensureBoundsCorrect();
this.setPosX(this._overlapSize.x * t.ToolSet.clamp01(e), i);
};
Object.defineProperty(c.prototype, "percY", {
get: function() {
return 0 == this._overlapSize.y ? 0 : this._yPos / this._overlapSize.y;
},
set: function(t) {
this.setPercY(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPercY = function(e, i) {
this._owner.ensureBoundsCorrect();
this.setPosY(this._overlapSize.y * t.ToolSet.clamp01(e), i);
};
Object.defineProperty(c.prototype, "posX", {
get: function() {
return this._xPos;
},
set: function(t) {
this.setPosX(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPosX = function(e, i) {
this._owner.ensureBoundsCorrect();
1 == this._loop && (e = this.loopCheckingNewPos(e, "x"));
if ((e = t.ToolSet.clamp(e, 0, this._overlapSize.x)) != this._xPos) {
this._xPos = e;
this.posChanged(i);
}
};
Object.defineProperty(c.prototype, "posY", {
get: function() {
return this._yPos;
},
set: function(t) {
this.setPosY(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPosY = function(e, i) {
this._owner.ensureBoundsCorrect();
1 == this._loop && (e = this.loopCheckingNewPos(e, "y"));
if ((e = t.ToolSet.clamp(e, 0, this._overlapSize.y)) != this._yPos) {
this._yPos = e;
this.posChanged(i);
}
};
Object.defineProperty(c.prototype, "contentWidth", {
get: function() {
return this._contentSize.x;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "contentHeight", {
get: function() {
return this._contentSize.y;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "viewWidth", {
get: function() {
return this._viewSize.x;
},
set: function(t) {
t = t + this._owner.margin.left + this._owner.margin.right;
this._vtScrollBar && !this._floating && (t += this._vtScrollBar.width);
this._owner.width = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "viewHeight", {
get: function() {
return this._viewSize.y;
},
set: function(t) {
t = t + this._owner.margin.top + this._owner.margin.bottom;
this._hzScrollBar && !this._floating && (t += this._hzScrollBar.height);
this._owner.height = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "currentPageX", {
get: function() {
if (!this._pageMode) return 0;
var t = Math.floor(this._xPos / this._pageSize.x);
this._xPos - t * this._pageSize.x > .5 * this._pageSize.x && t++;
return t;
},
set: function(t) {
this.setCurrentPageX(t, !1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "currentPageY", {
get: function() {
if (!this._pageMode) return 0;
var t = Math.floor(this._yPos / this._pageSize.y);
this._yPos - t * this._pageSize.y > .5 * this._pageSize.y && t++;
return t;
},
set: function(t) {
this.setCurrentPageY(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setCurrentPageX = function(t, e) {
if (this._pageMode) {
this._owner.ensureBoundsCorrect();
this._overlapSize.x > 0 && this.setPosX(t * this._pageSize.x, e);
}
};
c.prototype.setCurrentPageY = function(t, e) {
if (this._pageMode) {
this._owner.ensureBoundsCorrect();
this._overlapSize.y > 0 && this.setPosY(t * this._pageSize.y, e);
}
};
Object.defineProperty(c.prototype, "isBottomMost", {
get: function() {
return this._yPos == this._overlapSize.y || 0 == this._overlapSize.y;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "isRightMost", {
get: function() {
return this._xPos == this._overlapSize.x || 0 == this._overlapSize.x;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "pageController", {
get: function() {
return this._pageController;
},
set: function(t) {
this._pageController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "scrollingPosX", {
get: function() {
return t.ToolSet.clamp(-this._container.x, 0, this._overlapSize.x);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "scrollingPosY", {
get: function() {
return t.ToolSet.clamp(- -this._container.y, 0, this._overlapSize.y);
},
enumerable: !1,
configurable: !0
});
c.prototype.scrollTop = function(t) {
this.setPercY(0, t);
};
c.prototype.scrollBottom = function(t) {
this.setPercY(1, t);
};
c.prototype.scrollUp = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosY(this._yPos - this._pageSize.y * t, e) : this.setPosY(this._yPos - this._scrollStep * t, e);
};
c.prototype.scrollDown = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosY(this._yPos + this._pageSize.y * t, e) : this.setPosY(this._yPos + this._scrollStep * t, e);
};
c.prototype.scrollLeft = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosX(this._xPos - this._pageSize.x * t, e) : this.setPosX(this._xPos - this._scrollStep * t, e);
};
c.prototype.scrollRight = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosX(this._xPos + this._pageSize.x * t, e) : this.setPosX(this._xPos + this._scrollStep * t, e);
};
c.prototype.scrollToView = function(e, i, n) {
this._owner.ensureBoundsCorrect();
this._needRefresh && this.refresh();
var o;
if (e instanceof t.GObject) if (e.parent != this._owner) {
e.parent.localToGlobalRect(e.x, e.y, e.width, e.height, a);
o = this._owner.globalToLocalRect(a.x, a.y, a.width, a.height, a);
} else {
(o = a).x = e.x;
o.y = e.y;
o.width = e.width;
o.height = e.height;
} else o = e;
if (this._overlapSize.y > 0) {
var r = this._yPos + this._viewSize.y;
n || o.y <= this._yPos || o.height >= this._viewSize.y ? this._pageMode ? this.setPosY(Math.floor(o.y / this._pageSize.y) * this._pageSize.y, i) : this.setPosY(o.y, i) : o.y + o.height > r && (this._pageMode ? this.setPosY(Math.floor(o.y / this._pageSize.y) * this._pageSize.y, i) : o.height <= this._viewSize.y / 2 ? this.setPosY(o.y + 2 * o.height - this._viewSize.y, i) : this.setPosY(o.y + o.height - this._viewSize.y, i));
}
if (this._overlapSize.x > 0) {
var s = this._xPos + this._viewSize.x;
n || o.x <= this._xPos || o.width >= this._viewSize.x ? this._pageMode ? this.setPosX(Math.floor(o.x / this._pageSize.x) * this._pageSize.x, i) : this.setPosX(o.x, i) : o.x + o.width > s && (this._pageMode ? this.setPosX(Math.floor(o.x / this._pageSize.x) * this._pageSize.x, i) : o.width <= this._viewSize.x / 2 ? this.setPosX(o.x + 2 * o.width - this._viewSize.x, i) : this.setPosX(o.x + o.width - this._viewSize.x, i));
}
!i && this._needRefresh && this.refresh();
};
c.prototype.isChildInView = function(t) {
if (this._overlapSize.y > 0) {
var e = t.y + -this._container.y;
if (e < -t.height || e > this._viewSize.y) return !1;
}
return !(this._overlapSize.x > 0 && ((e = t.x + this._container.x) < -t.width || e > this._viewSize.x));
};
c.prototype.cancelDragging = function() {
c.draggingPane == this && (c.draggingPane = null);
i = 0;
this._dragged = !1;
};
c.prototype.lockHeader = function(t) {
if (this._headerLockedSize != t) {
var e = this._container.x, i = -this._container.y, n = "x" == this._refreshBarAxis ? e : i;
this._headerLockedSize = t;
if (!this._refreshEventDispatching && n >= 0) {
this._tweenStart.x = e;
this._tweenStart.y = i;
this._tweenChange.set(cc.Vec2.ZERO);
this._tweenChange[this._refreshBarAxis] = this._headerLockedSize - this._tweenStart[this._refreshBarAxis];
this._tweenDuration.x = this._tweenDuration.y = o;
this.startTween(2);
}
}
};
c.prototype.lockFooter = function(t) {
if (this._footerLockedSize != t) {
var e = this._container.x, i = -this._container.y, n = "x" == this._refreshBarAxis ? e : i;
this._footerLockedSize = t;
if (!this._refreshEventDispatching && n <= -this._overlapSize[this._refreshBarAxis]) {
this._tweenStart.x = e;
this._tweenStart.y = i;
this._tweenChange.set(cc.Vec2.ZERO);
var r = this._overlapSize[this._refreshBarAxis];
0 == r ? r = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : r += this._footerLockedSize;
this._tweenChange[this._refreshBarAxis] = -r - this._tweenStart[this._refreshBarAxis];
this._tweenDuration.x = this._tweenDuration.y = o;
this.startTween(2);
}
}
};
c.prototype.onOwnerSizeChanged = function() {
this.setSize(this._owner.width, this._owner.height);
this.posChanged(!1);
};
c.prototype.handleControllerChanged = function(e) {
this._pageController == e && (this._scrollType == t.ScrollType.Horizontal ? this.setCurrentPageX(e.selectedIndex, !0) : this.setCurrentPageY(e.selectedIndex, !0));
};
c.prototype.updatePageController = function() {
if (this._pageController && !this._pageController.changing) {
var e;
if ((e = this._scrollType == t.ScrollType.Horizontal ? this.currentPageX : this.currentPageY) < this._pageController.pageCount) {
var i = this._pageController;
this._pageController = null;
i.selectedIndex = e;
this._pageController = i;
}
}
};
c.prototype.adjustMaskContainer = function() {
var t = 0;
this._displayOnLeft && this._vtScrollBar && !this._floating && (t = this._vtScrollBar.width);
var e = this._owner;
this._dontClipMargin ? this._maskContainer.setAnchorPoint((e.margin.left + e._alignOffset.x) / e.width, 1 - (e.margin.top + e._alignOffset.y) / e.height) : this._maskContainer.setAnchorPoint(e._alignOffset.x / this._viewSize.x, 1 - e._alignOffset.y / this._viewSize.y);
e._customMask ? this._maskContainer.setPosition(t + e._alignOffset.x, -e._alignOffset.y) : this._maskContainer.setPosition(e._pivotCorrectX + t + e._alignOffset.x, e._pivotCorrectY - e._alignOffset.y);
};
c.prototype.setSize = function(t, e) {
if (this._hzScrollBar) {
this._hzScrollBar.y = e - this._hzScrollBar.height;
if (this._vtScrollBar) {
this._hzScrollBar.width = t - this._vtScrollBar.width - this._scrollBarMargin.left - this._scrollBarMargin.right;
this._displayOnLeft ? this._hzScrollBar.x = this._scrollBarMargin.left + this._vtScrollBar.width : this._hzScrollBar.x = this._scrollBarMargin.left;
} else {
this._hzScrollBar.width = t - this._scrollBarMargin.left - this._scrollBarMargin.right;
this._hzScrollBar.x = this._scrollBarMargin.left;
}
}
if (this._vtScrollBar) {
this._displayOnLeft || (this._vtScrollBar.x = t - this._vtScrollBar.width);
this._hzScrollBar ? this._vtScrollBar.height = e - this._hzScrollBar.height - this._scrollBarMargin.top - this._scrollBarMargin.bottom : this._vtScrollBar.height = e - this._scrollBarMargin.top - this._scrollBarMargin.bottom;
this._vtScrollBar.y = this._scrollBarMargin.top;
}
this._viewSize.x = t;
this._viewSize.y = e;
this._hzScrollBar && !this._floating && (this._viewSize.y -= this._hzScrollBar.height);
this._vtScrollBar && !this._floating && (this._viewSize.x -= this._vtScrollBar.width);
this._viewSize.x -= this._owner.margin.left + this._owner.margin.right;
this._viewSize.y -= this._owner.margin.top + this._owner.margin.bottom;
this._viewSize.x = Math.max(1, this._viewSize.x);
this._viewSize.y = Math.max(1, this._viewSize.y);
this._pageSize.x = this._viewSize.x;
this._pageSize.y = this._viewSize.y;
this.adjustMaskContainer();
this.handleSizeChanged();
};
c.prototype.setContentSize = function(t, e) {
if (this._contentSize.x != t || this._contentSize.y != e) {
this._contentSize.x = t;
this._contentSize.y = e;
this.handleSizeChanged();
this._snapToItem && 0 != this._snappingPolicy && 0 == this._xPos && 0 == this._yPos && this.posChanged(!1);
}
};
c.prototype.changeContentSizeOnScrolling = function(t, e, i, n) {
var o = this._xPos == this._overlapSize.x, r = this._yPos == this._overlapSize.y;
this._contentSize.x += t;
this._contentSize.y += e;
this.handleSizeChanged();
if (1 == this._tweening) {
if (0 != t && o && this._tweenChange.x < 0) {
this._xPos = this._overlapSize.x;
this._tweenChange.x = -this._xPos - this._tweenStart.x;
}
if (0 != e && r && this._tweenChange.y < 0) {
this._yPos = this._overlapSize.y;
this._tweenChange.y = -this._yPos - this._tweenStart.y;
}
} else if (2 == this._tweening) {
if (0 != i) {
this._container.x -= i;
this._tweenStart.x -= i;
this._xPos = -this._container.x;
}
if (0 != n) {
this._container.y += n;
this._tweenStart.y -= n;
this._yPos = - -this._container.y;
}
} else if (this._dragged) {
if (0 != i) {
this._container.x -= i;
this._containerPos.x -= i;
this._xPos = -this._container.x;
}
if (0 != n) {
this._container.y += n;
this._containerPos.y -= n;
this._yPos = - -this._container.y;
}
} else {
if (0 != t && o) {
this._xPos = this._overlapSize.x;
this._container.x = -this._xPos;
}
if (0 != e && r) {
this._yPos = this._overlapSize.y;
this._container.y = this._yPos;
}
}
this._pageMode && this.updatePageController();
};
c.prototype.handleSizeChanged = function() {
if (this._displayInDemand) {
this._vScrollNone = this._contentSize.y <= this._viewSize.y;
this._hScrollNone = this._contentSize.x <= this._viewSize.x;
}
this._vtScrollBar && (0 == this._contentSize.y ? this._vtScrollBar.setDisplayPerc(0) : this._vtScrollBar.setDisplayPerc(Math.min(1, this._viewSize.y / this._contentSize.y)));
this._hzScrollBar && (0 == this._contentSize.x ? this._hzScrollBar.setDisplayPerc(0) : this._hzScrollBar.setDisplayPerc(Math.min(1, this._viewSize.x / this._contentSize.x)));
this.updateScrollBarVisible();
var e = this._viewSize.x, i = this._viewSize.y;
this._vScrollNone && this._vtScrollBar && (e += this._vtScrollBar.width);
this._hScrollNone && this._hzScrollBar && (i += this._hzScrollBar.height);
if (this._dontClipMargin) {
e += this._owner.margin.left + this._owner.margin.right;
i += this._owner.margin.top + this._owner.margin.bottom;
}
this._maskContainer.setContentSize(e, i);
this._vtScrollBar && this._vtScrollBar.handlePositionChanged();
this._hzScrollBar && this._hzScrollBar.handlePositionChanged();
this._header && this._header.handlePositionChanged();
this._footer && this._footer.handlePositionChanged();
this._scrollType == t.ScrollType.Horizontal || this._scrollType == t.ScrollType.Both ? this._overlapSize.x = Math.ceil(Math.max(0, this._contentSize.x - this._viewSize.x)) : this._overlapSize.x = 0;
this._scrollType == t.ScrollType.Vertical || this._scrollType == t.ScrollType.Both ? this._overlapSize.y = Math.ceil(Math.max(0, this._contentSize.y - this._viewSize.y)) : this._overlapSize.y = 0;
this._xPos = t.ToolSet.clamp(this._xPos, 0, this._overlapSize.x);
this._yPos = t.ToolSet.clamp(this._yPos, 0, this._overlapSize.y);
var n = this._overlapSize[this._refreshBarAxis];
0 == n ? n = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : n += this._footerLockedSize;
"x" == this._refreshBarAxis ? this._container.setPosition(t.ToolSet.clamp(this._container.x, -n, this._headerLockedSize), -t.ToolSet.clamp(-this._container.y, -this._overlapSize.y, 0)) : this._container.setPosition(t.ToolSet.clamp(this._container.x, -this._overlapSize.x, 0), -t.ToolSet.clamp(-this._container.y, -n, this._headerLockedSize));
this._header && ("x" == this._refreshBarAxis ? this._header.height = this._viewSize.y : this._header.width = this._viewSize.x);
this._footer && ("y" == this._refreshBarAxis ? this._footer.height = this._viewSize.y : this._footer.width = this._viewSize.x);
this.updateScrollBarPos();
this._pageMode && this.updatePageController();
};
c.prototype.posChanged = function(t) {
0 == this._aniFlag ? this._aniFlag = t ? 1 : -1 : 1 != this._aniFlag || t || (this._aniFlag = -1);
this._needRefresh = !0;
cc.director.getScheduler().isScheduled(this.refresh, this) || this.scheduleOnce(this.refresh);
};
c.prototype.refresh = function() {
this._needRefresh = !1;
this.unschedule(this.refresh);
if (this._pageMode || this._snapToItem) {
l.x = -this._xPos;
l.y = -this._yPos;
this.alignPosition(l, !1);
this._xPos = -l.x;
this._yPos = -l.y;
}
this.refresh2();
this._owner.node.emit(t.Event.SCROLL, this._owner);
if (this._needRefresh) {
this._needRefresh = !1;
this.unschedule(this.refresh);
this.refresh2();
}
this.updateScrollBarPos();
this._aniFlag = 0;
};
c.prototype.refresh2 = function() {
if (1 != this._aniFlag || this._dragged) {
0 != this._tweening && this.killTween();
this._container.setPosition(Math.floor(-this._xPos), -Math.floor(-this._yPos));
this.loopCheckingCurrent();
} else {
var t, e;
if (this._overlapSize.x > 0) t = -Math.floor(this._xPos); else {
0 != this._container.x && (this._container.x = 0);
t = 0;
}
if (this._overlapSize.y > 0) e = -Math.floor(this._yPos); else {
0 != this._container.y && (this._container.y = 0);
e = 0;
}
if (t != this._container.x || e != -this._container.y) {
this._tweenDuration.x = this._tweenDuration.y = n;
this._tweenStart.x = this._container.x;
this._tweenStart.y = -this._container.y;
this._tweenChange.x = t - this._tweenStart.x;
this._tweenChange.y = e - this._tweenStart.y;
this.startTween(1);
} else 0 != this._tweening && this.killTween();
}
this._pageMode && this.updatePageController();
};
c.prototype.onTouchBegin = function(e) {
if (this._touchEffect) {
e.captureTouch();
if (0 != this._tweening) {
this.killTween();
t.GRoot.inst.inputProcessor.cancelClick(e.touchId);
this._dragged = !0;
} else this._dragged = !1;
var i = this._owner.globalToLocal(e.pos.x, e.pos.y, s);
this._containerPos.x = this._container.x;
this._containerPos.y = -this._container.y;
this._beginTouchPos.set(i);
this._lastTouchPos.set(i);
this._lastTouchGlobalPos.set(e.pos);
this._isHoldAreaDone = !1;
this._velocity.set(cc.Vec2.ZERO);
this._velocityScale = 1;
this._lastMoveTime = t.ToolSet.getTime();
}
};
c.prototype.onTouchMove = function(e) {
if (cc.isValid(this._owner.node) && this._touchEffect && !(t.GObject.draggingObject && t.GObject.draggingObject.onStage || c.draggingPane && c.draggingPane != this && c.draggingPane._owner.onStage)) {
var n, o, a, l = this._owner.globalToLocal(e.pos.x, e.pos.y, s), h = t.UIConfig.touchScrollSensitivity;
if (this._scrollType == t.ScrollType.Vertical) {
if (!this._isHoldAreaDone) {
i |= 1;
if ((n = Math.abs(this._beginTouchPos.y - l.y)) < h) return;
if (0 != (2 & i) && n < Math.abs(this._beginTouchPos.x - l.x)) return;
}
o = !0;
} else if (this._scrollType == t.ScrollType.Horizontal) {
if (!this._isHoldAreaDone) {
i |= 2;
if ((n = Math.abs(this._beginTouchPos.x - l.x)) < h) return;
if (0 != (1 & i) && n < Math.abs(this._beginTouchPos.y - l.y)) return;
}
a = !0;
} else {
i = 3;
if (!this._isHoldAreaDone && (n = Math.abs(this._beginTouchPos.y - l.y)) < h && (n = Math.abs(this._beginTouchPos.x - l.x)) < h) return;
o = a = !0;
}
var u = Math.floor(this._containerPos.x + l.x - this._beginTouchPos.x), p = Math.floor(this._containerPos.y + l.y - this._beginTouchPos.y);
o && (p > 0 ? this._bouncebackEffect ? this._header && 0 != this._header.maxHeight ? this._container.y = -Math.floor(Math.min(.5 * p, this._header.maxHeight)) : this._container.y = -Math.floor(Math.min(.5 * p, this._viewSize.y * r)) : this._container.y = 0 : p < -this._overlapSize.y ? this._bouncebackEffect ? this._footer && this._footer.maxHeight > 0 ? this._container.y = -Math.floor(Math.max(.5 * (p + this._overlapSize.y), -this._footer.maxHeight) - this._overlapSize.y) : this._container.y = -Math.floor(Math.max(.5 * (p + this._overlapSize.y), -this._viewSize.y * r) - this._overlapSize.y) : this._container.y = this._overlapSize.y : this._container.y = -p);
a && (u > 0 ? this._bouncebackEffect ? this._header && 0 != this._header.maxWidth ? this._container.x = Math.floor(Math.min(.5 * u, this._header.maxWidth)) : this._container.x = Math.floor(Math.min(.5 * u, this._viewSize.x * r)) : this._container.x = 0 : u < 0 - this._overlapSize.x ? this._bouncebackEffect ? this._footer && this._footer.maxWidth > 0 ? this._container.x = Math.floor(Math.max(.5 * (u + this._overlapSize.x), -this._footer.maxWidth) - this._overlapSize.x) : this._container.x = Math.floor(Math.max(.5 * (u + this._overlapSize.x), -this._viewSize.x * r) - this._overlapSize.x) : this._container.x = -this._overlapSize.x : this._container.x = u);
var d = t.ToolSet.getTime(), f = Math.max(d - this._lastMoveTime, 1 / 60), _ = l.x - this._lastTouchPos.x, g = l.y - this._lastTouchPos.y;
a || (_ = 0);
o || (g = 0);
if (0 != f) {
var y = 60 * f - 1;
if (y > 1) {
var m = Math.pow(.833, y);
this._velocity.x = this._velocity.x * m;
this._velocity.y = this._velocity.y * m;
}
this._velocity.x = t.ToolSet.lerp(this._velocity.x, 60 * _ / 60 / f, 10 * f);
this._velocity.y = t.ToolSet.lerp(this._velocity.y, 60 * g / 60 / f, 10 * f);
}
var v = this._lastTouchGlobalPos.x - e.pos.x, b = this._lastTouchGlobalPos.y - e.pos.y;
0 != _ ? this._velocityScale = Math.abs(v / _) : 0 != g && (this._velocityScale = Math.abs(b / g));
this._lastTouchPos.set(l);
this._lastTouchGlobalPos.x = e.pos.x;
this._lastTouchGlobalPos.y = e.pos.y;
this._lastMoveTime = d;
this._overlapSize.x > 0 && (this._xPos = t.ToolSet.clamp(-this._container.x, 0, this._overlapSize.x));
this._overlapSize.y > 0 && (this._yPos = t.ToolSet.clamp(- -this._container.y, 0, this._overlapSize.y));
if (0 != this._loop) {
u = this._container.x;
p = -this._container.y;
if (this.loopCheckingCurrent()) {
this._containerPos.x += this._container.x - u;
this._containerPos.y += -this._container.y - p;
}
}
c.draggingPane = this;
this._isHoldAreaDone = !0;
this._dragged = !0;
this.updateScrollBarPos();
this.updateScrollBarVisible();
this._pageMode && this.updatePageController();
this._owner.node.emit(t.Event.SCROLL), this._owner;
}
};
c.prototype.onTouchEnd = function() {
c.draggingPane == this && (c.draggingPane = null);
i = 0;
if (this._dragged && this._touchEffect && this._owner.node.activeInHierarchy) {
this._dragged = !1;
this._tweenStart.x = this._container.x;
this._tweenStart.y = -this._container.y;
l.set(this._tweenStart);
var e = !1;
if (this._container.x > 0) {
l.x = 0;
e = !0;
} else if (this._container.x < -this._overlapSize.x) {
l.x = -this._overlapSize.x;
e = !0;
}
if (-this._container.y > 0) {
l.y = 0;
e = !0;
} else if (-this._container.y < -this._overlapSize.y) {
l.y = -this._overlapSize.y;
e = !0;
}
if (e) {
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
if (this._tweenChange.x < -t.UIConfig.touchDragSensitivity || this._tweenChange.y < -t.UIConfig.touchDragSensitivity) {
this._refreshEventDispatching = !0;
this._owner.node.emit(t.Event.PULL_DOWN_RELEASE), this._owner;
this._refreshEventDispatching = !1;
} else if (this._tweenChange.x > t.UIConfig.touchDragSensitivity || this._tweenChange.y > t.UIConfig.touchDragSensitivity) {
this._refreshEventDispatching = !0;
this._owner.node.emit(t.Event.PULL_UP_RELEASE, this._owner);
this._refreshEventDispatching = !1;
}
if (this._headerLockedSize > 0 && 0 == l[this._refreshBarAxis]) {
l[this._refreshBarAxis] = this._headerLockedSize;
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
} else if (this._footerLockedSize > 0 && l[this._refreshBarAxis] == -this._overlapSize[this._refreshBarAxis]) {
var n = this._overlapSize[this._refreshBarAxis];
0 == n ? n = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : n += this._footerLockedSize;
l[this._refreshBarAxis] = -n;
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
}
this._tweenDuration.x = this._tweenDuration.y = o;
} else {
if (this._inertiaDisabled) this._tweenDuration.x = this._tweenDuration.y = o; else {
var r = 60 * (t.ToolSet.getTime() - this._lastMoveTime) - 1;
if (r > 1) {
var s = Math.pow(.833, r);
this._velocity.x = this._velocity.x * s;
this._velocity.y = this._velocity.y * s;
}
this.updateTargetAndDuration(this._tweenStart, l);
}
h.x = l.x - this._tweenStart.x;
h.y = l.y - this._tweenStart.y;
this.loopCheckingTarget(l);
(this._pageMode || this._snapToItem) && this.alignPosition(l, !0);
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
if (0 == this._tweenChange.x && 0 == this._tweenChange.y) {
this.updateScrollBarVisible();
return;
}
if (this._pageMode || this._snapToItem) {
this.fixDuration("x", h.x);
this.fixDuration("y", h.y);
}
}
this.startTween(2);
} else this._dragged = !1;
};
c.prototype.onRollOver = function() {
this._hover = !0;
this.updateScrollBarVisible();
};
c.prototype.onRollOut = function() {
this._hover = !1;
this.updateScrollBarVisible();
};
c.prototype.onMouseWheel = function(t) {
if (this._mouseWheelEnabled) {
var e = t.mouseWheelDelta > 0 ? -1 : 1;
this._overlapSize.x > 0 && 0 == this._overlapSize.y ? this._pageMode ? this.setPosX(this._xPos + this._pageSize.x * e, !1) : this.setPosX(this._xPos + this._mouseWheelStep * e, !1) : this._pageMode ? this.setPosY(this._yPos + this._pageSize.y * e, !1) : this.setPosY(this._yPos + this._mouseWheelStep * e, !1);
}
};
c.prototype.updateScrollBarPos = function() {
this._vtScrollBar && this._vtScrollBar.setScrollPerc(0 == this._overlapSize.y ? 0 : t.ToolSet.clamp(this._container.y, 0, this._overlapSize.y) / this._overlapSize.y);
this._hzScrollBar && this._hzScrollBar.setScrollPerc(0 == this._overlapSize.x ? 0 : t.ToolSet.clamp(-this._container.x, 0, this._overlapSize.x) / this._overlapSize.x);
this.checkRefreshBar();
};
c.prototype.updateScrollBarVisible = function() {
this._vtScrollBar && (this._viewSize.y <= this._vtScrollBar.minSize || this._vScrollNone ? this._vtScrollBar.node.active = !1 : this.updateScrollBarVisible2(this._vtScrollBar));
this._hzScrollBar && (this._viewSize.x <= this._hzScrollBar.minSize || this._hScrollNone ? this._hzScrollBar.node.active = !1 : this.updateScrollBarVisible2(this._hzScrollBar));
};
c.prototype.updateScrollBarVisible2 = function(e) {
this._scrollBarDisplayAuto && t.GTween.kill(e, !1, "alpha");
if (!this._scrollBarDisplayAuto || this._hover || 0 != this._tweening || this._dragged || e.gripDragging) {
e.alpha = 1;
e.node.active = !0;
} else e.node.active && t.GTween.to(1, 0, .5).setDelay(.5).onComplete(this.__barTweenComplete, this).setTarget(e, "alpha");
};
c.prototype.__barTweenComplete = function(t) {
var e = t.target;
e.alpha = 1;
e.node.active = !1;
};
c.prototype.getLoopPartSize = function(t, e) {
return (this._contentSize[e] + ("x" == e ? this._owner.columnGap : this._owner.lineGap)) / t;
};
c.prototype.loopCheckingCurrent = function() {
var t = !1;
if (1 == this._loop && this._overlapSize.x > 0) {
if (this._xPos < .001) {
this._xPos += this.getLoopPartSize(2, "x");
t = !0;
} else if (this._xPos >= this._overlapSize.x) {
this._xPos -= this.getLoopPartSize(2, "x");
t = !0;
}
} else if (2 == this._loop && this._overlapSize.y > 0) if (this._yPos < .001) {
this._yPos += this.getLoopPartSize(2, "y");
t = !0;
} else if (this._yPos >= this._overlapSize.y) {
this._yPos -= this.getLoopPartSize(2, "y");
t = !0;
}
t && this._container.setPosition(Math.floor(-this._xPos), -Math.floor(-this._yPos));
return t;
};
c.prototype.loopCheckingTarget = function(t) {
1 == this._loop && this.loopCheckingTarget2(t, "x");
2 == this._loop && this.loopCheckingTarget2(t, "y");
};
c.prototype.loopCheckingTarget2 = function(t, e) {
var i, n;
if (t[e] > 0) {
i = this.getLoopPartSize(2, e);
if ((n = this._tweenStart[e] - i) <= 0 && n >= -this._overlapSize[e]) {
t[e] -= i;
this._tweenStart[e] = n;
}
} else if (t[e] < -this._overlapSize[e]) {
i = this.getLoopPartSize(2, e);
if ((n = this._tweenStart[e] + i) <= 0 && n >= -this._overlapSize[e]) {
t[e] += i;
this._tweenStart[e] = n;
}
}
};
c.prototype.loopCheckingNewPos = function(e, i) {
if (0 == this._overlapSize[i]) return e;
var n, o = "x" == i ? this._xPos : this._yPos, r = !1;
if (e < .001) {
if ((e += this.getLoopPartSize(2, i)) > o) {
n = this.getLoopPartSize(6, i);
n = Math.ceil((e - o) / n) * n;
o = t.ToolSet.clamp(o + n, 0, this._overlapSize[i]);
r = !0;
}
} else if (e >= this._overlapSize[i] && (e -= this.getLoopPartSize(2, i)) < o) {
n = this.getLoopPartSize(6, i);
n = Math.ceil((o - e) / n) * n;
o = t.ToolSet.clamp(o - n, 0, this._overlapSize[i]);
r = !0;
}
r && ("x" == i ? this._container.x = -Math.floor(o) : this._container.y = Math.floor(o));
return e;
};
c.prototype.alignPosition = function(t, e) {
var i = 0, n = 0;
if (1 == this._snappingPolicy) {
if (this._owner.numChildren > 0) {
var o = this._owner.getChildAt(0);
i = Math.floor(.5 * this._viewSize.x - .5 * o.width);
n = Math.floor(.5 * this._viewSize.y - .5 * o.height);
}
} else if (2 == this._snappingPolicy && this._owner.numChildren > 0) {
o = this._owner.getChildAt(0);
i = Math.floor(this._viewSize.x - o.width);
n = Math.floor(this._viewSize.y - o.height);
}
t.x -= i;
t.y -= n;
if (this._pageMode) {
t.x = this.alignByPage(t.x, "x", e);
t.y = this.alignByPage(t.y, "y", e);
} else if (this._snapToItem) {
var r = this._owner.getSnappingPosition(-t.x, -t.y, s);
t.x < 0 && t.x > -this._overlapSize.x && (t.x = -r.x);
t.y < 0 && t.y > -this._overlapSize.y && (t.y = -r.y);
}
t.x += i;
t.y += n;
};
c.prototype.alignByPage = function(t, e, i) {
var n;
if (t > 0) n = 0; else if (t < -this._overlapSize[e]) n = Math.ceil(this._contentSize[e] / this._pageSize[e]) - 1; else {
n = Math.floor(-t / this._pageSize[e]);
var o = i ? t - this._containerPos[e] : t - ("x" == e ? this._container.x : -this._container.y), r = Math.min(this._pageSize[e], this._contentSize[e] - (n + 1) * this._pageSize[e]), s = -t - n * this._pageSize[e];
Math.abs(o) > this._pageSize[e] ? s > .5 * r && n++ : s > r * (o < 0 ? .3 : .7) && n++;
(t = -n * this._pageSize[e]) < -this._overlapSize[e] && (t = -this._overlapSize[e]);
}
if (i) {
var a, l = this._tweenStart[e];
a = l > 0 ? 0 : l < -this._overlapSize[e] ? Math.ceil(this._contentSize[e] / this._pageSize[e]) - 1 : Math.floor(-l / this._pageSize[e]);
var h = Math.floor(-this._containerPos[e] / this._pageSize[e]);
Math.abs(n - h) > 1 && Math.abs(a - h) <= 1 && (t = -(n = n > h ? h + 1 : h - 1) * this._pageSize[e]);
}
return t;
};
c.prototype.updateTargetAndDuration = function(t, e) {
e.x = this.updateTargetAndDuration2(t.x, "x");
e.y = this.updateTargetAndDuration2(t.y, "y");
};
c.prototype.updateTargetAndDuration2 = function(t, e) {
var i = this._velocity[e], n = 0;
if (t > 0) t = 0; else if (t < -this._overlapSize[e]) t = -this._overlapSize[e]; else {
var r = cc.sys.isMobile, s = Math.abs(i) * this._velocityScale;
r && (s *= 1136 / Math.max(cc.winSize.width, cc.winSize.height));
var a = 0;
this._pageMode || !r ? s > 500 && (a = Math.pow((s - 500) / 500, 2)) : s > 1e3 && (a = Math.pow((s - 1e3) / 1e3, 2));
if (0 != a) {
a > 1 && (a = 1);
s *= a;
i *= a;
this._velocity[e] = i;
n = Math.log(60 / s) / Math.log(this._decelerationRate) / 60;
t += Math.floor(i * n * .4);
}
}
n < o && (n = o);
this._tweenDuration[e] = n;
return t;
};
c.prototype.fixDuration = function(t, e) {
if (!(0 == this._tweenChange[t] || Math.abs(this._tweenChange[t]) >= Math.abs(e))) {
var i = Math.abs(this._tweenChange[t] / e) * this._tweenDuration[t];
i < o && (i = o);
this._tweenDuration[t] = i;
}
};
c.prototype.startTween = function(t) {
this._tweenTime.set(cc.Vec2.ZERO);
this._tweening = t;
this.updateScrollBarVisible();
};
c.prototype.killTween = function() {
if (1 == this._tweening) {
this._container.setPosition(this._tweenStart.x + this._tweenChange.x, -(this._tweenStart.y + this._tweenChange.y));
this._owner.node.emit(t.Event.SCROLL, this._owner);
}
this._tweening = 0;
this.updateScrollBarVisible();
this._owner.node.emit(t.Event.SCROLL_END, this._owner);
};
c.prototype.checkRefreshBar = function() {
if (null != this._header || null != this._footer) {
var t = "x" == this._refreshBarAxis ? this._container.x : -this._container.y;
if (this._header) if (t > 0) {
this._header.node.active = !0;
var e = s;
e.x = this._header.width;
e.y = this._header.height;
e[this._refreshBarAxis] = t;
this._header.setSize(e.x, e.y);
} else this._header.node.active = !1;
if (this._footer) {
var i = this._overlapSize[this._refreshBarAxis];
if (t < -i || 0 == i && this._footerLockedSize > 0) {
this._footer.node.active = !0;
(e = s).x = this._footer.x;
e.y = this._footer.y;
e[this._refreshBarAxis] = i > 0 ? t + this._contentSize[this._refreshBarAxis] : Math.max(Math.min(t + this._viewSize[this._refreshBarAxis], this._viewSize[this._refreshBarAxis] - this._footerLockedSize), this._viewSize[this._refreshBarAxis] - this._contentSize[this._refreshBarAxis]);
this._footer.setPosition(e.x, e.y);
e.x = this._footer.width;
e.y = this._footer.height;
e[this._refreshBarAxis] = i > 0 ? -i - t : this._viewSize[this._refreshBarAxis] - this._footer[this._refreshBarAxis];
this._footer.setSize(e.x, e.y);
} else this._footer.node.active = !1;
}
}
};
c.prototype.update = function(e) {
if (0 != this._tweening) {
var i = this.runTween("x", e), n = this.runTween("y", e);
this._container.setPosition(i, -n);
if (2 == this._tweening) {
this._overlapSize.x > 0 && (this._xPos = t.ToolSet.clamp(-i, 0, this._overlapSize.x));
this._overlapSize.y > 0 && (this._yPos = t.ToolSet.clamp(-n, 0, this._overlapSize.y));
this._pageMode && this.updatePageController();
}
if (0 == this._tweenChange.x && 0 == this._tweenChange.y) {
this._tweening = 0;
this.loopCheckingCurrent();
this.updateScrollBarPos();
this.updateScrollBarVisible();
this._owner.node.emit(t.Event.SCROLL, this._owner);
this._owner.node.emit(t.Event.SCROLL_END, this._owner);
} else {
this.updateScrollBarPos();
this._owner.node.emit(t.Event.SCROLL, this._owner);
}
return !0;
}
};
c.prototype.runTween = function(t, e) {
var i, n;
if (0 != this._tweenChange[t]) {
this._tweenTime[t] += e;
if (this._tweenTime[t] >= this._tweenDuration[t]) {
i = this._tweenStart[t] + this._tweenChange[t];
this._tweenChange[t] = 0;
} else {
var r = (n = (n = this._tweenTime[t]) / this._tweenDuration[t] - 1) * n * n + 1;
i = this._tweenStart[t] + Math.floor(this._tweenChange[t] * r);
}
var s = 0, a = -this._overlapSize[t];
this._headerLockedSize > 0 && this._refreshBarAxis == t && (s = this._headerLockedSize);
if (this._footerLockedSize > 0 && this._refreshBarAxis == t) {
var l = this._overlapSize[this._refreshBarAxis];
0 == l ? l = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : l += this._footerLockedSize;
a = -l;
}
if (2 == this._tweening && this._bouncebackEffect) {
if (i > 20 + s && this._tweenChange[t] > 0 || i > s && 0 == this._tweenChange[t]) {
this._tweenTime[t] = 0;
this._tweenDuration[t] = o;
this._tweenChange[t] = -i + s;
this._tweenStart[t] = i;
} else if (i < a - 20 && this._tweenChange[t] < 0 || i < a && 0 == this._tweenChange[t]) {
this._tweenTime[t] = 0;
this._tweenDuration[t] = o;
this._tweenChange[t] = a - i;
this._tweenStart[t] = i;
}
} else if (i > s) {
i = s;
this._tweenChange[t] = 0;
} else if (i < a) {
i = a;
this._tweenChange[t] = 0;
}
} else i = "x" == t ? this._container.x : -this._container.y;
return i;
};
return c;
}(cc.Component);
t.ScrollPane = e;
var i = 0, n = .5, o = .3, r = .5, s = new cc.Vec2(), a = new cc.Rect(), l = new cc.Vec2(), h = new cc.Vec2();
})(t || (t = {}));
(function(t) {
var e = function() {
function e(t) {
this._ownerBaseX = 0;
this._ownerBaseY = 0;
this._totalTimes = 0;
this._totalTasks = 0;
this._options = 0;
this._totalDuration = 0;
this._autoPlayTimes = 1;
this._autoPlayDelay = 0;
this._timeScale = 1;
this._startTime = 0;
this._endTime = 0;
this._owner = t;
this._items = new Array();
}
e.prototype.play = function(t, e, i, n, o) {
this._play(t, e, i, n, o, !1);
};
e.prototype.playReverse = function(t, e, i) {
this._play(t, e, i, 0, -1, !0);
};
e.prototype.changePlayTimes = function(t) {
this._totalTimes = t;
};
e.prototype.setAutoPlay = function(t, e, i) {
null == e && (e = -1);
null == i && (i = 0);
if (this._autoPlay != t) {
this._autoPlay = t;
this._autoPlayTimes = e;
this._autoPlayDelay = i;
this._autoPlay ? this._owner.onStage && this.play(null, this._autoPlayTimes, this._autoPlayDelay) : this._owner.onStage || this.stop(!1, !0);
}
};
e.prototype._play = function(e, n, o, r, s, a) {
null == n && (n = 1);
null == o && (o = 0);
null == r && (r = 0);
null == s && (s = -1);
this.stop(!0, !0);
this._totalTimes = n;
this._reversed = a;
this._startTime = r;
this._endTime = s;
this._playing = !0;
this._paused = !1;
this._onComplete = e;
for (var l = this._items.length, h = 0; h < l; h++) {
var c = this._items[h];
null == c.target ? c.targetId ? c.target = this._owner.getChildById(c.targetId) : c.target = this._owner : c.target != this._owner && c.target.parent != this._owner && (c.target = null);
if (c.target && c.type == i.Transition) {
var u = c.target.getTransition(c.value.transName);
u == this && (u = null);
if (u) if (0 == c.value.playTimes) {
var p;
for (p = h - 1; p >= 0; p--) {
var d = this._items[p];
if (d.type == i.Transition && d.value.trans == u) {
d.value.stopTime = c.time - d.time;
break;
}
}
p < 0 ? c.value.stopTime = 0 : u = null;
} else c.value.stopTime = -1;
c.value.trans = u;
}
}
0 == o ? this.onDelayedPlay() : t.GTween.delayedCall(o).setTarget(this).onComplete(this.onDelayedPlay, this);
};
e.prototype.stop = function(e, i) {
null == e && (e = !0);
if (this._playing) {
this._playing = !1;
this._totalTasks = 0;
this._totalTimes = 0;
var n = this._onComplete;
this._onComplete = null;
t.GTween.kill(this);
var o = this._items.length;
if (this._reversed) for (var r = o - 1; r >= 0; r--) {
var s = this._items[r];
null != s.target && this.stopItem(s, e);
} else for (r = 0; r < o; r++) null != (s = this._items[r]).target && this.stopItem(s, e);
i && null != n && n();
}
};
e.prototype.stopItem = function(t, e) {
if (0 != t.displayLockToken) {
t.target.releaseDisplayLock(t.displayLockToken);
t.displayLockToken = 0;
}
if (t.tweener) {
t.tweener.kill(e);
t.tweener = null;
if (t.type == i.Shake && !e) {
t.target._gearLocked = !0;
t.target.setPosition(t.target.x - t.value.lastOffsetX, t.target.y - t.value.lastOffsetY);
t.target._gearLocked = !1;
}
}
if (t.type == i.Transition) {
var n = t.value.trans;
n && n.stop(e, !1);
}
};
e.prototype.setPaused = function(e) {
if (this._playing && this._paused != e) {
this._paused = e;
var n = t.GTween.getTween(this);
n && n.setPaused(e);
for (var o = this._items.length, r = 0; r < o; r++) {
var s = this._items[r];
if (null != s.target) {
if (s.type == i.Transition) s.value.trans && s.value.trans.setPaused(e); else if (s.type == i.Animation) if (e) {
s.value.flag = s.target.getProp(t.ObjectPropID.Playing);
s.target.setProp(t.ObjectPropID.Playing, !1);
} else s.target.setProp(t.ObjectPropID.Playing, s.value.flag);
s.tweener && s.tweener.setPaused(e);
}
}
}
};
e.prototype.dispose = function() {
this._playing && t.GTween.kill(this);
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._items[i];
if (n.tweener) {
n.tweener.kill();
n.tweener = null;
}
n.target = null;
n.hook = null;
n.tweenConfig && (n.tweenConfig.endHook = null);
}
this._items.length = 0;
this._playing = !1;
this._onComplete = null;
};
Object.defineProperty(e.prototype, "playing", {
get: function() {
return this._playing;
},
enumerable: !1,
configurable: !0
});
e.prototype.setValue = function(t) {
for (var e = [], n = 1; n < arguments.length; n++) e[n - 1] = arguments[n];
for (var o, r = this._items.length, s = 0; s < r; s++) {
var a = this._items[s];
if (a.label == t) o = a.tweenConfig ? a.tweenConfig.startValue : a.value; else {
if (!a.tweenConfig || a.tweenConfig.endLabel != t) continue;
o = a.tweenConfig.endValue;
}
switch (a.type) {
case i.XY:
case i.Size:
case i.Pivot:
case i.Scale:
case i.Skew:
o.b1 = !0;
o.b2 = !0;
o.f1 = parseFloat(e[0]);
o.f2 = parseFloat(e[1]);
break;

case i.Alpha:
case i.Rotation:
case i.Color:
o.f1 = parseFloat(e[0]);
break;

case i.Animation:
o.frame = parseInt(e[0]);
e.length > 1 && (o.playing = e[1]);
break;

case i.Visible:
o.visible = e[0];
break;

case i.Sound:
o.sound = e[0];
e.length > 1 && (o.volume = parseFloat(e[1]));
break;

case i.Transition:
o.transName = e[0];
e.length > 1 && (o.playTimes = parseInt(e[1]));
break;

case i.Shake:
o.amplitude = parseFloat(e[0]);
e.length > 1 && (o.duration = parseFloat(e[1]));
break;

case i.ColorFilter:
o.f1 = parseFloat(e[0]);
o.f2 = parseFloat(e[1]);
o.f3 = parseFloat(e[2]);
o.f4 = parseFloat(e[3]);
break;

case i.Text:
case i.Icon:
o.text = e[0];
}
}
};
e.prototype.setHook = function(t, e) {
for (var i = this._items.length, n = 0; n < i; n++) {
var o = this._items[n];
if (o.label == t) {
o.hook = e;
break;
}
if (o.tweenConfig && o.tweenConfig.endLabel == t) {
o.tweenConfig.endHook = e;
break;
}
}
};
e.prototype.clearHooks = function() {
for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
i.hook = null;
i.tweenConfig && (i.tweenConfig.endHook = null);
}
};
e.prototype.setTarget = function(t, e) {
for (var i = this._items.length, n = 0; n < i; n++) {
var o = this._items[n];
if (o.label == t) {
o.targetId = e.id;
o.target = null;
}
}
};
e.prototype.setDuration = function(t, e) {
for (var i = this._items.length, n = 0; n < i; n++) {
var o = this._items[n];
o.tweenConfig && o.label == t && (o.tweenConfig.duration = e);
}
};
e.prototype.getLabelTime = function(t) {
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._items[i];
if (n.label == t) return n.time;
if (n.tweenConfig && n.tweenConfig.endLabel == t) return n.time + n.tweenConfig.duration;
}
return Number.NaN;
};
Object.defineProperty(e.prototype, "timeScale", {
get: function() {
return this._timeScale;
},
set: function(e) {
if (this._timeScale != e) {
this._timeScale = e;
if (this._playing) for (var n = this._items.length, o = 0; o < n; o++) {
var r = this._items[o];
r.tweener ? r.tweener.setTimeScale(e) : r.type == i.Transition ? r.value.trans && (r.value.trans.timeScale = e) : r.type == i.Animation && r.target && r.target.setProp(t.ObjectPropID.TimeScale, e);
}
}
},
enumerable: !1,
configurable: !0
});
e.prototype.updateFromRelations = function(t, e, n) {
var o = this._items.length;
if (0 != o) for (var r = 0; r < o; r++) {
var s = this._items[r];
if (s.type == i.XY && s.targetId == t) if (s.tweenConfig) {
s.tweenConfig.startValue.f1 += e;
s.tweenConfig.startValue.f2 += n;
s.tweenConfig.endValue.f1 += e;
s.tweenConfig.endValue.f2 += n;
} else {
s.value.f1 += e;
s.value.f2 += n;
}
}
};
e.prototype.onEnable = function() {
this._autoPlay && !this._playing && this.play(null, this._autoPlayTimes, this._autoPlayDelay);
};
e.prototype.onDisable = function() {
0 == (this._options & o) && this.stop(0 != (this._options & r), !1);
};
e.prototype.onDelayedPlay = function() {
this.internalPlay();
this._playing = this._totalTasks > 0;
if (this._playing) {
if (0 != (this._options & n)) for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
i.target && i.target != this._owner && (i.displayLockToken = i.target.addDisplayLock());
}
} else if (null != this._onComplete) {
var o = this._onComplete;
this._onComplete = null;
o();
}
};
e.prototype.internalPlay = function() {
this._ownerBaseX = this._owner.x;
this._ownerBaseY = this._owner.y;
this._totalTasks = 1;
var t, e, n = this._items.length, o = !1;
if (this._reversed) for (e = n - 1; e >= 0; e--) null != (t = this._items[e]).target && this.playItem(t); else for (e = 0; e < n; e++) if (null != (t = this._items[e]).target) if (t.type == i.Animation && 0 != this._startTime && t.time <= this._startTime) {
o = !0;
t.value.flag = !1;
} else this.playItem(t);
o && this.skipAnimations();
this._totalTasks--;
};
e.prototype.playItem = function(e) {
var n;
if (e.tweenConfig) {
n = this._reversed ? this._totalDuration - e.time - e.tweenConfig.duration : e.time;
if (-1 == this._endTime || n <= this._endTime) {
var o, r;
if (this._reversed) {
o = e.tweenConfig.endValue;
r = e.tweenConfig.startValue;
} else {
o = e.tweenConfig.startValue;
r = e.tweenConfig.endValue;
}
e.value.b1 = o.b1 || r.b1;
e.value.b2 = o.b2 || r.b2;
switch (e.type) {
case i.XY:
case i.Size:
case i.Scale:
case i.Skew:
e.tweener = t.GTween.to2(o.f1, o.f2, r.f1, r.f2, e.tweenConfig.duration);
break;

case i.Alpha:
case i.Rotation:
e.tweener = t.GTween.to(o.f1, r.f1, e.tweenConfig.duration);
break;

case i.Color:
e.tweener = t.GTween.toColor(o.f1, r.f1, e.tweenConfig.duration);
break;

case i.ColorFilter:
e.tweener = t.GTween.to4(o.f1, o.f2, o.f3, o.f4, r.f1, r.f2, r.f3, r.f4, e.tweenConfig.duration);
}
e.tweener.setDelay(n).setEase(e.tweenConfig.easeType).setRepeat(e.tweenConfig.repeat, e.tweenConfig.yoyo).setTimeScale(this._timeScale).setTarget(e).onStart(this.onTweenStart, this).onUpdate(this.onTweenUpdate, this).onComplete(this.onTweenComplete, this);
this._endTime >= 0 && e.tweener.setBreakpoint(this._endTime - n);
this._totalTasks++;
}
} else if (e.type == i.Shake) {
n = this._reversed ? this._totalDuration - e.time - e.value.duration : e.time;
e.value.offsetX = e.value.offsetY = 0;
e.value.lastOffsetX = e.value.lastOffsetY = 0;
e.tweener = t.GTween.shake(0, 0, e.value.amplitude, e.value.duration).setDelay(n).setTimeScale(this._timeScale).setTarget(e).onUpdate(this.onTweenUpdate, this).onComplete(this.onTweenComplete, this);
this._endTime >= 0 && e.tweener.setBreakpoint(this._endTime - e.time);
this._totalTasks++;
} else if ((n = this._reversed ? this._totalDuration - e.time : e.time) <= this._startTime) {
this.applyValue(e);
this.callHook(e, !1);
} else if (-1 == this._endTime || n <= this._endTime) {
this._totalTasks++;
e.tweener = t.GTween.delayedCall(n).setTimeScale(this._timeScale).setTarget(e).onComplete(this.onDelayedPlayItem, this);
}
e.tweener && e.tweener.seek(this._startTime);
};
e.prototype.skipAnimations = function() {
for (var e, n, o, r, s, a, l = this._items.length, h = 0; h < l; h++) if (!((a = this._items[h]).type != i.Animation || a.time > this._startTime || (r = a.value).flag)) {
e = (s = a.target).getProp(t.ObjectPropID.Frame);
n = s.getProp(t.ObjectPropID.Playing) ? 0 : -1;
o = 0;
for (var c = h; c < l; c++) if (!((a = this._items[c]).type != i.Animation || a.target != s || a.time > this._startTime)) {
(r = a.value).flag = !0;
if (-1 != r.frame) {
e = r.frame;
n = r.playing ? a.time : -1;
o = 0;
} else if (r.playing) n < 0 && (n = a.time); else {
n >= 0 && (o += a.time - n);
n = -1;
}
this.callHook(a, !1);
}
n >= 0 && (o += this._startTime - n);
s.setProp(t.ObjectPropID.Playing, n >= 0);
s.setProp(t.ObjectPropID.Frame, e);
o > 0 && s.setProp(t.ObjectPropID.DeltaTime, o);
}
};
e.prototype.onDelayedPlayItem = function(t) {
var e = t.target;
e.tweener = null;
this._totalTasks--;
this.applyValue(e);
this.callHook(e, !1);
this.checkAllComplete();
};
e.prototype.onTweenStart = function(t) {
var e = t.target;
if (e.type == i.XY || e.type == i.Size) {
var n, o;
if (this._reversed) {
n = e.tweenConfig.endValue;
o = e.tweenConfig.startValue;
} else {
n = e.tweenConfig.startValue;
o = e.tweenConfig.endValue;
}
if (e.type == i.XY) if (e.target != this._owner) {
n.b1 ? n.b3 && (t.startValue.x = n.f1 * this._owner.width) : t.startValue.x = e.target.x;
n.b2 ? n.b3 && (t.startValue.y = n.f2 * this._owner.height) : t.startValue.y = e.target.y;
o.b1 ? o.b3 && (t.endValue.x = o.f1 * this._owner.width) : t.endValue.x = t.startValue.x;
o.b2 ? o.b3 && (t.endValue.y = o.f2 * this._owner.height) : t.endValue.y = t.startValue.y;
} else {
n.b1 || (t.startValue.x = e.target.x - this._ownerBaseX);
n.b2 || (t.startValue.y = e.target.y - this._ownerBaseY);
o.b1 || (t.endValue.x = t.startValue.x);
o.b2 || (t.endValue.y = t.startValue.y);
} else {
n.b1 || (t.startValue.x = e.target.width);
n.b2 || (t.startValue.y = e.target.height);
o.b1 || (t.endValue.x = t.startValue.x);
o.b2 || (t.endValue.y = t.startValue.y);
}
if (e.tweenConfig.path) {
e.value.b1 = e.value.b2 = !0;
t.setPath(e.tweenConfig.path);
}
}
this.callHook(e, !1);
};
e.prototype.onTweenUpdate = function(t) {
var e = t.target;
switch (e.type) {
case i.XY:
case i.Size:
case i.Scale:
case i.Skew:
e.value.f1 = t.value.x;
e.value.f2 = t.value.y;
if (e.tweenConfig.path) {
e.value.f1 += t.startValue.x;
e.value.f2 += t.startValue.y;
}
break;

case i.Alpha:
case i.Rotation:
e.value.f1 = t.value.x;
break;

case i.Color:
e.value.f1 = t.value.color;
break;

case i.ColorFilter:
e.value.f1 = t.value.x;
e.value.f2 = t.value.y;
e.value.f3 = t.value.z;
e.value.f4 = t.value.w;
break;

case i.Shake:
e.value.offsetX = t.deltaValue.x;
e.value.offsetY = t.deltaValue.y;
}
this.applyValue(e);
};
e.prototype.onTweenComplete = function(t) {
var e = t.target;
e.tweener = null;
this._totalTasks--;
t.allCompleted && this.callHook(e, !0);
this.checkAllComplete();
};
e.prototype.onPlayTransCompleted = function() {
this._totalTasks--;
this.checkAllComplete();
};
e.prototype.callHook = function(t, e) {
e ? t.tweenConfig && null != t.tweenConfig.endHook && t.tweenConfig.endHook(t.label) : t.time >= this._startTime && null != t.hook && t.hook(t.label);
};
e.prototype.checkAllComplete = function() {
if (this._playing && 0 == this._totalTasks) if (this._totalTimes < 0) {
this.internalPlay();
0 == this._totalTasks && t.GTween.delayedCall(0).setTarget(this).onComplete(this.checkAllComplete, this);
} else {
this._totalTimes--;
if (this._totalTimes > 0) {
this.internalPlay();
0 == this._totalTasks && t.GTween.delayedCall(0).setTarget(this).onComplete(this.checkAllComplete, this);
} else {
this._playing = !1;
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._items[i];
if (n.target && 0 != n.displayLockToken) {
n.target.releaseDisplayLock(n.displayLockToken);
n.displayLockToken = 0;
}
}
if (null != this._onComplete) {
var o = this._onComplete;
this._onComplete = null;
o();
}
}
}
};
e.prototype.applyValue = function(e) {
e.target._gearLocked = !0;
var n = e.value;
switch (e.type) {
case i.XY:
e.target == this._owner ? n.b1 && n.b2 ? e.target.setPosition(n.f1 + this._ownerBaseX, n.f2 + this._ownerBaseY) : n.b1 ? e.target.x = n.f1 + this._ownerBaseX : e.target.y = n.f2 + this._ownerBaseY : n.b3 ? n.b1 && n.b2 ? e.target.setPosition(n.f1 * this._owner.width, n.f2 * this._owner.height) : n.b1 ? e.target.x = n.f1 * this._owner.width : n.b2 && (e.target.y = n.f2 * this._owner.height) : n.b1 && n.b2 ? e.target.setPosition(n.f1, n.f2) : n.b1 ? e.target.x = n.f1 : n.b2 && (e.target.y = n.f2);
break;

case i.Size:
n.b1 || (n.f1 = e.target.width);
n.b2 || (n.f2 = e.target.height);
e.target.setSize(n.f1, n.f2);
break;

case i.Pivot:
e.target.setPivot(n.f1, n.f2, e.target.pivotAsAnchor);
break;

case i.Alpha:
e.target.alpha = n.f1;
break;

case i.Rotation:
e.target.rotation = n.f1;
break;

case i.Scale:
e.target.setScale(n.f1, n.f2);
break;

case i.Skew:
e.target.setSkew(n.f1, n.f2);
break;

case i.Color:
var o = e.target.getProp(t.ObjectPropID.Color);
if (o instanceof cc.Color) {
var r = Math.floor(n.f1);
o.setR(r >> 16 & 255).setG(r >> 8 & 255).setB(255 & r);
e.target.setProp(t.ObjectPropID.Color, o);
}
break;

case i.Animation:
n.frame >= 0 && e.target.setProp(t.ObjectPropID.Frame, n.frame);
e.target.setProp(t.ObjectPropID.Playing, n.playing);
e.target.setProp(t.ObjectPropID.TimeScale, this._timeScale);
break;

case i.Visible:
e.target.visible = n.visible;
break;

case i.Transition:
if (this._playing) {
var s = n.trans;
if (s) {
this._totalTasks++;
var a = this._startTime > e.time ? this._startTime - e.time : 0, l = this._endTime >= 0 ? this._endTime - e.time : -1;
n.stopTime >= 0 && (l < 0 || l > n.stopTime) && (l = n.stopTime);
s.timeScale = this._timeScale;
s._play(function() {
this.onPlayTransCompleted(e);
}.bind(this), n.playTimes, 0, a, l, this._reversed);
}
}
break;

case i.Sound:
if (this._playing && e.time >= this._startTime) {
if (null == n.audioClip) {
var h = t.UIPackage.getItemByURL(n.sound);
if (h) {
n.audioClip = h.owner.getItemAsset(h);
n.audioClip || h.owner.getItemAssetAsync(h, function(e, i) {
if (!e) {
n.audioClip = i.asset;
t.GRoot.inst.playOneShotSound(i.asset, n.volume);
}
});
}
}
n.audioClip && t.GRoot.inst.playOneShotSound(n.audioClip, n.volume);
}
break;

case i.Shake:
e.target.setPosition(e.target.x - n.lastOffsetX + n.offsetX, e.target.y - n.lastOffsetY + n.offsetY);
n.lastOffsetX = n.offsetX;
n.lastOffsetY = n.offsetY;
break;

case i.ColorFilter:
break;

case i.Text:
e.target.text = n.text;
break;

case i.Icon:
e.target.icon = n.text;
}
e.target._gearLocked = !1;
};
e.prototype.setup = function(e) {
this.name = e.readS();
this._options = e.readInt();
this._autoPlay = e.readBool();
this._autoPlayTimes = e.readInt();
this._autoPlayDelay = e.readFloat();
for (var i = e.readShort(), n = 0; n < i; n++) {
var o = e.readShort(), r = e.position;
e.seek(r, 0);
var l = new s(e.readByte());
this._items[n] = l;
l.time = e.readFloat();
var h = e.readShort();
l.targetId = h < 0 ? "" : this._owner.getChildAt(h).id;
l.label = e.readS();
if (e.readBool()) {
e.seek(r, 1);
l.tweenConfig = new a();
l.tweenConfig.duration = e.readFloat();
l.time + l.tweenConfig.duration > this._totalDuration && (this._totalDuration = l.time + l.tweenConfig.duration);
l.tweenConfig.easeType = e.readByte();
l.tweenConfig.repeat = e.readInt();
l.tweenConfig.yoyo = e.readBool();
l.tweenConfig.endLabel = e.readS();
e.seek(r, 2);
this.decodeValue(l, e, l.tweenConfig.startValue);
e.seek(r, 3);
this.decodeValue(l, e, l.tweenConfig.endValue);
if (e.version >= 2) {
var c = e.readInt();
if (c > 0) {
l.tweenConfig.path = new t.GPath();
for (var u = new Array(), p = 0; p < c; p++) {
var d = e.readByte();
switch (d) {
case t.CurveType.Bezier:
u.push(t.GPathPoint.newBezierPoint(e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat()));
break;

case t.CurveType.CubicBezier:
u.push(t.GPathPoint.newCubicBezierPoint(e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat()));
break;

default:
u.push(t.GPathPoint.newPoint(e.readFloat(), e.readFloat(), d));
}
}
l.tweenConfig.path.create(u);
}
}
} else {
l.time > this._totalDuration && (this._totalDuration = l.time);
e.seek(r, 2);
this.decodeValue(l, e, l.value);
}
e.position = r + o;
}
};
e.prototype.decodeValue = function(t, e, n) {
switch (t.type) {
case i.XY:
case i.Size:
case i.Pivot:
case i.Skew:
n.b1 = e.readBool();
n.b2 = e.readBool();
n.f1 = e.readFloat();
n.f2 = e.readFloat();
e.version >= 2 && t.type == i.XY && (n.b3 = e.readBool());
break;

case i.Alpha:
case i.Rotation:
n.f1 = e.readFloat();
break;

case i.Scale:
n.f1 = e.readFloat();
n.f2 = e.readFloat();
break;

case i.Color:
var o = e.readColor();
n.f1 = (o.getR() << 16) + (o.getG() << 8) + o.getB();
break;

case i.Animation:
n.playing = e.readBool();
n.frame = e.readInt();
break;

case i.Visible:
n.visible = e.readBool();
break;

case i.Sound:
n.sound = e.readS();
n.volume = e.readFloat();
break;

case i.Transition:
n.transName = e.readS();
n.playTimes = e.readInt();
break;

case i.Shake:
n.amplitude = e.readFloat();
n.duration = e.readFloat();
break;

case i.ColorFilter:
n.f1 = e.readFloat();
n.f2 = e.readFloat();
n.f3 = e.readFloat();
n.f4 = e.readFloat();
break;

case i.Text:
case i.Icon:
n.text = e.readS();
}
};
return e;
}();
t.Transition = e;
var i, n = 1, o = 2, r = 4;
(function(t) {
t[t.XY = 0] = "XY";
t[t.Size = 1] = "Size";
t[t.Scale = 2] = "Scale";
t[t.Pivot = 3] = "Pivot";
t[t.Alpha = 4] = "Alpha";
t[t.Rotation = 5] = "Rotation";
t[t.Color = 6] = "Color";
t[t.Animation = 7] = "Animation";
t[t.Visible = 8] = "Visible";
t[t.Sound = 9] = "Sound";
t[t.Transition = 10] = "Transition";
t[t.Shake = 11] = "Shake";
t[t.ColorFilter = 12] = "ColorFilter";
t[t.Skew = 13] = "Skew";
t[t.Text = 14] = "Text";
t[t.Icon = 15] = "Icon";
t[t.Unknown = 16] = "Unknown";
})(i || (i = {}));
var s = function(t) {
this.type = t;
this.value = {};
this.displayLockToken = 0;
}, a = function() {
this.easeType = t.EaseType.QuadOut;
this.startValue = {
b1: !0,
b2: !0
};
this.endValue = {
b1: !0,
b2: !0
};
};
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {}
e.loadFromXML = function(t) {
var i = {};
e.strings = i;
for (var n = new cc.SAXParser().parse(t).documentElement.childNodes, o = n.length, r = 0; r < o; r++) {
var s = n[r];
if ("string" == s.tagName) {
var a = s.getAttribute("name"), l = s.childNodes.length > 0 ? s.firstChild.nodeValue : "", h = a.indexOf("-");
if (-1 == h) continue;
var c = a.substr(0, h), u = a.substr(h + 1), p = i[c];
if (!p) {
p = {};
i[c] = p;
}
p[u] = l;
}
}
};
e.translateComponent = function(i) {
if (null != e.strings) {
var n = e.strings[i.owner.id + i.id];
if (null != n) {
var o, r, s, a, l, h, c, u, p, d = i.rawData;
d.seek(0, 2);
var f = d.readShort();
for (l = 0; l < f; l++) {
c = d.readShort();
u = d.position;
d.seek(u, 0);
var _ = d.readByte(), g = _;
d.skip(4);
o = d.readS();
g == t.ObjectType.Component && d.seek(u, 6) && (g = d.readByte());
d.seek(u, 1);
null != (r = n[o + "-tips"]) && d.writeS(r);
d.seek(u, 2);
var y = d.readShort();
for (h = 0; h < y; h++) {
s = d.readShort();
s += d.position;
if (6 == d.readByte()) {
d.skip(2);
p = d.readShort();
for (v = 0; v < p; v++) null != d.readS() && (null != (r = n[o + "-texts_" + v]) ? d.writeS(r) : d.skip(2));
d.readBool() && null != (r = n[o + "-texts_def"]) && d.writeS(r);
}
d.position = s;
}
if (_ == t.ObjectType.Component && d.version >= 2) {
d.seek(u, 4);
d.skip(2);
d.skip(4 * d.readShort());
for (var m = d.readShort(), v = 0; v < m; v++) {
var b = d.readS();
0 == d.readShort() && null != (r = n[o + "-cp-" + b]) ? d.writeS(r) : d.skip(2);
}
}
switch (g) {
case t.ObjectType.Text:
case t.ObjectType.RichText:
case t.ObjectType.InputText:
if (null != (r = n[o])) {
d.seek(u, 6);
d.writeS(r);
}
if (null != (r = n[o + "-prompt"])) {
d.seek(u, 4);
d.writeS(r);
}
break;

case t.ObjectType.List:
case t.ObjectType.Tree:
d.seek(u, 8);
d.skip(2);
a = d.readShort();
for (h = 0; h < a; h++) {
s = d.readShort();
s += d.position;
d.skip(2);
g == t.ObjectType.Tree && d.skip(2);
null != (r = n[o + "-" + h]) ? d.writeS(r) : d.skip(2);
null != (r = n[o + "-" + h + "-0"]) ? d.writeS(r) : d.skip(2);
if (d.version >= 2) {
d.skip(6);
d.skip(4 * d.readUshort());
for (m = d.readUshort(), v = 0; v < m; v++) {
b = d.readS();
0 == d.readUshort() && null != (r = n[o + "-" + h + "-" + b]) ? d.writeS(r) : d.skip(2);
}
}
d.position = s;
}
break;

case t.ObjectType.Label:
if (d.seek(u, 6) && d.readByte() == g) {
null != (r = n[o]) ? d.writeS(r) : d.skip(2);
d.skip(2);
d.readBool() && d.skip(4);
d.skip(4);
d.readBool() && null != (r = n[o + "-prompt"]) && d.writeS(r);
}
break;

case t.ObjectType.Button:
if (d.seek(u, 6) && d.readByte() == g) {
null != (r = n[o]) ? d.writeS(r) : d.skip(2);
null != (r = n[o + "-0"]) && d.writeS(r);
}
break;

case t.ObjectType.ComboBox:
if (d.seek(u, 6) && d.readByte() == g) {
a = d.readShort();
for (h = 0; h < a; h++) {
s = d.readShort();
s += d.position;
null != (r = n[o + "-" + h]) && d.writeS(r);
d.position = s;
}
null != (r = n[o]) && d.writeS(r);
}
}
d.position = u + c;
}
}
}
};
return e;
}();
t.TranslationHelper = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {}
e.defaultFont = "Arial";
e.modalLayerColor = new cc.Color(51, 51, 51, 51);
e.buttonSoundVolumeScale = 1;
e.defaultScrollStep = 25;
e.defaultScrollDecelerationRate = .967;
e.defaultScrollBarDisplay = t.ScrollBarDisplayType.Visible;
e.defaultScrollTouchEffect = !0;
e.defaultScrollBounceEffect = !0;
e.defaultComboBoxVisibleItemCount = 10;
e.touchScrollSensitivity = 20;
e.touchDragSensitivity = 10;
e.clickDragSensitivity = 2;
e.bringWindowToFrontOnClick = !0;
e.frameTimeForAsyncUIConstruction = .002;
e.linkUnderline = !0;
e.defaultUIGroup = "UI";
e.defaultUILayer = 1 << 25;
e.safeAreaLeft = 0;
e.defAtlasTexture = new cc.Texture2D();
return e;
}();
t.UIConfig = e;
t.addLoadHandler = function() {};
var i = {};
t.registerFont = function(t, e, n) {
e instanceof cc.Font ? i[t] = e : n ? n.load(t, cc.Font, function(e, n) {
i[t] = n;
}) : i[t] = cc.loader.getRes(t, cc.Font);
};
t.getFontByName = function(t) {
return i[t];
};
})(t || (t = {}));
(function(t) {
var e = function() {
function t() {}
t.scaleFactor = 1;
t.scaleLevel = 0;
t.rootSize = new cc.Size(0, 0);
return t;
}();
t.UIContentScaler = e;
t.updateScaler = function() {
var t = new cc.Size(screen.width, screen.height);
t.width /= cc.view.getScaleX();
t.height /= cc.view.getScaleY();
e.rootSize.width = t.width;
e.rootSize.height = t.height;
var i = Math.max(cc.view.getScaleX(), cc.view.getScaleY());
e.scaleFactor = i;
e.scaleLevel = i >= 3.5 ? 3 : i >= 2.5 ? 2 : i >= 1.5 ? 1 : 0;
};
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {}
e.setExtension = function(i, n) {
if (null == i) throw new Error("Invaild url: " + i);
var o = t.UIPackage.getItemByURL(i);
o && (o.extensionType = n);
e.extensions[i] = n;
};
e.setLoaderExtension = function(t) {
e.loaderType = t;
};
e.resolveExtension = function(t) {
var i = e.extensions["ui://" + t.owner.id + t.id];
i || (i = e.extensions["ui://" + t.owner.name + "/" + t.name]);
i && (t.extensionType = i);
};
e.newObject = function(i, n) {
var o;
e.counter++;
if ("number" == typeof i) switch (i) {
case t.ObjectType.Image:
return new t.GImage();

case t.ObjectType.MovieClip:
return new t.GMovieClip();

case t.ObjectType.Component:
return new t.GComponent();

case t.ObjectType.Text:
return new t.GTextField();

case t.ObjectType.RichText:
return new t.GRichTextField();

case t.ObjectType.InputText:
return new t.GTextInput();

case t.ObjectType.Group:
return new t.GGroup();

case t.ObjectType.List:
return new t.GList();

case t.ObjectType.Graph:
return new t.GGraph();

case t.ObjectType.Loader:
return e.loaderType ? new e.loaderType() : new t.GLoader();

case t.ObjectType.Button:
return new t.GButton();

case t.ObjectType.Label:
return new t.GLabel();

case t.ObjectType.ProgressBar:
return new t.GProgressBar();

case t.ObjectType.Slider:
return new t.GSlider();

case t.ObjectType.ScrollBar:
return new t.GScrollBar();

case t.ObjectType.ComboBox:
return new t.GComboBox();

case t.ObjectType.Tree:
return new t.GTree();

case t.ObjectType.Loader3D:
return new t.GLoader3D();

default:
return null;
} else (o = i.type == t.PackageItemType.Component ? n ? new n() : i.extensionType ? new i.extensionType() : e.newObject(i.objectType) : e.newObject(i.objectType)) && (o.packageItem = i);
return o;
};
e.counter = 0;
e.extensions = {};
return e;
}();
t.UIObjectFactory = e;
})(t || (t = {}));
(function(t) {
var e, i = function() {
function e() {
this._isDelayLoad = !1;
this._items = [];
this._itemsById = {};
this._itemsByName = {};
this._sprites = {};
this._dependencies = [];
this._branches = [];
this._branchIndex = -1;
}
Object.defineProperty(e, "branch", {
get: function() {
return e._branch;
},
set: function(t) {
e._branch = t;
for (var i in e._instById) {
var n = e._instById[i];
n._branches && (n._branchIndex = n._branches.indexOf(t));
}
},
enumerable: !1,
configurable: !0
});
e.getVar = function(t) {
return e._vars[t];
};
e.setVar = function(t, i) {
e._vars[t] = i;
};
e.getById = function(t) {
return e._instById[t];
};
e.getByName = function(t) {
return e._instByName[t];
};
e.addPackage = function(i) {
var n = e._instById[i];
if (n) return n;
var o = cc.resources.get(i, cc.BufferAsset);
if (!o) throw "Resource '" + i + "' not ready";
if (!o._buffer) throw "Missing asset data.";
(n = new e())._bundle = cc.resources;
n.loadPackage(new t.ByteBuffer(o._buffer), i);
e._instById[n.id] = n;
e._instByName[n.name] = n;
e._instById[n._path] = n;
return n;
};
e.tryAddPackage = function(i, n, o) {
var r = e._instById[i];
if (r) return !0;
var s = (n = n || cc.resources).get(i, cc.BufferAsset);
if (!s) {
n.load(i, cc.BufferAsset, function(s, a) {
if (s) null != o && o(s, null); else {
(r = new e())._bundle = n;
r.loadPackage(new t.ByteBuffer(a._buffer), i);
r._isDelayLoad = !0;
e._instById[r.id] = r;
e._instByName[r.name] = r;
e._instById[r._path] = r;
o(null, r);
}
});
return !1;
}
if (!s._buffer) throw "Missing asset data.";
(r = new e())._bundle = n;
r.loadPackage(new t.ByteBuffer(s._buffer), i);
r._isDelayLoad = !0;
e._instById[r.id] = r;
e._instByName[r.name] = r;
e._instById[r._path] = r;
o(null, r);
return !0;
};
e.loadPackage = function() {
for (var i, o, r, s, a = [], l = 0; l < arguments.length; l++) a[l] = arguments[l];
if (a[0] instanceof cc.AssetManager.Bundle) {
s = a[0];
i = a[1];
if (a.length > 3) {
o = a[2];
r = a[3];
} else r = a[2];
} else {
i = a[0];
if (a.length > 2) {
o = a[1];
r = a[2];
} else r = a[1];
}
(s = s || cc.resources).load(i, cc.BufferAsset, o, function(a, l) {
if (a) null != r && r(a, null); else {
var h = new e();
h._bundle = s;
h.loadPackage(new t.ByteBuffer(l._buffer), i);
for (var c = h._items.length, u = [], p = [], d = 0; d < c; d++) {
var f = h._items[d];
if (f.type == t.PackageItemType.Atlas || f.type == t.PackageItemType.Sound) {
var _ = n[f.type];
u.push(f.file);
p.push(_);
}
}
var g, y = u.length, m = function(t) {
t && (g = t);
if (--y <= 0) {
e._instById[h.id] = h;
e._instByName[h.name] = h;
h._path && (e._instById[h._path] = h);
null != r && r(g, h);
}
};
y > 0 ? u.forEach(function(t, e) {
s.load(t, p[e], o, m);
}) : m();
}
});
};
e.removePackage = function(t) {
var i = e._instById[t];
i || (i = e._instByName[t]);
if (!i) throw "No package found: " + t;
i.dispose();
delete e._instById[i.id];
delete e._instByName[i.name];
i._path && delete e._instById[i._path];
};
e.createObject = function(t, i, n) {
var o = e.getByName(t);
return o ? o.createObject(i, n) : null;
};
e.createObjectFromURL = function(t, i) {
var n = e.getItemByURL(t);
return n ? n.owner.internalCreateObject(n, i) : null;
};
e.getItemURL = function(t, i) {
var n = e.getByName(t);
if (!n) return null;
var o = n._itemsByName[i];
return o ? "ui://" + n.id + o.id : null;
};
e.getItemByURL = function(t) {
var i = t.indexOf("//");
if (-1 == i) return null;
var n = t.indexOf("/", i + 2);
if (-1 == n) {
if (t.length > 13) {
var o = t.substr(5, 8), r = e.getById(o);
if (null != r) {
var s = t.substr(13);
return r.getItemById(s);
}
}
} else {
var a = t.substr(i + 2, n - i - 2);
if (null != (r = e.getByName(a))) {
var l = t.substr(n + 1);
return r.getItemByName(l);
}
}
return null;
};
e.normalizeURL = function(t) {
if (null == t) return null;
var i = t.indexOf("//");
if (-1 == i) return null;
var n = t.indexOf("/", i + 2);
if (-1 == n) return t;
var o = t.substr(i + 2, n - i - 2), r = t.substr(n + 1);
return e.getItemURL(o, r);
};
e.setStringsSource = function(e) {
t.TranslationHelper.loadFromXML(e);
};
Object.defineProperty(e.prototype, "sprites", {
get: function() {
return this._sprites;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "isDelayLoad", {
get: function() {
return this._isDelayLoad;
},
enumerable: !1,
configurable: !0
});
e.prototype.loadPackage = function(i, n) {
if (1179080009 != i.readUint()) throw "FairyGUI: old package format found in '" + n + "'";
this._path = n;
i.version = i.readInt();
var o = i.version >= 2;
i.readBool();
this._id = i.readString();
this._name = i.readString();
i.skip(20);
var r, s, a, l, h, c = i.position;
i.seek(c, 4);
r = i.readInt();
var u, p = new Array(r);
i.stringTable = p;
for (s = 0; s < r; s++) p[s] = i.readString();
if (i.seek(c, 5)) {
r = i.readInt();
for (s = 0; s < r; s++) {
var d = i.readUshort(), f = i.readInt();
p[d] = i.readString(f);
}
}
i.seek(c, 0);
r = i.readShort();
for (s = 0; s < r; s++) this._dependencies.push({
id: i.readS(),
name: i.readS()
});
if (o) {
if ((r = i.readShort()) > 0) {
this._branches = i.readSArray(r);
e._branch && (this._branchIndex = this._branches.indexOf(e._branch));
}
h = r > 0;
}
i.seek(c, 1);
var _ = n.lastIndexOf("/"), g = -1 == _ ? "" : n.substr(0, _ + 1);
n += "_";
r = i.readShort();
for (s = 0; s < r; s++) {
a = i.readInt();
a += i.position;
(u = new t.PackageItem()).owner = this;
u.type = i.readByte();
u.id = i.readS();
u.name = i.readS();
i.readS();
u.file = i.readS();
i.readBool();
u.width = i.readInt();
u.height = i.readInt();
switch (u.type) {
case t.PackageItemType.Image:
u.objectType = t.ObjectType.Image;
var y = i.readByte();
if (1 == y) {
u.scale9Grid = new cc.Rect();
u.scale9Grid.x = i.readInt();
u.scale9Grid.y = i.readInt();
u.scale9Grid.width = i.readInt();
u.scale9Grid.height = i.readInt();
u.tileGridIndice = i.readInt();
} else 2 == y && (u.scaleByTile = !0);
u.smoothing = i.readBool();
break;

case t.PackageItemType.MovieClip:
u.smoothing = i.readBool();
u.objectType = t.ObjectType.MovieClip;
u.rawData = i.readBuffer();
break;

case t.PackageItemType.Font:
u.rawData = i.readBuffer();
break;

case t.PackageItemType.Component:
var m = i.readByte();
u.objectType = m > 0 ? m : t.ObjectType.Component;
u.rawData = i.readBuffer();
t.UIObjectFactory.resolveExtension(u);
break;

case t.PackageItemType.Atlas:
case t.PackageItemType.Sound:
case t.PackageItemType.Misc:
u.file = n + cc.path.mainFileName(u.file);
break;

case t.PackageItemType.Spine:
case t.PackageItemType.DragonBones:
u.file = g + cc.path.mainFileName(u.file);
u.skeletonAnchor = new cc.Vec2();
u.skeletonAnchor.x = i.readFloat();
u.skeletonAnchor.y = i.readFloat();
}
if (o) {
(l = i.readS()) && (u.name = l + "/" + u.name);
var v = i.readUbyte();
v > 0 && (h ? u.branches = i.readSArray(v) : this._itemsById[i.readS()] = u);
var b = i.readUbyte();
b > 0 && (u.highResolution = i.readSArray(b));
}
this._items.push(u);
this._itemsById[u.id] = u;
null != u.name && (this._itemsByName[u.name] = u);
i.position = a;
}
i.seek(c, 2);
r = i.readShort();
for (s = 0; s < r; s++) {
a = i.readShort();
a += i.position;
var w = i.readS();
u = this._itemsById[i.readS()];
var C = new cc.Rect();
C.x = i.readInt();
C.y = i.readInt();
C.width = i.readInt();
C.height = i.readInt();
var S = {
atlas: u,
rect: C,
offset: new cc.Vec2(),
originalSize: new cc.Size(0, 0)
};
S.rotated = i.readBool();
if (o && i.readBool()) {
S.offset.x = i.readInt();
S.offset.y = i.readInt();
S.originalSize.width = i.readInt();
S.originalSize.height = i.readInt();
} else {
S.originalSize.width = S.rect.width;
S.originalSize.height = S.rect.height;
}
this._sprites[w] = S;
i.position = a;
}
if (i.seek(c, 3)) {
r = i.readShort();
for (s = 0; s < r; s++) {
a = i.readInt();
a += i.position;
(u = this._itemsById[i.readS()]) && u.type == t.PackageItemType.Image && (u.hitTestData = new t.PixelHitTestData(i));
i.position = a;
}
}
};
e.prototype.dispose = function() {
for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
i.asset && cc.assetManager.releaseAsset(i.asset);
}
};
Object.defineProperty(e.prototype, "id", {
get: function() {
return this._id;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "name", {
get: function() {
return this._name;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "path", {
get: function() {
return this._path;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dependencies", {
get: function() {
return this._dependencies;
},
enumerable: !1,
configurable: !0
});
e.prototype.createObject = function(t, e) {
var i = this._itemsByName[t];
return i ? this.internalCreateObject(i, e) : null;
};
e.prototype.internalCreateObject = function(i, n) {
var o = t.UIObjectFactory.newObject(i, n);
if (null == o) return null;
e._constructing++;
o.constructFromResource();
e._constructing--;
return o;
};
e.prototype.getItemById = function(t) {
return this._itemsById[t];
};
e.prototype.getItemByName = function(t) {
return this._itemsByName[t];
};
e.prototype.getItemAssetByName = function(t) {
var e = this._itemsByName[t];
if (null == e) throw "Resource not found -" + t;
return this.getItemAsset(e);
};
e.prototype.getItemAsset = function(e) {
switch (e.type) {
case t.PackageItemType.Image:
if (!e.decoded) {
var i = this._sprites[e.id];
if (i) {
var o = this.getItemAsset(i.atlas);
if (o) {
var r = new cc.SpriteFrame(o, i.rect, i.rotated, new cc.Vec2(i.offset.x - (i.originalSize.width - i.rect.width) / 2, -(i.offset.y - (i.originalSize.height - i.rect.height) / 2)), i.originalSize);
if (e.scale9Grid) {
r.insetLeft = e.scale9Grid.x;
r.insetTop = e.scale9Grid.y;
r.insetRight = e.width - e.scale9Grid.xMax;
r.insetBottom = e.height - e.scale9Grid.yMax;
}
e.asset = r;
e.decoded = !0;
}
}
}
break;

case t.PackageItemType.Atlas:
case t.PackageItemType.Sound:
if (!e.decoded) {
e.asset = this._bundle.get(e.file, n[e.type]);
e.asset ? e.decoded = !0 : console.log("Resource '" + e.file + "' not found");
}
break;

case t.PackageItemType.Font:
if (!e.decoded) {
e.decoded = !0;
this.loadFont(e);
}
break;

case t.PackageItemType.MovieClip:
if (!e.decoded) {
e.decoded = !0;
this.loadMovieClip(e);
}
}
return e.asset;
};
e.prototype.getItemAssetAsync = function(e, i) {
if (e.decoded) {
i(null, e);
return !0;
}
if (e.loading) e.loading.push(i); else switch (e.type) {
case t.PackageItemType.Spine:
e.loading = [ i ];
this.loadSpine(e);
break;

case t.PackageItemType.DragonBones:
e.loading = [ i ];
this.loadDragonBones(e);
break;

case t.PackageItemType.Image:
var o = this._sprites[e.id];
if (o) return this.getItemAssetAsync(o.atlas, function(t, n) {
e.decoded = !0;
if (t) i(t, e); else if (e.asset && e.decoded) i(null, e); else {
var r = n.asset;
if (r) {
var s = new cc.SpriteFrame(r, o.rect, o.rotated, new cc.Vec2(o.offset.x - (o.originalSize.width - o.rect.width) / 2, -(o.offset.y - (o.originalSize.height - o.rect.height) / 2)), o.originalSize);
if (e.scale9Grid) {
s.insetLeft = e.scale9Grid.x;
s.insetTop = e.scale9Grid.y;
s.insetRight = e.width - e.scale9Grid.xMax;
s.insetBottom = e.height - e.scale9Grid.yMax;
}
s.name = e.name;
e.asset = s;
i(null, e);
}
}
});
break;

case t.PackageItemType.Atlas:
case t.PackageItemType.Sound:
var r = this._bundle.get(e.file);
if (r) {
e.decoded = !0;
e.asset = r;
i(null, e);
return !0;
}
e.loading = [ i ];
this._bundle.load(e.file, n[e.type], function(t, i) {
console.log("[UIPackage]getItemAssetAsync onComplete:" + e.file);
e.decoded = !0;
e.asset = i;
i.name = e.file;
var n = e.loading;
delete e.loading;
n.forEach(function(i) {
return i(t, e);
});
});
break;

default:
this.getItemAsset(e);
i(null, e);
return !0;
}
};
e.prototype.loadAllAssets = function() {
for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
this.getItemAsset(i);
}
};
e.prototype.loadMovieClip = function(t) {
var e = t.rawData;
e.seek(0, 0);
t.interval = e.readInt() / 1e3;
t.swing = e.readBool();
t.repeatDelay = e.readInt() / 1e3;
e.seek(0, 1);
var i, n, o = e.readShort();
t.frames = Array(o);
for (var r, s = function() {
r = e.readShort();
r += e.position;
var o = new cc.Rect();
o.x = e.readInt();
o.y = e.readInt();
o.width = e.readInt();
o.height = e.readInt();
var s = {
rect: o,
addDelay: e.readInt() / 1e3
};
null != (i = e.readS()) && null != (n = a._sprites[i]) && a.getItemAssetAsync(n.atlas, function(t, e) {
var i = e.asset;
if (i) {
e.width, s.rect.width;
s.texture = new cc.SpriteFrame(i, n.rect, n.rotated, new cc.Vec2(s.rect.x - (e.width - s.rect.width) / 2, -(s.rect.y - (e.height - s.rect.height) / 2)), new cc.Size(e.width, e.height));
}
});
t.frames[l] = s;
e.position = r;
}, a = this, l = 0; l < o; l++) s();
};
e.prototype.loadFont = function(t) {
var e = new cc.LabelAtlas();
t.asset = e;
e._fntConfig = {
commonHeight: 0,
fontSize: 0,
kerningDict: {},
fontDefDictionary: {}
};
var i = e._fntConfig.fontDefDictionary, n = t.rawData;
n.seek(0, 0);
var o = n.readBool(), r = n.readBool(), s = n.readBool();
n.readBool();
var a, l, h = n.readInt(), c = n.readInt(), u = n.readInt(), p = this._sprites[t.id];
p && ((a = this.getItemAsset(p.atlas)) || this.getItemAssetAsync(p.atlas, function(i, n) {
if (n.asset) {
var o = new cc.SpriteFrame();
o.setTexture(n.asset);
e.spriteFrame = o;
e.onLoad();
if (t.loading) {
var r = t.loading;
delete t.loading;
r.forEach(function(e) {
return e(i, t);
});
}
}
}));
n.seek(0, 1);
for (var d = n.readInt(), f = 0; f < d; f++) {
var _ = n.readShort();
_ += n.position;
l = {};
i[n.readUshort()] = l;
var g = new cc.Rect();
l.rect = g;
var y = n.readS();
g.x = n.readInt();
g.y = n.readInt();
l.xOffset = n.readInt();
l.yOffset = n.readInt();
g.width = n.readInt();
g.height = n.readInt();
l.xAdvance = n.readInt();
l.channel = n.readByte();
1 == l.channel ? l.channel = 3 : 2 == l.channel ? l.channel = 2 : 3 == l.channel && (l.channel = 1);
if (o) {
g.x += p.rect.x;
g.y += p.rect.y;
} else {
var m = this._sprites[y];
if (m) {
g.set(m.rect);
l.xOffset += m.offset.x;
l.yOffset += m.offset.y;
0 == h && (h = m.originalSize.height);
if (!p) {
p = m;
(a = this.getItemAsset(p.atlas)) || this.getItemAssetAsync(p.atlas, function(i, n) {
if (n.asset) {
var o = new cc.SpriteFrame();
o.setTexture(n.asset);
e.spriteFrame = o;
e.onLoad();
if (t.loading) {
var r = t.loading;
delete t.loading;
r.forEach(function(e) {
return e(i, t);
});
}
}
});
}
}
0 == l.xAdvance && (l.xAdvance = 0 == c ? l.xOffset + l.rect.width : c);
}
n.position = _;
}
e.fontSize = h;
e._fntConfig.fontSize = h;
e._fntConfig.commonHeight = 0 == u ? h : u;
e._fntConfig.resizable = s;
e._fntConfig.canTint = r;
if (a) {
var v = new cc.SpriteFrame();
v.setTexture(a);
e.spriteFrame = v;
e.onLoad();
}
};
e.prototype.loadSpine = function(t) {
this._bundle.load(t.file, sp.SkeletonData, function(e, i) {
t.decoded = !0;
t.asset = i;
var n = t.loading;
delete t.loading;
n.forEach(function(i) {
return i(e, t);
});
});
};
e.prototype.loadDragonBones = function(t) {
var e = this;
if (window.dragonBones) this._bundle.load(t.file, dragonBones.DragonBonesAsset, function(i, n) {
if (i) {
t.decoded = !0;
var o = t.loading;
delete t.loading;
o.forEach(function(e) {
return e(i, t);
});
} else {
t.asset = n;
var r = t.file.replace("_ske", "_tex"), s = r.lastIndexOf(".");
-1 != s && (r = r.substr(0, s + 1) + "json");
e._bundle.load(r, dragonBones.DragonBonesAtlasAsset, function(e, i) {
t.decoded = !0;
t.atlasAsset = i;
var n = t.loading;
delete t.loading;
n.forEach(function(i) {
return i(e, t);
});
});
}
}); else {
t.decoded = !0;
var i = t.loading;
delete t.loading;
i.forEach(function(e) {
return e("No dragonBones", t);
});
}
};
e._constructing = 0;
e._instById = {};
e._instByName = {};
e._branch = "";
e._vars = {};
return e;
}();
t.UIPackage = i;
var n = ((e = {})[t.PackageItemType.Atlas] = cc.Texture2D, e[t.PackageItemType.Sound] = cc.AudioClip, 
e);
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._requestingCmd = 0;
i._uiSources = new Array();
i.bringToFontOnClick = t.UIConfig.bringWindowToFrontOnClick;
i._node.on(t.Event.TOUCH_BEGIN, i.onTouchBegin_1, i, !0);
return i;
}
i.prototype.addUISource = function(t) {
this._uiSources.push(t);
};
Object.defineProperty(i.prototype, "contentPane", {
get: function() {
return this._contentPane;
},
set: function(e) {
if (this._contentPane != e) {
this._contentPane && this.removeChild(this._contentPane);
this._contentPane = e;
if (this._contentPane) {
this.addChild(this._contentPane);
this.setSize(this._contentPane.width, this._contentPane.height);
this._contentPane.addRelation(this, t.RelationType.Size);
this._frame = this._contentPane.getChild("frame");
if (this._frame) {
this.closeButton = this._frame.getChild("closeButton");
this.dragArea = this._frame.getChild("dragArea");
this.contentArea = this._frame.getChild("contentArea");
}
}
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._frame;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "closeButton", {
get: function() {
return this._closeButton;
},
set: function(t) {
this._closeButton && this._closeButton.offClick(this.closeEventHandler, this);
this._closeButton = t;
this._closeButton && this._closeButton.onClick(this.closeEventHandler, this);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "dragArea", {
get: function() {
return this._dragArea;
},
set: function(e) {
if (this._dragArea != e) {
if (this._dragArea) {
this._dragArea.draggable = !1;
this._dragArea.off(t.Event.DRAG_START, this.onDragStart_1, this);
}
this._dragArea = e;
if (this._dragArea) {
this._dragArea.draggable = !0;
this._dragArea.on(t.Event.DRAG_START, this.onDragStart_1, this);
}
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "contentArea", {
get: function() {
return this._contentArea;
},
set: function(t) {
this._contentArea = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.show = function() {
t.GRoot.inst.showWindow(this);
};
i.prototype.showOn = function(t) {
t.showWindow(this);
};
i.prototype.hide = function() {
this.isShowing && this.doHideAnimation();
};
i.prototype.hideImmediately = function() {
var e = this.parent instanceof t.GRoot ? this.parent : null;
e || (e = t.GRoot.inst);
e.hideWindowImmediately(this);
};
i.prototype.centerOn = function(e, i) {
this.setPosition(Math.round((e.width - this.width) / 2), Math.round((e.height - this.height) / 2));
if (i) {
this.addRelation(e, t.RelationType.Center_Center);
this.addRelation(e, t.RelationType.Middle_Middle);
}
};
i.prototype.toggleStatus = function() {
this.isTop ? this.hide() : this.show();
};
Object.defineProperty(i.prototype, "isShowing", {
get: function() {
return null != this.parent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "isTop", {
get: function() {
return this.parent && this.parent.getChildIndex(this) == this.parent.numChildren - 1;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "modal", {
get: function() {
return this._modal;
},
set: function(t) {
this._modal = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.bringToFront = function() {
this.root.bringToFront(this);
};
i.prototype.showModalWait = function(e) {
null != e && (this._requestingCmd = e);
if (t.UIConfig.windowModalWaiting) {
this._modalWaitPane || (this._modalWaitPane = t.UIPackage.createObjectFromURL(t.UIConfig.windowModalWaiting));
this.layoutModalWaitPane();
this.addChild(this._modalWaitPane);
}
};
i.prototype.layoutModalWaitPane = function() {
if (this._contentArea) {
var t = this._frame.localToGlobal();
t = this.globalToLocal(t.x, t.y, t);
this._modalWaitPane.setPosition(t.x + this._contentArea.x, t.y + this._contentArea.y);
this._modalWaitPane.setSize(this._contentArea.width, this._contentArea.height);
} else this._modalWaitPane.setSize(this.width, this.height);
};
i.prototype.closeModalWait = function(t) {
if (null != t && this._requestingCmd != t) return !1;
this._requestingCmd = 0;
this._modalWaitPane && this._modalWaitPane.parent && this.removeChild(this._modalWaitPane);
return !0;
};
Object.defineProperty(i.prototype, "modalWaiting", {
get: function() {
return this._modalWaitPane && null != this._modalWaitPane.parent;
},
enumerable: !1,
configurable: !0
});
i.prototype.init = function() {
if (!this._inited && !this._loading) if (this._uiSources.length > 0) {
this._loading = !1;
for (var t = this._uiSources.length, e = 0; e < t; e++) {
var i = this._uiSources[e];
if (!i.loaded) {
i.load(this.__uiLoadComplete, this);
this._loading = !0;
}
}
this._loading || this._init();
} else this._init();
};
i.prototype.onInit = function() {};
i.prototype.onShown = function() {};
i.prototype.onHide = function() {};
i.prototype.doShowAnimation = function() {
this.onShown();
};
i.prototype.doHideAnimation = function() {
this.hideImmediately();
};
i.prototype.__uiLoadComplete = function() {
for (var t = this._uiSources.length, e = 0; e < t; e++) if (!this._uiSources[e].loaded) return;
this._loading = !1;
this._init();
};
i.prototype._init = function() {
this._inited = !0;
this.onInit();
this.isShowing && this.doShowAnimation();
};
i.prototype.dispose = function() {
this.parent && this.hideImmediately();
e.prototype.dispose.call(this);
};
i.prototype.closeEventHandler = function() {
this.hide();
};
i.prototype.onEnable = function() {
e.prototype.onEnable.call(this);
this._inited ? this.doShowAnimation() : this.init();
};
i.prototype.onDisable = function() {
e.prototype.onDisable.call(this);
this.closeModalWait();
this.onHide();
};
i.prototype.onTouchBegin_1 = function() {
this.isShowing && this.bringToFontOnClick && this.bringToFront();
};
i.prototype.onDragStart_1 = function(e) {
t.GObject.cast(e.currentTarget).stopDrag();
this.startDrag(e.touchId);
};
return i;
}(t.GComponent);
t.Window = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {}
e.createAction = function(e) {
switch (e) {
case 0:
return new t.PlayTransitionAction();

case 1:
return new t.ChangePageAction();
}
return null;
};
e.prototype.run = function(t, e, i) {
null != this.fromPage && 0 != this.fromPage.length && -1 == this.fromPage.indexOf(e) || null != this.toPage && 0 != this.toPage.length && -1 == this.toPage.indexOf(i) ? this.leave(t) : this.enter(t);
};
e.prototype.enter = function() {};
e.prototype.leave = function() {};
e.prototype.setup = function(t) {
var e, i;
e = t.readShort();
this.fromPage = [];
for (i = 0; i < e; i++) this.fromPage[i] = t.readS();
e = t.readShort();
this.toPage = [];
for (i = 0; i < e; i++) this.toPage[i] = t.readS();
};
return e;
}();
t.ControllerAction = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return e.call(this) || this;
}
i.prototype.enter = function(e) {
if (this.controllerName) {
var i;
if (this.objectId) {
var n = e.parent.getChildById(this.objectId);
if (!(n instanceof t.GComponent)) return;
i = n;
} else i = e.parent;
if (i) {
var o = i.getController(this.controllerName);
o && o != e && !o.changing && ("~1" == this.targetPage ? e.selectedIndex < o.pageCount && (o.selectedIndex = e.selectedIndex) : "~2" == this.targetPage ? o.selectedPage = e.selectedPage : o.selectedPageId = this.targetPage);
}
}
};
i.prototype.setup = function(t) {
e.prototype.setup.call(this, t);
this.objectId = t.readS();
this.controllerName = t.readS();
this.targetPage = t.readS();
};
return i;
}(t.ControllerAction);
t.ChangePageAction = e;
})(t || (t = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
var e = t.call(this) || this;
e.playTimes = 1;
e.delay = 0;
e.stopOnExit = !1;
return e;
}
e.prototype.enter = function(t) {
var e = t.parent.getTransition(this.transitionName);
if (e) {
this._currentTransition && this._currentTransition.playing ? e.changePlayTimes(this.playTimes) : e.play(null, this.playTimes, this.delay);
this._currentTransition = e;
}
};
e.prototype.leave = function() {
if (this.stopOnExit && this._currentTransition) {
this._currentTransition.stop();
this._currentTransition = null;
}
};
e.prototype.setup = function(e) {
t.prototype.setup.call(this, e);
this.transitionName = e.readS();
this.playTimes = e.readInt();
this.delay = e.readFloat();
this.stopOnExit = e.readBool();
};
return e;
}(t.ControllerAction);
t.PlayTransitionAction = e;
})(t || (t = {}));
(function(t) {
(function(t) {
t[t.Normal = 0] = "Normal";
t[t.None = 1] = "None";
t[t.Add = 2] = "Add";
t[t.Multiply = 3] = "Multiply";
t[t.Screen = 4] = "Screen";
t[t.Erase = 5] = "Erase";
t[t.Mask = 6] = "Mask";
t[t.Below = 7] = "Below";
t[t.Off = 8] = "Off";
t[t.Custom1 = 9] = "Custom1";
t[t.Custom2 = 10] = "Custom2";
t[t.Custom3 = 11] = "Custom3";
})(t.BlendMode || (t.BlendMode = {}));
var e = function() {
function t() {}
t.apply = function(t, e) {
var n = i[e];
t.getComponentsInChildren(cc.RenderComponent).forEach(function(t) {
t.srcBlendFactor = n[0];
t.dstBlendFactor = n[1];
});
};
t.override = function(t, e, n) {
i[t][0] = e;
i[t][1] = n;
};
return t;
}();
t.BlendModeUtils = e;
var i = [ [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.ONE, cc.macro.ONE ], [ cc.macro.SRC_ALPHA, cc.macro.ONE ], [ cc.macro.DST_COLOR, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.ONE, cc.macro.ONE_MINUS_SRC_COLOR ], [ cc.macro.ZERO, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.ZERO, cc.macro.SRC_ALPHA ], [ cc.macro.ONE_MINUS_DST_ALPHA, cc.macro.DST_ALPHA ], [ cc.macro.ONE, cc.macro.ZERO ], [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ] ];
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._flip = t.FlipType.None;
i._fillMethod = t.FillMethod.None;
i._fillOrigin = t.FillOrigin.Left;
i._fillAmount = 0;
return i;
}
Object.defineProperty(i.prototype, "flip", {
get: function() {
return this._flip;
},
set: function(e) {
if (this._flip != e) {
this._flip = e;
var i = 1, n = 1;
this._flip != t.FlipType.Horizontal && this._flip != t.FlipType.Both || (i = -1);
this._flip != t.FlipType.Vertical && this._flip != t.FlipType.Both || (n = -1);
1 == i && 1 == n || this.node.setAnchorPoint(.5, .5);
this.node.setScale(i, n);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillMethod", {
get: function() {
return this._fillMethod;
},
set: function(t) {
if (this._fillMethod != t) {
this._fillMethod = t;
if (0 != this._fillMethod) {
this.type = cc.Sprite.Type.FILLED;
this._fillMethod <= 3 ? this.fillType = this._fillMethod - 1 : this.fillType = cc.Sprite.FillType.RADIAL;
this.fillCenter = new cc.Vec2(.5, .5);
this.setupFill();
} else this.type = cc.Sprite.Type.SIMPLE;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillOrigin", {
get: function() {
return this._fillOrigin;
},
set: function(t) {
if (this._fillOrigin != t) {
this._fillOrigin = t;
0 != this._fillMethod && this.setupFill();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillClockwise", {
get: function() {
return this._fillClockwise;
},
set: function(t) {
if (this._fillClockwise != t) {
this._fillClockwise = t;
0 != this._fillMethod && this.setupFill();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillAmount", {
get: function() {
return this._fillAmount;
},
set: function(t) {
if (this._fillAmount != t) {
this._fillAmount = t;
0 != this._fillMethod && (this._fillClockwise ? this.fillRange = -this._fillAmount : this.fillRange = this._fillAmount);
}
},
enumerable: !1,
configurable: !0
});
i.prototype.setupFill = function() {
if (this._fillMethod == t.FillMethod.Horizontal) {
this._fillClockwise = this._fillOrigin == t.FillOrigin.Right || this._fillOrigin == t.FillOrigin.Bottom;
this.fillStart = this._fillClockwise ? 1 : 0;
} else if (this._fillMethod == t.FillMethod.Vertical) {
this._fillClockwise = this._fillOrigin == t.FillOrigin.Left || this._fillOrigin == t.FillOrigin.Top;
this.fillStart = this._fillClockwise ? 1 : 0;
} else switch (this._fillOrigin) {
case t.FillOrigin.Right:
this.fillOrigin = 0;
break;

case t.FillOrigin.Top:
this.fillStart = .25;
break;

case t.FillOrigin.Left:
this.fillStart = .5;
break;

case t.FillOrigin.Bottom:
this.fillStart = .75;
}
};
Object.defineProperty(i.prototype, "grayed", {
get: function() {
return this._grayed;
},
set: function(t) {
if (this._grayed != t) {
this._grayed = t;
var e;
if (t) {
(e = this._graySpriteMaterial) || (e = cc.Material.getBuiltinMaterial("2d-gray-sprite"));
e = this._graySpriteMaterial = cc.MaterialVariant.create(e, this);
} else {
(e = this._spriteMaterial) || (e = cc.Material.getBuiltinMaterial("2d-sprite", this));
e = this._spriteMaterial = cc.MaterialVariant.create(e, this);
}
this.setMaterial(0, e);
}
},
enumerable: !1,
configurable: !0
});
return i;
}(cc.Sprite);
t.Image = e;
})(t || (t = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
var e = t.call(this) || this;
e.interval = 0;
e.repeatDelay = 0;
e.timeScale = 1;
e._playing = !0;
e._frameCount = 0;
e._frame = 0;
e._start = 0;
e._end = 0;
e._times = 0;
e._endAt = 0;
e._status = 0;
e._smoothing = !0;
e._frameElapsed = 0;
e._reversed = !1;
e._repeatedCount = 0;
return e;
}
Object.defineProperty(e.prototype, "frames", {
get: function() {
return this._frames;
},
set: function(t) {
this._frames = t;
if (this._frames) {
this._frameCount = this._frames.length;
(-1 == this._end || this._end > this._frameCount - 1) && (this._end = this._frameCount - 1);
(-1 == this._endAt || this._endAt > this._frameCount - 1) && (this._endAt = this._frameCount - 1);
(this._frame < 0 || this._frame > this._frameCount - 1) && (this._frame = this._frameCount - 1);
this.type = cc.Sprite.Type.SIMPLE;
this.drawFrame();
this._frameElapsed = 0;
this._repeatedCount = 0;
this._reversed = !1;
} else this._frameCount = 0;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "frameCount", {
get: function() {
return this._frameCount;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "frame", {
get: function() {
return this._frame;
},
set: function(t) {
if (this._frame != t) {
this._frames && t >= this._frameCount && (t = this._frameCount - 1);
this._frame = t;
this._frameElapsed = 0;
this.drawFrame();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "playing", {
get: function() {
return this._playing;
},
set: function(t) {
this._playing != t && (this._playing = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "smoothing", {
get: function() {
return this._smoothing;
},
set: function(t) {
this._smoothing = t;
},
enumerable: !1,
configurable: !0
});
e.prototype.rewind = function() {
this._frame = 0;
this._frameElapsed = 0;
this._reversed = !1;
this._repeatedCount = 0;
this.drawFrame();
};
e.prototype.syncStatus = function(t) {
this._frame = t._frame;
this._frameElapsed = t._frameElapsed;
this._reversed = t._reversed;
this._repeatedCount = t._repeatedCount;
this.drawFrame();
};
e.prototype.advance = function(t) {
for (var e = this._frame, i = this._reversed, n = t; ;) {
var o = this.interval + this._frames[this._frame].addDelay;
0 == this._frame && this._repeatedCount > 0 && (o += this.repeatDelay);
if (t < o) {
this._frameElapsed = 0;
break;
}
t -= o;
if (this.swing) if (this._reversed) {
this._frame--;
if (this._frame <= 0) {
this._frame = 0;
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = Math.max(0, this._frameCount - 2);
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = 0;
this._repeatedCount++;
}
}
if (this._frame == e && this._reversed == i) {
var r = n - t;
t -= Math.floor(t / r) * r;
}
}
this.drawFrame();
};
e.prototype.setPlaySettings = function(t, e, i, n, o) {
null == t && (t = 0);
null == e && (e = -1);
null == i && (i = 0);
null == n && (n = -1);
this._start = t;
this._end = e;
(-1 == this._end || this._end > this._frameCount - 1) && (this._end = this._frameCount - 1);
this._times = i;
this._endAt = n;
-1 == this._endAt && (this._endAt = this._end);
this._status = 0;
this._callback = o;
this._callbackObj = null;
this.frame = t;
};
e.prototype.update = function(t) {
if (this._playing && 0 != this._frameCount && 3 != this._status) {
1 != this.timeScale && (t *= this.timeScale);
this._frameElapsed += t;
var e = this.interval + this._frames[this._frame].addDelay;
0 == this._frame && this._repeatedCount > 0 && (e += this.repeatDelay);
if (!(this._frameElapsed < e)) {
this._frameElapsed -= e;
this._frameElapsed > this.interval && (this._frameElapsed = this.interval);
if (this.swing) if (this._reversed) {
this._frame--;
if (this._frame <= 0) {
this._frame = 0;
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = Math.max(0, this._frameCount - 2);
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = 0;
this._repeatedCount++;
}
}
if (1 == this._status) {
this._frame = this._start;
this._frameElapsed = 0;
this._status = 0;
} else if (2 == this._status) {
this._frame = this._endAt;
this._frameElapsed = 0;
this._status = 3;
if (null != this._callback) {
var i = this._callback, n = this._callbackObj;
this._callback = null;
this._callbackObj = null;
i.call(n);
}
} else if (this._frame == this._end) if (this._times > 0) {
this._times--;
0 == this._times ? this._status = 2 : this._status = 1;
} else 0 != this._start && (this._status = 1);
this.drawFrame();
}
}
};
e.prototype.drawFrame = function() {
if (this._frameCount > 0 && this._frame < this._frames.length) {
var t = this._frames[this._frame];
this.spriteFrame = t.texture;
}
};
return e;
}(t.Image);
t.MovieClip = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n(t, i) {
var n = e.call(this, t, i) || this;
n.pos = new cc.Vec2();
n.touchId = 0;
n.clickCount = 0;
n.button = 0;
n.keyModifiers = 0;
n.mouseWheelDelta = 0;
return n;
}
Object.defineProperty(n.prototype, "sender", {
get: function() {
return t.GObject.cast(this.currentTarget);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "isShiftDown", {
get: function() {
return !1;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "isCtrlDown", {
get: function() {
return !1;
},
enumerable: !1,
configurable: !0
});
n.prototype.captureTouch = function() {
var e = t.GObject.cast(this.currentTarget);
e && this._processor.addTouchMonitor(this.touchId, e);
};
n._borrow = function(t, e) {
var o;
if (i.length) {
(o = i.pop()).type = t;
o.bubbles = e;
} else o = new n(t, e);
return o;
};
n._return = function(t) {
t.initiator = null;
t.touch = null;
t.unuse();
i.push(t);
};
n.TOUCH_BEGIN = "fui_touch_begin";
n.TOUCH_MOVE = "fui_touch_move";
n.TOUCH_END = "fui_touch_end";
n.CLICK = "fui_click";
n.ROLL_OVER = "fui_roll_over";
n.ROLL_OUT = "fui_roll_out";
n.MOUSE_WHEEL = "fui_mouse_wheel";
n.DISPLAY = "fui_display";
n.UNDISPLAY = "fui_undisplay";
n.GEAR_STOP = "fui_gear_stop";
n.LINK = "fui_text_link";
n.Submit = "editing-return";
n.TEXT_CHANGE = "text-changed";
n.STATUS_CHANGED = "fui_status_changed";
n.XY_CHANGED = "fui_xy_changed";
n.SIZE_CHANGED = "fui_size_changed";
n.SIZE_DELAY_CHANGE = "fui_size_delay_change";
n.DRAG_START = "fui_drag_start";
n.DRAG_MOVE = "fui_drag_move";
n.DRAG_END = "fui_drag_end";
n.DROP = "fui_drop";
n.SCROLL = "fui_scroll";
n.SCROLL_END = "fui_scroll_end";
n.PULL_DOWN_RELEASE = "fui_pull_down_release";
n.PULL_UP_RELEASE = "fui_pull_up_release";
n.CLICK_ITEM = "fui_click_item";
n.LOADED = "fui_loaded";
n.VIDEOENDED = "fui_VideoEnded";
n.VIDEOREADY = "fui_VideoReady";
n.VIDEOPLAY = "fui_VideoPlay";
return n;
}(cc.Event);
t.Event = e;
var i = new Array();
t.borrowEvent = function(t, n) {
var o;
if (i.length) {
(o = i.pop()).type = t;
o.bubbles = n;
} else o = new e(t, n);
return o;
};
t.returnEvent = function(t) {
t.initiator = null;
t.unuse();
i.push(t);
};
var n = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Event);
t.FUIEvent = n;
})(t || (t = {}));
(function(t) {
var e = function() {
function t(t, e, i) {
this._data = t;
this.offsetX = null == e ? 0 : e;
this.offsetY = null == i ? 0 : i;
this.scaleX = 1;
this.scaleY = 1;
}
t.prototype.hitTest = function(t) {
var e = Math.floor((t.x / this.scaleX - this.offsetX) * this._data.scale), i = Math.floor((t.y / this.scaleY - this.offsetY) * this._data.scale);
if (e < 0 || i < 0 || e >= this._data.pixelWidth) return !1;
var n = i * this._data.pixelWidth + e, o = Math.floor(n / 8), r = n % 8;
return o >= 0 && o < this._data.pixels.length && 1 == (this._data.pixels[o] >> r & 1);
};
return t;
}();
t.PixelHitTest = e;
t.PixelHitTestData = function(t) {
t.readInt();
this.pixelWidth = t.readInt();
this.scale = 1 / t.readByte();
this.pixels = t.readBuffer().data;
};
var i = function() {
function t(t) {
this._child = t;
}
t.prototype.hitTest = function(t, e) {
return null != this._child.hitTest(e, !1);
};
return t;
}();
t.ChildHitArea = i;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var t = e.call(this) || this;
t._touches = new Array();
t._rollOutChain = new Array();
t._rollOverChain = new Array();
t._touchPos = new cc.Vec2();
return t;
}
n.prototype.onLoad = function() {
this._owner = this.node.$gobj;
};
n.prototype.onEnable = function() {
var t = this.node;
t.on(cc.Node.EventType.TOUCH_START, this.touchBeginHandler, this);
t.on(cc.Node.EventType.TOUCH_MOVE, this.touchMoveHandler, this);
t.on(cc.Node.EventType.TOUCH_END, this.touchEndHandler, this);
t.on(cc.Node.EventType.TOUCH_CANCEL, this.touchCancelHandler, this);
t.on(cc.Node.EventType.MOUSE_DOWN, this.mouseDownHandler, this);
t.on(cc.Node.EventType.MOUSE_MOVE, this.mouseMoveHandler, this);
t.on(cc.Node.EventType.MOUSE_UP, this.mouseUpHandler, this);
t.on(cc.Node.EventType.MOUSE_WHEEL, this.mouseWheelHandler, this);
this._touchListener = this.node._touchListener;
};
n.prototype.onDisable = function() {
var t = this.node;
t.off(cc.Node.EventType.TOUCH_START, this.touchBeginHandler, this);
t.off(cc.Node.EventType.TOUCH_MOVE, this.touchMoveHandler, this);
t.off(cc.Node.EventType.TOUCH_END, this.touchEndHandler, this);
t.off(cc.Node.EventType.TOUCH_CANCEL, this.touchCancelHandler, this);
t.off(cc.Node.EventType.MOUSE_DOWN, this.mouseDownHandler, this);
t.off(cc.Node.EventType.MOUSE_MOVE, this.mouseMoveHandler, this);
t.off(cc.Node.EventType.MOUSE_UP, this.mouseUpHandler, this);
t.off(cc.Node.EventType.MOUSE_WHEEL, this.mouseWheelHandler, this);
this._touchListener = null;
};
n.prototype.getAllTouches = function(t) {
t = t || new Array();
for (var e = this._touches.length, i = 0; i < e; i++) {
var n = this._touches[i];
-1 != n.touchId && t.push(n.touchId);
}
return t;
};
n.prototype.getTouchPosition = function(t) {
void 0 === t && (t = -1);
for (var e = this._touches.length, i = 0; i < e; i++) {
var n = this._touches[i];
if (-1 != n.touchId && (-1 == t || n.touchId == t)) return n.pos;
}
return cc.Vec2.ZERO;
};
n.prototype.getTouchTarget = function() {
for (var t = this._touches.length, e = 0; e < t; e++) {
var i = this._touches[e];
if (-1 != i.touchId) return i.target;
}
return null;
};
n.prototype.addTouchMonitor = function(t, e) {
var i = this.getInfo(t, !1);
i && -1 == i.touchMonitors.indexOf(e) && i.touchMonitors.push(e);
};
n.prototype.removeTouchMonitor = function(t) {
for (var e = this._touches.length, i = 0; i < e; i++) {
var n = this._touches[i], o = n.touchMonitors.indexOf(t);
-1 != o && n.touchMonitors.splice(o, 1);
}
};
n.prototype.cancelClick = function(t) {
var e = this.getInfo(t, !1);
e && (e.clickCancelled = !0);
};
n.prototype.simulateClick = function(e) {
var i;
(i = t.Event._borrow(t.Event.TOUCH_BEGIN, !0)).initiator = e;
i.pos.set(e.localToGlobal());
i.touchId = 0;
i.clickCount = 1;
i.button = 0;
i._processor = this;
this._captureCallback && this._captureCallback.call(this._owner, i);
e.node.dispatchEvent(i);
i.unuse();
i.type = t.Event.TOUCH_END;
i.bubbles = !0;
e.node.dispatchEvent(i);
i.unuse();
i.type = t.Event.CLICK;
i.bubbles = !0;
e.node.dispatchEvent(i);
t.Event._return(i);
};
n.prototype.touchBeginHandler = function(e) {
var i = this.updateInfo(e.getID(), e.getLocation(), e);
this._touchListener.setSwallowTouches(i.target != this._owner);
this.setBegin(i);
var n = this.getEvent(i, i.target, t.Event.TOUCH_BEGIN, !0);
this._captureCallback && this._captureCallback.call(this._owner, n);
i.target.node.dispatchEvent(n);
this.handleRollOver(i, i.target);
return !0;
};
n.prototype.touchMoveHandler = function(e) {
var i = this.updateInfo(e.getID(), e.getLocation(), e);
this.handleRollOver(i, i.target);
if (i.began) {
for (var n = this.getEvent(i, i.target, t.Event.TOUCH_MOVE, !1), o = !1, r = i.touchMonitors.length, s = 0; s < r; s++) {
var a = i.touchMonitors[s];
if (null != a.node && a.node.activeInHierarchy) {
n.unuse();
n.type = t.Event.TOUCH_MOVE;
a.node.dispatchEvent(n);
a == this._owner && (o = !0);
}
}
if (!o && this.node) {
n.unuse();
n.type = t.Event.TOUCH_MOVE;
this.node.dispatchEvent(n);
}
t.Event._return(n);
}
};
n.prototype.touchEndHandler = function(e) {
var i = this.updateInfo(e.getID(), e.getLocation(), e);
this.setEnd(i);
for (var n = this.getEvent(i, i.target, t.Event.TOUCH_END, !1), o = i.touchMonitors.length, r = 0; r < o; r++) {
var s = i.touchMonitors[r];
if (s != i.target && null != s.node && s.node.activeInHierarchy && !(s instanceof t.GComponent && s.isAncestorOf(i.target))) {
n.unuse();
n.type = t.Event.TOUCH_END;
s.node.dispatchEvent(n);
}
}
i.touchMonitors.length = 0;
if (i.target && i.target.node) {
i.target instanceof t.GRichTextField && i.target.node.getComponent(cc.RichText)._onTouchEnded(n);
n.unuse();
n.type = t.Event.TOUCH_END;
n.bubbles = !0;
i.target.node.dispatchEvent(n);
}
t.Event._return(n);
i.target = this.clickTest(i);
if (i.target) {
n = this.getEvent(i, i.target, t.Event.CLICK, !0);
i.target.node.dispatchEvent(n);
t.Event._return(n);
}
cc.sys.isMobile ? this.handleRollOver(i, null) : this.handleRollOver(i, i.target);
i.target = null;
i.touchId = -1;
i.button = -1;
};
n.prototype.touchCancelHandler = function(e) {
for (var i = this.updateInfo(e.getID(), e.getLocation(), e), n = this.getEvent(i, i.target, t.Event.TOUCH_END, !1), o = i.touchMonitors.length, r = 0; r < o; r++) {
var s = i.touchMonitors[r];
if (s != i.target && null != s.node && s.node.activeInHierarchy && !(s instanceof t.GComponent && s.isAncestorOf(i.target))) {
n.initiator = s;
s.node.dispatchEvent(n);
}
}
i.touchMonitors.length = 0;
if (i.target && i.target.node) {
n.bubbles = !0;
i.target.node.dispatchEvent(n);
}
t.Event._return(n);
this.handleRollOver(i, null);
i.target = null;
i.touchId = -1;
i.button = -1;
};
n.prototype.mouseDownHandler = function(t) {
this.getInfo(0, !0).button = t.getButton();
};
n.prototype.mouseUpHandler = function(t) {
this.getInfo(0, !0).button = t.getButton();
};
n.prototype.mouseMoveHandler = function(e) {
var i = this.getInfo(0, !1);
if (!(i && Math.abs(i.pos.x - e.getLocationX()) < 1 && Math.abs(i.pos.y - (t.GRoot.inst.height - e.getLocationY())) < 1)) {
i = this.updateInfo(0, e.getLocation());
this.handleRollOver(i, i.target);
if (i.began) {
for (var n = this.getEvent(i, i.target, t.Event.TOUCH_MOVE, !1), o = !1, r = i.touchMonitors.length, s = 0; s < r; s++) {
var a = i.touchMonitors[s];
if (null != a.node && a.node.activeInHierarchy) {
n.initiator = a;
a.node.dispatchEvent(n);
a == this._owner && (o = !0);
}
}
if (!o && this.node) {
n.initiator = this._owner;
this.node.dispatchEvent(n);
t.Event._return(n);
}
t.Event._return(n);
}
}
};
n.prototype.mouseWheelHandler = function(e) {
var i = this.updateInfo(0, e.getLocation());
i.mouseWheelDelta = Math.max(e.getScrollX(), e.getScrollY());
var n = this.getEvent(i, i.target, t.Event.MOUSE_WHEEL, !0);
i.target.node.dispatchEvent(n);
t.Event._return(n);
};
n.prototype.updateInfo = function(e, i, n) {
var o = cc.Camera.findCamera(this.node);
o ? o.getScreenToWorldPoint(i, this._touchPos) : this._touchPos.set(i);
this._touchPos.y = t.GRoot.inst.height - this._touchPos.y;
var r = this._owner.hitTest(this._touchPos);
r || (r = this._owner);
var s = this.getInfo(e);
s.target = r;
s.pos.set(this._touchPos);
s.button = cc.Event.EventMouse.BUTTON_LEFT;
s.touch = n;
return s;
};
n.prototype.getInfo = function(t, e) {
void 0 === e && (e = !0);
for (var n = null, o = this._touches.length, r = 0; r < o; r++) {
var s = this._touches[r];
if (s.touchId == t) return s;
-1 == s.touchId && (n = s);
}
if (!n) {
if (!e) return null;
n = new i();
this._touches.push(n);
}
n.touchId = t;
return n;
};
n.prototype.setBegin = function(t) {
t.began = !0;
t.clickCancelled = !1;
t.downPos.set(t.pos);
t.downTargets.length = 0;
for (var e = t.target; e; ) {
t.downTargets.push(e);
e = e.findParent();
}
};
n.prototype.setEnd = function(e) {
e.began = !1;
var i = t.ToolSet.getTime();
i - e.lastClickTime < .45 ? 2 == e.clickCount ? e.clickCount = 1 : e.clickCount++ : e.clickCount = 1;
e.lastClickTime = i;
};
n.prototype.clickTest = function(t) {
if (0 == t.downTargets.length || t.clickCancelled || Math.abs(t.pos.x - t.downPos.x) > 50 || Math.abs(t.pos.y - t.downPos.y) > 50) return null;
var e = t.downTargets[0];
if (e && e.node && e.node.activeInHierarchy) return e;
e = t.target;
for (;e && (-1 == t.downTargets.indexOf(e) || !e.node || !e.node.activeInHierarchy); ) e = e.findParent();
return e;
};
n.prototype.handleRollOver = function(e, i) {
if (e.lastRollOver != i) {
for (var n = e.lastRollOver; n && n.node; ) {
this._rollOutChain.push(n);
n = n.findParent();
}
n = i;
for (;n && n.node; ) {
if (-1 != (r = this._rollOutChain.indexOf(n))) {
this._rollOutChain.length = r;
break;
}
this._rollOverChain.push(n);
n = n.findParent();
}
e.lastRollOver = i;
for (var o = this._rollOutChain.length, r = 0; r < o; r++) if ((n = this._rollOutChain[r]).node && n.node.activeInHierarchy) {
var s = this.getEvent(e, n, t.Event.ROLL_OUT, !1);
n.node.dispatchEvent(s);
t.Event._return(s);
}
o = this._rollOverChain.length;
for (r = 0; r < o; r++) if ((n = this._rollOverChain[r]).node && n.node.activeInHierarchy) {
s = this.getEvent(e, n, t.Event.ROLL_OVER, !1);
n.node.dispatchEvent(s);
t.Event._return(s);
}
this._rollOutChain.length = 0;
this._rollOverChain.length = 0;
}
};
n.prototype.getEvent = function(e, i, n, o) {
var r = t.Event._borrow(n, o);
r.initiator = i;
r.touch = e.touch;
r.pos.set(e.pos);
r.touchId = e.touch ? e.touch.getID() : 0;
r.clickCount = e.clickCount;
r.button = e.button;
r.mouseWheelDelta = e.mouseWheelDelta;
r._processor = this;
return r;
};
return n;
}(cc.Component);
t.InputProcessor = e;
var i = function() {
this.pos = new cc.Vec2();
this.touchId = 0;
this.clickCount = 0;
this.mouseWheelDelta = 0;
this.button = -1;
this.downPos = new cc.Vec2();
this.began = !1;
this.clickCancelled = !1;
this.lastClickTime = 0;
this.downTargets = new Array();
this.touchMonitors = new Array();
};
})(t || (t = {}));
(function(t) {
var e, i = function() {
function i(t) {
this._owner = t;
}
i.create = function(i, n) {
e || (e = [ t.GearDisplay, t.GearXY, t.GearSize, t.GearLook, t.GearColor, t.GearAnimation, t.GearText, t.GearIcon, t.GearDisplay2, t.GearFontSize ]);
return new e[n](i);
};
i.prototype.dispose = function() {
if (this._tweenConfig && this._tweenConfig._tweener) {
this._tweenConfig._tweener.kill();
this._tweenConfig._tweener = null;
}
};
Object.defineProperty(i.prototype, "controller", {
get: function() {
return this._controller;
},
set: function(t) {
if (t != this._controller) {
this._controller = t;
this._controller && this.init();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "tweenConfig", {
get: function() {
this._tweenConfig || (this._tweenConfig = new n());
return this._tweenConfig;
},
enumerable: !1,
configurable: !0
});
i.prototype.setup = function(e) {
this._controller = this._owner.parent.getControllerAt(e.readShort());
this.init();
var i, o, r = e.readShort();
if (this instanceof t.GearDisplay) this.pages = e.readSArray(r); else if (this instanceof t.GearDisplay2) this.pages = e.readSArray(r); else {
for (i = 0; i < r; i++) null != (o = e.readS()) && this.addStatus(o, e);
e.readBool() && this.addStatus(null, e);
}
if (e.readBool()) {
this._tweenConfig = new n();
this._tweenConfig.easeType = e.readByte();
this._tweenConfig.duration = e.readFloat();
this._tweenConfig.delay = e.readFloat();
}
if (e.version >= 2) if (this instanceof t.GearXY) {
if (e.readBool()) {
this.positionsInPercent = !0;
for (i = 0; i < r; i++) null != (o = e.readS()) && this.addExtStatus(o, e);
e.readBool() && this.addExtStatus(null, e);
}
} else this instanceof t.GearDisplay2 && (this.condition = e.readByte());
};
i.prototype.updateFromRelations = function() {};
i.prototype.addStatus = function() {};
i.prototype.init = function() {};
i.prototype.apply = function() {};
i.prototype.updateState = function() {};
return i;
}();
t.GearBase = i;
var n = function() {
this.tween = !0;
this.easeType = t.EaseType.QuadOut;
this.duration = .3;
this.delay = 0;
};
t.GearTweenConfig = n;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
playing: this._owner.getProp(t.ObjectPropID.Playing),
frame: this._owner.getProp(t.ObjectPropID.Frame)
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.playing = e.readBool();
i.frame = e.readInt();
};
i.prototype.apply = function() {
this._owner._gearLocked = !0;
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
this._owner.setProp(t.ObjectPropID.Playing, e.playing);
this._owner.setProp(t.ObjectPropID.Frame, e.frame);
this._owner._gearLocked = !1;
};
i.prototype.updateState = function() {
var e = this._storage[this._controller.selectedPageId];
e || (this._storage[this._controller.selectedPageId] = e = {});
e.playing = this._owner.getProp(t.ObjectPropID.Playing);
e.frame = this._owner.getProp(t.ObjectPropID.Frame);
};
return i;
}(t.GearBase);
t.GearAnimation = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
color: this._owner.getProp(t.ObjectPropID.Color),
strokeColor: this._owner.getProp(t.ObjectPropID.OutlineColor)
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.color = e.readColor();
i.strokeColor = e.readColor();
};
i.prototype.apply = function() {
this._owner._gearLocked = !0;
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
this._owner.setProp(t.ObjectPropID.Color, e.color);
this._owner.setProp(t.ObjectPropID.OutlineColor, e.strokeColor);
this._owner._gearLocked = !1;
};
i.prototype.updateState = function() {
var e = this._storage[this._controller.selectedPageId];
e || (this._storage[this._controller.selectedPageId] = e = {});
e.color = this._owner.getProp(t.ObjectPropID.Color);
e.strokeColor = this._owner.getProp(t.ObjectPropID.OutlineColor);
};
return i;
}(t.GearBase);
t.GearColor = e;
})(t || (t = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
var i = t.call(this, e) || this;
i._displayLockToken = 1;
i._visible = 0;
return i;
}
e.prototype.init = function() {
this.pages = null;
};
e.prototype.apply = function() {
this._displayLockToken++;
0 == this._displayLockToken && (this._displayLockToken = 1);
null == this.pages || 0 == this.pages.length || -1 != this.pages.indexOf(this._controller.selectedPageId) ? this._visible = 1 : this._visible = 0;
};
e.prototype.addLock = function() {
this._visible++;
return this._displayLockToken;
};
e.prototype.releaseLock = function(t) {
t == this._displayLockToken && this._visible--;
};
Object.defineProperty(e.prototype, "connected", {
get: function() {
return null == this._controller || this._visible > 0;
},
enumerable: !1,
configurable: !0
});
return e;
}(t.GearBase);
t.GearDisplay = e;
})(t || (t = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
var i = t.call(this, e) || this;
i._visible = 0;
return i;
}
e.prototype.init = function() {
this.pages = null;
};
e.prototype.apply = function() {
null == this.pages || 0 == this.pages.length || -1 != this.pages.indexOf(this._controller.selectedPageId) ? this._visible = 1 : this._visible = 0;
};
e.prototype.evaluate = function(t) {
var e = null == this._controller || this._visible > 0;
return 0 == this.condition ? e && t : e || t;
};
return e;
}(t.GearBase);
t.GearDisplay2 = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
var i = e.call(this, t) || this;
i._default = 0;
return i;
}
i.prototype.init = function() {
this._default = this._owner.getProp(t.ObjectPropID.FontSize);
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
null == t ? this._default = e.readInt() : this._storage[t] = e.readInt();
};
i.prototype.apply = function() {
this._owner._gearLocked = !0;
var e = this._storage[this._controller.selectedPageId];
null != e ? this._owner.setProp(t.ObjectPropID.FontSize, e) : this._owner.setProp(t.ObjectPropID.FontSize, this._default);
this._owner._gearLocked = !1;
};
i.prototype.updateState = function() {
this._storage[this._controller.selectedPageId] = this._owner.getProp(t.ObjectPropID.FontSize);
};
return i;
}(t.GearBase);
t.GearFontSize = e;
})(t || (t = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
return t.call(this, e) || this;
}
e.prototype.init = function() {
this._default = this._owner.icon;
this._storage = {};
};
e.prototype.addStatus = function(t, e) {
null == t ? this._default = e.readS() : this._storage[t] = e.readS();
};
e.prototype.apply = function() {
this._owner._gearLocked = !0;
var t = this._storage[this._controller.selectedPageId];
this._owner.icon = void 0 !== t ? t : this._default;
this._owner._gearLocked = !1;
};
e.prototype.updateState = function() {
this._storage[this._controller.selectedPageId] = this._owner.icon;
};
return e;
}(t.GearBase);
t.GearIcon = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
alpha: this._owner.alpha,
rotation: this._owner.rotation,
grayed: this._owner.grayed,
touchable: this._owner.touchable
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.alpha = e.readFloat();
i.rotation = e.readFloat();
i.grayed = e.readBool();
i.touchable = e.readBool();
};
i.prototype.apply = function() {
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
if (this._tweenConfig && this._tweenConfig.tween && !t.UIPackage._constructing && !t.GearBase.disableAllTweenEffect) {
this._owner._gearLocked = !0;
this._owner.grayed = e.grayed;
this._owner.touchable = e.touchable;
this._owner._gearLocked = !1;
if (this._tweenConfig._tweener) {
if (this._tweenConfig._tweener.endValue.x == e.alpha && this._tweenConfig._tweener.endValue.y == e.rotation) return;
this._tweenConfig._tweener.kill(!0);
this._tweenConfig._tweener = null;
}
var i = e.alpha != this._owner.alpha, n = e.rotation != this._owner.rotation;
if (i || n) {
this._owner.checkGearController(0, this._controller) && (this._tweenConfig._displayLockToken = this._owner.addDisplayLock());
this._tweenConfig._tweener = t.GTween.to2(this._owner.alpha, this._owner.rotation, e.alpha, e.rotation, this._tweenConfig.duration).setDelay(this._tweenConfig.delay).setEase(this._tweenConfig.easeType).setUserData((i ? 1 : 0) + (n ? 2 : 0)).setTarget(this).onUpdate(this.__tweenUpdate, this).onComplete(this.__tweenComplete, this);
}
} else {
this._owner._gearLocked = !0;
this._owner.grayed = e.grayed;
this._owner.touchable = e.touchable;
this._owner.alpha = e.alpha;
this._owner.rotation = e.rotation;
this._owner._gearLocked = !1;
}
};
i.prototype.__tweenUpdate = function(t) {
var e = t.userData;
this._owner._gearLocked = !0;
0 != (1 & e) && (this._owner.alpha = t.value.x);
0 != (2 & e) && (this._owner.rotation = t.value.y);
this._owner._gearLocked = !1;
};
i.prototype.__tweenComplete = function() {
if (0 != this._tweenConfig._displayLockToken) {
this._owner.releaseDisplayLock(this._tweenConfig._displayLockToken);
this._tweenConfig._displayLockToken = 0;
}
this._tweenConfig._tweener = null;
};
i.prototype.updateState = function() {
var t = this._storage[this._controller.selectedPageId];
t || (this._storage[this._controller.selectedPageId] = t = {});
t.alpha = this._owner.alpha;
t.rotation = this._owner.rotation;
t.grayed = this._owner.grayed;
t.touchable = this._owner.touchable;
};
return i;
}(t.GearBase);
t.GearLook = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
width: this._owner.width,
height: this._owner.height,
scaleX: this._owner.scaleX,
scaleY: this._owner.scaleY
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.width = e.readInt();
i.height = e.readInt();
i.scaleX = e.readFloat();
i.scaleY = e.readFloat();
};
i.prototype.apply = function() {
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
if (this._tweenConfig && this._tweenConfig.tween && !t.UIPackage._constructing && !t.GearBase.disableAllTweenEffect) {
if (this._tweenConfig._tweener) {
if (this._tweenConfig._tweener.endValue.x == e.width && this._tweenConfig._tweener.endValue.y == e.height && this._tweenConfig._tweener.endValue.z == e.scaleX && this._tweenConfig._tweener.endValue.w == e.scaleY) return;
this._tweenConfig._tweener.kill(!0);
this._tweenConfig._tweener = null;
}
var i = e.width != this._owner.width || e.height != this._owner.height, n = e.scaleX != this._owner.scaleX || e.scaleY != this._owner.scaleY;
if (i || n) {
this._owner.checkGearController(0, this._controller) && (this._tweenConfig._displayLockToken = this._owner.addDisplayLock());
this._tweenConfig._tweener = t.GTween.to4(this._owner.width, this._owner.height, this._owner.scaleX, this._owner.scaleY, e.width, e.height, e.scaleX, e.scaleY, this._tweenConfig.duration).setDelay(this._tweenConfig.delay).setEase(this._tweenConfig.easeType).setUserData((i ? 1 : 0) + (n ? 2 : 0)).setTarget(this).onUpdate(this.__tweenUpdate, this).onComplete(this.__tweenComplete, this);
}
} else {
this._owner._gearLocked = !0;
this._owner.setSize(e.width, e.height, this._owner.gearXY.controller == this._controller);
this._owner.setScale(e.scaleX, e.scaleY);
this._owner._gearLocked = !1;
}
};
i.prototype.__tweenUpdate = function(t) {
var e = t.userData;
this._owner._gearLocked = !0;
0 != (1 & e) && this._owner.setSize(t.value.x, t.value.y, this._owner.checkGearController(1, this._controller));
0 != (2 & e) && this._owner.setScale(t.value.z, t.value.w);
this._owner._gearLocked = !1;
};
i.prototype.__tweenComplete = function() {
if (0 != this._tweenConfig._displayLockToken) {
this._owner.releaseDisplayLock(this._tweenConfig._displayLockToken);
this._tweenConfig._displayLockToken = 0;
}
this._tweenConfig._tweener = null;
};
i.prototype.updateState = function() {
var t = this._storage[this._controller.selectedPageId];
t || (this._storage[this._controller.selectedPageId] = t = {});
t.width = this._owner.width;
t.height = this._owner.height;
t.scaleX = this._owner.scaleX;
t.scaleY = this._owner.scaleY;
};
i.prototype.updateFromRelations = function(t, e) {
if (null != this._controller && null != this._storage) {
for (var i in this._storage) {
var n = this._storage[i];
n.width += t;
n.height += e;
}
this._default.width += t;
this._default.height += e;
this.updateState();
}
};
return i;
}(t.GearBase);
t.GearSize = e;
})(t || (t = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
return t.call(this, e) || this;
}
e.prototype.init = function() {
this._default = this._owner.text;
this._storage = {};
};
e.prototype.addStatus = function(t, e) {
null == t ? this._default = e.readS() : this._storage[t] = e.readS();
};
e.prototype.apply = function() {
this._owner._gearLocked = !0;
var t = this._storage[this._controller.selectedPageId];
this._owner.text = void 0 !== t ? t : this._default;
this._owner._gearLocked = !1;
};
e.prototype.updateState = function() {
this._storage[this._controller.selectedPageId] = this._owner.text;
};
return e;
}(t.GearBase);
t.GearText = e;
})(t || (t = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
x: this._owner.x,
y: this._owner.y,
px: this._owner.x / this._owner.parent.width,
py: this._owner.y / this._owner.parent.height
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.x = e.readInt();
i.y = e.readInt();
};
i.prototype.addExtStatus = function(t, e) {
var i;
(i = null == t ? this._default : this._storage[t]).px = e.readFloat();
i.py = e.readFloat();
};
i.prototype.apply = function() {
var e, i, n = this._storage[this._controller.selectedPageId];
n || (n = this._default);
if (this.positionsInPercent && this._owner.parent) {
e = n.px * this._owner.parent.width;
i = n.py * this._owner.parent.height;
} else {
e = n.x;
i = n.y;
}
if (this._tweenConfig && this._tweenConfig.tween && !t.UIPackage._constructing && !t.GearBase.disableAllTweenEffect) {
if (this._tweenConfig._tweener) {
if (this._tweenConfig._tweener.endValue.x == e && this._tweenConfig._tweener.endValue.y == i) return;
this._tweenConfig._tweener.kill(!0);
this._tweenConfig._tweener = null;
}
var o = this._owner.x, r = this._owner.y;
if (o != e || r != i) {
this._owner.checkGearController(0, this._controller) && (this._tweenConfig._displayLockToken = this._owner.addDisplayLock());
this._tweenConfig._tweener = t.GTween.to2(o, r, e, i, this._tweenConfig.duration).setDelay(this._tweenConfig.delay).setEase(this._tweenConfig.easeType).setTarget(this).onUpdate(this.__tweenUpdate, this).onComplete(this.__tweenComplete, this);
}
} else {
this._owner._gearLocked = !0;
this._owner.setPosition(e, i);
this._owner._gearLocked = !1;
}
};
i.prototype.__tweenUpdate = function(t) {
this._owner._gearLocked = !0;
this._owner.setPosition(t.value.x, t.value.y);
this._owner._gearLocked = !1;
};
i.prototype.__tweenComplete = function() {
if (0 != this._tweenConfig._displayLockToken) {
this._owner.releaseDisplayLock(this._tweenConfig._displayLockToken);
this._tweenConfig._displayLockToken = 0;
}
this._tweenConfig._tweener = null;
};
i.prototype.updateState = function() {
var t = this._storage[this._controller.selectedPageId];
t || (this._storage[this._controller.selectedPageId] = t = {});
t.x = this._owner.x;
t.y = this._owner.y;
t.px = this._owner.x / this._owner.parent.width;
t.py = this._owner.y / this._owner.parent.height;
};
i.prototype.updateFromRelations = function(t, e) {
if (null != this._controller && null != this._storage && !this.positionsInPercent) {
for (var i in this._storage) {
var n = this._storage[i];
n.x += t;
n.y += e;
}
this._default.x += t;
this._default.y += e;
this.updateState();
}
};
return i;
}(t.GearBase);
t.GearXY = e;
})(t || (t = {}));
(function(t) {
var e = .5 * Math.PI, i = 2 * Math.PI;
t.evaluateEase = function(s, a, l, h, c) {
switch (s) {
case t.EaseType.Linear:
return a / l;

case t.EaseType.SineIn:
return 1 - Math.cos(a / l * e);

case t.EaseType.SineOut:
return Math.sin(a / l * e);

case t.EaseType.SineInOut:
return -.5 * (Math.cos(Math.PI * a / l) - 1);

case t.EaseType.QuadIn:
return (a /= l) * a;

case t.EaseType.QuadOut:
return -(a /= l) * (a - 2);

case t.EaseType.QuadInOut:
return (a /= .5 * l) < 1 ? .5 * a * a : -.5 * (--a * (a - 2) - 1);

case t.EaseType.CubicIn:
return (a /= l) * a * a;

case t.EaseType.CubicOut:
return (a = a / l - 1) * a * a + 1;

case t.EaseType.CubicInOut:
return (a /= .5 * l) < 1 ? .5 * a * a * a : .5 * ((a -= 2) * a * a + 2);

case t.EaseType.QuartIn:
return (a /= l) * a * a * a;

case t.EaseType.QuartOut:
return -((a = a / l - 1) * a * a * a - 1);

case t.EaseType.QuartInOut:
return (a /= .5 * l) < 1 ? .5 * a * a * a * a : -.5 * ((a -= 2) * a * a * a - 2);

case t.EaseType.QuintIn:
return (a /= l) * a * a * a * a;

case t.EaseType.QuintOut:
return (a = a / l - 1) * a * a * a * a + 1;

case t.EaseType.QuintInOut:
return (a /= .5 * l) < 1 ? .5 * a * a * a * a * a : .5 * ((a -= 2) * a * a * a * a + 2);

case t.EaseType.ExpoIn:
return 0 == a ? 0 : Math.pow(2, 10 * (a / l - 1));

case t.EaseType.ExpoOut:
return a == l ? 1 : 1 - Math.pow(2, -10 * a / l);

case t.EaseType.ExpoInOut:
return 0 == a ? 0 : a == l ? 1 : (a /= .5 * l) < 1 ? .5 * Math.pow(2, 10 * (a - 1)) : .5 * (2 - Math.pow(2, -10 * --a));

case t.EaseType.CircIn:
return -(Math.sqrt(1 - (a /= l) * a) - 1);

case t.EaseType.CircOut:
return Math.sqrt(1 - (a = a / l - 1) * a);

case t.EaseType.CircInOut:
return (a /= .5 * l) < 1 ? -.5 * (Math.sqrt(1 - a * a) - 1) : .5 * (Math.sqrt(1 - (a -= 2) * a) + 1);

case t.EaseType.ElasticIn:
var u;
if (0 == a) return 0;
if (1 == (a /= l)) return 1;
0 == c && (c = .3 * l);
if (h < 1) {
h = 1;
u = c / 4;
} else u = c / i * Math.asin(1 / h);
return -h * Math.pow(2, 10 * (a -= 1)) * Math.sin((a * l - u) * i / c);

case t.EaseType.ElasticOut:
var p;
if (0 == a) return 0;
if (1 == (a /= l)) return 1;
0 == c && (c = .3 * l);
if (h < 1) {
h = 1;
p = c / 4;
} else p = c / i * Math.asin(1 / h);
return h * Math.pow(2, -10 * a) * Math.sin((a * l - p) * i / c) + 1;

case t.EaseType.ElasticInOut:
var d;
if (0 == a) return 0;
if (2 == (a /= .5 * l)) return 1;
0 == c && (c = .3 * 1.5 * l);
if (h < 1) {
h = 1;
d = c / 4;
} else d = c / i * Math.asin(1 / h);
return a < 1 ? h * Math.pow(2, 10 * (a -= 1)) * Math.sin((a * l - d) * i / c) * -.5 : h * Math.pow(2, -10 * (a -= 1)) * Math.sin((a * l - d) * i / c) * .5 + 1;

case t.EaseType.BackIn:
return (a /= l) * a * ((h + 1) * a - h);

case t.EaseType.BackOut:
return (a = a / l - 1) * a * ((h + 1) * a + h) + 1;

case t.EaseType.BackInOut:
return (a /= .5 * l) < 1 ? a * a * ((1 + (h *= 1.525)) * a - h) * .5 : .5 * ((a -= 2) * a * ((1 + (h *= 1.525)) * a + h) + 2);

case t.EaseType.BounceIn:
return n(a, l);

case t.EaseType.BounceOut:
return o(a, l);

case t.EaseType.BounceInOut:
return r(a, l);

default:
return -(a /= l) * (a - 2);
}
};
function n(t, e) {
return 1 - o(e - t, e);
}
function o(t, e) {
return (t /= e) < 1 / 2.75 ? 7.5625 * t * t : t < 2 / 2.75 ? 7.5625 * (t -= 1.5 / 2.75) * t + .75 : t < 2.5 / 2.75 ? 7.5625 * (t -= 2.25 / 2.75) * t + .9375 : 7.5625 * (t -= 2.625 / 2.75) * t + .984375;
}
function r(t, e) {
return t < .5 * e ? .5 * n(2 * t, e) : .5 * o(2 * t - e, e) + .5;
}
})(t || (t = {}));
(function(t) {
(function(t) {
t[t.Linear = 0] = "Linear";
t[t.SineIn = 1] = "SineIn";
t[t.SineOut = 2] = "SineOut";
t[t.SineInOut = 3] = "SineInOut";
t[t.QuadIn = 4] = "QuadIn";
t[t.QuadOut = 5] = "QuadOut";
t[t.QuadInOut = 6] = "QuadInOut";
t[t.CubicIn = 7] = "CubicIn";
t[t.CubicOut = 8] = "CubicOut";
t[t.CubicInOut = 9] = "CubicInOut";
t[t.QuartIn = 10] = "QuartIn";
t[t.QuartOut = 11] = "QuartOut";
t[t.QuartInOut = 12] = "QuartInOut";
t[t.QuintIn = 13] = "QuintIn";
t[t.QuintOut = 14] = "QuintOut";
t[t.QuintInOut = 15] = "QuintInOut";
t[t.ExpoIn = 16] = "ExpoIn";
t[t.ExpoOut = 17] = "ExpoOut";
t[t.ExpoInOut = 18] = "ExpoInOut";
t[t.CircIn = 19] = "CircIn";
t[t.CircOut = 20] = "CircOut";
t[t.CircInOut = 21] = "CircInOut";
t[t.ElasticIn = 22] = "ElasticIn";
t[t.ElasticOut = 23] = "ElasticOut";
t[t.ElasticInOut = 24] = "ElasticInOut";
t[t.BackIn = 25] = "BackIn";
t[t.BackOut = 26] = "BackOut";
t[t.BackInOut = 27] = "BackInOut";
t[t.BounceIn = 28] = "BounceIn";
t[t.BounceOut = 29] = "BounceOut";
t[t.BounceInOut = 30] = "BounceInOut";
t[t.Custom = 31] = "Custom";
})(t.EaseType || (t.EaseType = {}));
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {
this._segments = new Array();
this._points = new Array();
}
Object.defineProperty(e.prototype, "length", {
get: function() {
return this._fullLength;
},
enumerable: !1,
configurable: !0
});
e.prototype.create2 = function(e, n, o, r) {
var s;
if (Array.isArray(e)) s = e; else {
(s = new Array()).push(e);
s.push(n);
o && s.push(o);
r && s.push(r);
}
this._segments.length = 0;
this._points.length = 0;
this._fullLength = 0;
var a = s.length;
if (0 != a) {
var l = i;
l.length = 0;
var h = s[0];
h.curveType == t.CurveType.CRSpline && l.push(new cc.Vec2(h.x, h.y));
for (var c = 1; c < a; c++) {
var u = s[c];
if (h.curveType != t.CurveType.CRSpline) {
var p = {};
p.type = h.curveType;
p.ptStart = this._points.length;
if (h.curveType == t.CurveType.Straight) {
p.ptCount = 2;
this._points.push(new cc.Vec2(h.x, h.y));
this._points.push(new cc.Vec2(u.x, u.y));
} else if (h.curveType == t.CurveType.Bezier) {
p.ptCount = 3;
this._points.push(new cc.Vec2(h.x, h.y));
this._points.push(new cc.Vec2(u.x, u.y));
this._points.push(new cc.Vec2(h.control1_x, h.control1_y));
} else if (h.curveType == t.CurveType.CubicBezier) {
p.ptCount = 4;
this._points.push(new cc.Vec2(h.x, h.y));
this._points.push(new cc.Vec2(u.x, u.y));
this._points.push(new cc.Vec2(h.control1_x, h.control1_y));
this._points.push(new cc.Vec2(h.control2_x, h.control2_y));
}
p.length = t.ToolSet.distance(h.x, h.y, u.x, u.y);
this._fullLength += p.length;
this._segments.push(p);
}
if (u.curveType != t.CurveType.CRSpline) {
if (l.length > 0) {
l.push(new cc.Vec2(u.x, u.y));
this.createSplineSegment();
}
} else l.push(new cc.Vec2(u.x, u.y));
h = u;
}
l.length > 1 && this.createSplineSegment();
}
};
e.prototype.create = function(e) {
this._segments.length = 0;
this._points.length = 0;
this._fullLength = 0;
var i = e.length;
if (0 != i) {
var n = [], o = e[0];
o.curveType == t.CurveType.CRSpline && n.push(new cc.Vec2(o.x, o.y));
for (var r = 1; r < i; r++) {
var s = e[r];
if (o.curveType != t.CurveType.CRSpline) {
var a = {};
a.type = o.curveType;
a.ptStart = this._points.length;
if (o.curveType == t.CurveType.Straight) {
a.ptCount = 2;
this._points.push(new cc.Vec2(o.x, o.y));
this._points.push(new cc.Vec2(s.x, s.y));
} else if (o.curveType == t.CurveType.Bezier) {
a.ptCount = 3;
this._points.push(new cc.Vec2(o.x, o.y));
this._points.push(new cc.Vec2(s.x, s.y));
this._points.push(new cc.Vec2(o.control1_x, o.control1_y));
} else if (o.curveType == t.CurveType.CubicBezier) {
a.ptCount = 4;
this._points.push(new cc.Vec2(o.x, o.y));
this._points.push(new cc.Vec2(s.x, s.y));
this._points.push(new cc.Vec2(o.control1_x, o.control1_y));
this._points.push(new cc.Vec2(o.control2_x, o.control2_y));
}
a.length = t.ToolSet.distance(o.x, o.y, s.x, s.y);
this._fullLength += a.length;
this._segments.push(a);
}
if (s.curveType != t.CurveType.CRSpline) {
if (n.length > 0) {
n.push(new cc.Vec2(s.x, s.y));
this.createSplineSegment3(n);
}
} else n.push(new cc.Vec2(s.x, s.y));
o = s;
}
n.length > 1 && this.createSplineSegment3(n);
}
};
e.prototype.createSplineSegment = function() {
var e = i, n = e.length;
e.splice(0, 0, e[0]);
e.push(e[n]);
e.push(e[n]);
n += 3;
var o = {};
o.type = t.CurveType.CRSpline;
o.ptStart = this._points.length;
o.ptCount = n;
this._points = this._points.concat(e);
o.length = 0;
for (var r = 1; r < n; r++) o.length += t.ToolSet.distance(e[r - 1].x, e[r - 1].y, e[r].x, e[r].y);
this._fullLength += o.length;
this._segments.push(o);
e.length = 0;
};
e.prototype.createSplineSegment3 = function(e) {
var i = e.length;
e.splice(0, 0, e[0]);
e.push(e[i]);
e.push(e[i]);
i += 3;
var n = {};
n.type = t.CurveType.CRSpline;
n.ptStart = this._points.length;
n.ptCount = i;
this._points = this._points.concat(e);
n.length = 0;
for (var o = 1; o < i; o++) n.length += t.ToolSet.distance(e[o - 1].x, e[o - 1].y, e[o].x, e[o].y);
this._fullLength += n.length;
this._segments.push(n);
e.length = 0;
};
e.prototype.clear = function() {
this._segments.length = 0;
this._points.length = 0;
};
e.prototype.getPointAt = function(e, i) {
i ? i.x = i.y = 0 : i = new cc.Vec2();
e = t.ToolSet.clamp01(e);
var n, o = this._segments.length;
if (0 == o) return i;
if (1 == e) {
if ((n = this._segments[o - 1]).type == t.CurveType.Straight) {
i.x = t.ToolSet.lerp(this._points[n.ptStart].x, this._points[n.ptStart + 1].x, e);
i.y = t.ToolSet.lerp(this._points[n.ptStart].y, this._points[n.ptStart + 1].y, e);
return i;
}
return n.type == t.CurveType.Bezier || n.type == t.CurveType.CubicBezier ? this.onBezierCurve(n.ptStart, n.ptCount, e, i) : this.onCRSplineCurve(n.ptStart, n.ptCount, e, i);
}
for (var r = e * this._fullLength, s = 0; s < o; s++) if ((r -= (n = this._segments[s]).length) < 0) {
e = 1 + r / n.length;
if (n.type == t.CurveType.Straight) {
i.x = t.ToolSet.lerp(this._points[n.ptStart].x, this._points[n.ptStart + 1].x, e);
i.y = t.ToolSet.lerp(this._points[n.ptStart].y, this._points[n.ptStart + 1].y, e);
} else i = n.type == t.CurveType.Bezier || n.type == t.CurveType.CubicBezier ? this.onBezierCurve(n.ptStart, n.ptCount, e, i) : this.onCRSplineCurve(n.ptStart, n.ptCount, e, i);
break;
}
return i;
};
Object.defineProperty(e.prototype, "segmentCount", {
get: function() {
return this._segments.length;
},
enumerable: !1,
configurable: !0
});
e.prototype.getAnchorsInSegment = function(t, e) {
null == e && (e = new Array());
for (var i = this._segments[t], n = 0; n < i.ptCount; n++) e.push(new cc.Vec2(this._points[i.ptStart + n].x, this._points[i.ptStart + n].y));
return e;
};
e.prototype.getPointsInSegment = function(e, i, n, o, r, s) {
null == o && (o = new Array());
s && !isNaN(s) || (s = .1);
r && r.push(i);
var a = this._segments[e];
if (a.type == t.CurveType.Straight) {
o.push(new cc.Vec2(t.ToolSet.lerp(this._points[a.ptStart].x, this._points[a.ptStart + 1].x, i), t.ToolSet.lerp(this._points[a.ptStart].y, this._points[a.ptStart + 1].y, i)));
o.push(new cc.Vec2(t.ToolSet.lerp(this._points[a.ptStart].x, this._points[a.ptStart + 1].x, n), t.ToolSet.lerp(this._points[a.ptStart].y, this._points[a.ptStart + 1].y, n)));
} else {
var l;
l = a.type == t.CurveType.Bezier || a.type == t.CurveType.CubicBezier ? this.onBezierCurve : this.onCRSplineCurve;
o.push(l.call(this, a.ptStart, a.ptCount, i, new cc.Vec2()));
for (var h = Math.min(a.length * s, 50), c = 0; c <= h; c++) {
var u = c / h;
if (u > i && u < n) {
o.push(l.call(this, a.ptStart, a.ptCount, u, new cc.Vec2()));
null != r && r.push(u);
}
}
o.push(l.call(this, a.ptStart, a.ptCount, n, new cc.Vec2()));
}
null != r && r.push(n);
return o;
};
e.prototype.getAllPoints = function(t, e, i) {
null == t && (t = new Array());
i && !isNaN(i) || (i = .1);
for (var n = this._segments.length, o = 0; o < n; o++) this.getPointsInSegment(o, 0, 1, t, e, i);
return t;
};
e.prototype.onCRSplineCurve = function(e, i, n, o) {
var r = Math.floor(n * (i - 4)) + e, s = this._points[r].x, a = this._points[r].y, l = this._points[r + 1].x, h = this._points[r + 1].y, c = this._points[r + 2].x, u = this._points[r + 2].y, p = this._points[r + 3].x, d = this._points[r + 3].y, f = 1 == n ? 1 : t.ToolSet.repeat(n * (i - 4), 1), _ = ((2 - f) * f - 1) * f * .5, g = .5 * ((3 * f - 5) * f * f + 2), y = ((-3 * f + 4) * f + 1) * f * .5, m = (f - 1) * f * f * .5;
o.x = s * _ + l * g + c * y + p * m;
o.y = a * _ + h * g + u * y + d * m;
return o;
};
e.prototype.onBezierCurve = function(t, e, i, n) {
var o = 1 - i, r = this._points[t].x, s = this._points[t].y, a = this._points[t + 1].x, l = this._points[t + 1].y, h = this._points[t + 2].x, c = this._points[t + 2].y;
if (4 == e) {
var u = this._points[t + 3].x, p = this._points[t + 3].y;
n.x = o * o * o * r + 3 * o * o * i * h + 3 * o * i * i * u + i * i * i * a;
n.y = o * o * o * s + 3 * o * o * i * c + 3 * o * i * i * p + i * i * i * l;
} else {
n.x = o * o * r + 2 * o * i * h + i * i * a;
n.y = o * o * s + 2 * o * i * c + i * i * l;
}
return n;
};
return e;
}();
t.GPath = e;
var i = new Array();
})(t || (t = {}));
(function(t) {
var e;
(function(t) {
t[t.CRSpline = 0] = "CRSpline";
t[t.Bezier = 1] = "Bezier";
t[t.CubicBezier = 2] = "CubicBezier";
t[t.Straight = 3] = "Straight";
})(e = t.CurveType || (t.CurveType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.X = 1] = "X";
t[t.Y = 2] = "Y";
t[t.Z = 3] = "Z";
t[t.XY = 4] = "XY";
t[t.Position = 5] = "Position";
t[t.Width = 6] = "Width";
t[t.Height = 7] = "Height";
t[t.Size = 8] = "Size";
t[t.ScaleX = 9] = "ScaleX";
t[t.ScaleY = 10] = "ScaleY";
t[t.Scale = 11] = "Scale";
t[t.Rotation = 12] = "Rotation";
t[t.RotationX = 13] = "RotationX";
t[t.RotationY = 14] = "RotationY";
t[t.Alpha = 15] = "Alpha";
t[t.Progress = 16] = "Progress";
})(t.TweenPropType || (t.TweenPropType = {}));
var i = function() {
function t() {
this.x = 0;
this.y = 0;
this.control1_x = 0;
this.control1_y = 0;
this.control2_x = 0;
this.control2_y = 0;
this.curveType = 0;
}
t.newPoint = function(i, n, o) {
var r = new t();
r.x = i || 0;
r.y = n || 0;
r.control1_x = 0;
r.control1_y = 0;
r.control2_x = 0;
r.control2_y = 0;
r.curveType = o || e.CRSpline;
return r;
};
t.newBezierPoint = function(i, n, o, r) {
var s = new t();
s.x = i || 0;
s.y = n || 0;
s.control1_x = o || 0;
s.control1_y = r || 0;
s.control2_x = 0;
s.control2_y = 0;
s.curveType = e.Bezier;
return s;
};
t.newCubicBezierPoint = function(i, n, o, r, s, a) {
var l = new t();
l.x = i || 0;
l.y = n || 0;
l.control1_x = o || 0;
l.control1_y = r || 0;
l.control2_x = s || 0;
l.control2_y = a || 0;
l.curveType = e.CubicBezier;
return l;
};
t.prototype.clone = function() {
var e = new t();
e.x = this.x;
e.y = this.y;
e.control1_x = this.control1_x;
e.control1_y = this.control1_y;
e.control2_x = this.control2_x;
e.control2_y = this.control2_y;
e.curveType = this.curveType;
return e;
};
return t;
}();
t.GPathPoint = i;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {}
e.to = function(e, i, n) {
return t.TweenManager.createTween()._to(e, i, n);
};
e.to2 = function(e, i, n, o, r) {
return t.TweenManager.createTween()._to2(e, i, n, o, r);
};
e.to3 = function(e, i, n, o, r, s, a) {
return t.TweenManager.createTween()._to3(e, i, n, o, r, s, a);
};
e.to4 = function(e, i, n, o, r, s, a, l, h) {
return t.TweenManager.createTween()._to4(e, i, n, o, r, s, a, l, h);
};
e.toColor = function(e, i, n) {
return t.TweenManager.createTween()._toColor(e, i, n);
};
e.delayedCall = function(e) {
return t.TweenManager.createTween().setDelay(e);
};
e.shake = function(e, i, n, o) {
return t.TweenManager.createTween()._shake(e, i, n, o);
};
e.isTweening = function(e, i) {
return t.TweenManager.isTweening(e, i);
};
e.kill = function(e, i, n) {
t.TweenManager.killTweens(e, i, n);
};
e.getTween = function(e, i) {
return t.TweenManager.getTween(e, i);
};
e.catchCallbackExceptions = !0;
return e;
}();
t.GTween = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function e() {
this._startValue = new t.TweenValue();
this._endValue = new t.TweenValue();
this._value = new t.TweenValue();
this._deltaValue = new t.TweenValue();
this._reset();
}
e.prototype.setDelay = function(t) {
this._delay = t;
return this;
};
Object.defineProperty(e.prototype, "delay", {
get: function() {
return this._delay;
},
enumerable: !1,
configurable: !0
});
e.prototype.setDuration = function(t) {
this._duration = t;
return this;
};
Object.defineProperty(e.prototype, "duration", {
get: function() {
return this._duration;
},
enumerable: !1,
configurable: !0
});
e.prototype.setBreakpoint = function(t) {
this._breakpoint = t;
return this;
};
e.prototype.setEase = function(t) {
this._easeType = t;
return this;
};
e.prototype.setEasePeriod = function(t) {
this._easePeriod = t;
return this;
};
e.prototype.setEaseOvershootOrAmplitude = function(t) {
this._easeOvershootOrAmplitude = t;
return this;
};
e.prototype.setRepeat = function(t, e) {
this._repeat = t;
this._yoyo = e;
return this;
};
Object.defineProperty(e.prototype, "repeat", {
get: function() {
return this._repeat;
},
enumerable: !1,
configurable: !0
});
e.prototype.setTimeScale = function(t) {
this._timeScale = t;
return this;
};
e.prototype.setSnapping = function(t) {
this._snapping = t;
return this;
};
e.prototype.setTarget = function(e, i) {
this._target = e;
this._propType = i;
e instanceof t.GObject ? this._node = e.node : e instanceof cc.Node && (this._node = e);
if ("number" == typeof this._propType) switch (this._propType) {
case t.TweenPropType.None:
break;

case t.TweenPropType.X:
this._propType = function(t) {
this.x = t;
};
break;

case t.TweenPropType.Y:
this._propType = function(t) {
this.y = t;
};
break;

case t.TweenPropType.Z:
this._target instanceof t.GObject ? this._propType = function(t) {
this._target.node.z = t;
} : this._target instanceof cc.Node && (this._propType = function(t) {
this.z = t;
});
break;

case t.TweenPropType.XY:
case t.TweenPropType.Position:
this._propType = this._target.setPosition;
break;

case t.TweenPropType.Width:
this._propType = function(t) {
this.width = t;
};
break;

case t.TweenPropType.Height:
this._propType = function(t) {
this.height = t;
};
break;

case t.TweenPropType.Size:
this._target instanceof t.GObject ? this._propType = this._target.setSize : this._target instanceof cc.Node && (this._propType = this._target.setContentSize);
break;

case t.TweenPropType.ScaleX:
this._propType = function(t) {
this.scaleX = t;
};
break;

case t.TweenPropType.ScaleY:
this._propType = function(t) {
this.scaleY = t;
};
break;

case t.TweenPropType.Scale:
this._propType = this._target.setScale;
break;

case t.TweenPropType.Rotation:
this._propType = function(t) {
this.rotation = t;
};
break;

case t.TweenPropType.RotationX:
this._propType = function(t) {
this.skewX = t;
};
break;

case t.TweenPropType.RotationY:
this._propType = function(t) {
this.skewY = t;
};
break;

case t.TweenPropType.Alpha:
this._target instanceof t.GObject ? this._propType = function(t) {
this.alpha = t;
} : this._target instanceof cc.Node && (this._propType = function(t) {
this.opacity = t;
});
break;

case t.TweenPropType.Progress:
this._target instanceof t.GObject && (this._propType = function(t) {
this.asProgress.value = t;
});
}
return this;
};
Object.defineProperty(e.prototype, "propType", {
get: function() {
return this._propType;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "target", {
get: function() {
return this._target;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPath = function(t) {
this._path = t;
return this;
};
e.prototype.setUserData = function(t) {
this._userData = t;
return this;
};
Object.defineProperty(e.prototype, "userData", {
get: function() {
return this._userData;
},
enumerable: !1,
configurable: !0
});
e.prototype.onUpdate = function(t, e) {
this._onUpdate = t;
this._onUpdateCaller = e;
return this;
};
e.prototype.onStart = function(t, e) {
this._onStart = t;
this._onStartCaller = e;
return this;
};
e.prototype.onComplete = function(t, e) {
this._onComplete = t;
this._onCompleteCaller = e;
return this;
};
Object.defineProperty(e.prototype, "startValue", {
get: function() {
return this._startValue;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "endValue", {
get: function() {
return this._endValue;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "value", {
get: function() {
return this._value;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "deltaValue", {
get: function() {
return this._deltaValue;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "normalizedTime", {
get: function() {
return this._normalizedTime;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "completed", {
get: function() {
return 0 != this._ended;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "allCompleted", {
get: function() {
return 1 == this._ended;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "killed", {
get: function() {
return this._killed;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPaused = function(t) {
this._paused = t;
return this;
};
Object.defineProperty(e.prototype, "paused", {
get: function() {
return this._paused;
},
enumerable: !1,
configurable: !0
});
e.prototype.seek = function(t) {
if (!this._killed) {
this._elapsedTime = t;
if (this._elapsedTime < this._delay) {
if (!this._started) return;
this._elapsedTime = this._delay;
}
this.update();
}
};
e.prototype.kill = function(t) {
if (!this._killed) {
if (t) {
if (0 == this._ended) {
this._breakpoint >= 0 ? this._elapsedTime = this._delay + this._breakpoint : this._repeat >= 0 ? this._elapsedTime = this._delay + this._duration * (this._repeat + 1) : this._elapsedTime = this._delay + 2 * this._duration;
this.update();
}
this.callCompleteCallback();
}
this._killed = !0;
}
};
e.prototype._to = function(t, e, i) {
this._valueSize = 1;
this._startValue.x = t;
this._endValue.x = e;
this._duration = i;
return this;
};
e.prototype._to2 = function(t, e, i, n, o) {
this._valueSize = 2;
this._startValue.x = t;
this._endValue.x = i;
this._startValue.y = e;
this._endValue.y = n;
this._duration = o;
return this;
};
e.prototype._to3 = function(t, e, i, n, o, r, s) {
this._valueSize = 3;
this._startValue.x = t;
this._endValue.x = n;
this._startValue.y = e;
this._endValue.y = o;
this._startValue.z = i;
this._endValue.z = r;
this._duration = s;
return this;
};
e.prototype._to4 = function(t, e, i, n, o, r, s, a, l) {
this._valueSize = 4;
this._startValue.x = t;
this._endValue.x = o;
this._startValue.y = e;
this._endValue.y = r;
this._startValue.z = i;
this._endValue.z = s;
this._startValue.w = n;
this._endValue.w = a;
this._duration = l;
return this;
};
e.prototype._toColor = function(t, e, i) {
this._valueSize = 5;
this._startValue.color = t;
this._endValue.color = e;
this._duration = i;
return this;
};
e.prototype._shake = function(t, e, i, n) {
this._valueSize = 6;
this._startValue.x = t;
this._startValue.y = e;
this._startValue.w = i;
this._duration = n;
return this;
};
e.prototype._init = function() {
this._delay = 0;
this._duration = 0;
this._breakpoint = -1;
this._easeType = t.EaseType.QuadOut;
this._timeScale = 1;
this._easePeriod = 0;
this._easeOvershootOrAmplitude = 1.70158;
this._snapping = !1;
this._repeat = 0;
this._yoyo = !1;
this._valueSize = 0;
this._started = !1;
this._paused = !1;
this._killed = !1;
this._elapsedTime = 0;
this._normalizedTime = 0;
this._ended = 0;
};
e.prototype._reset = function() {
this._target = null;
this._propType = null;
this._userData = null;
this._node = null;
this._path = null;
this._onStart = this._onUpdate = this._onComplete = null;
this._onStartCaller = this._onUpdateCaller = this._onCompleteCaller = null;
};
e.prototype._update = function(t) {
if (!this._node || cc.isValid(this._node)) {
1 != this._timeScale && (t *= this._timeScale);
if (0 != t) if (0 == this._ended) {
this._elapsedTime += t;
this.update();
if (0 != this._ended && !this._killed) {
this.callCompleteCallback();
this._killed = !0;
}
} else {
this.callCompleteCallback();
this._killed = !0;
}
} else this._killed = !0;
};
e.prototype.update = function() {
this._ended = 0;
if (0 != this._valueSize) {
if (!this._started) {
if (this._elapsedTime < this._delay) return;
this._started = !0;
this.callStartCallback();
if (this._killed) return;
}
var e = !1, n = this._elapsedTime - this._delay;
if (this._breakpoint >= 0 && n >= this._breakpoint) {
n = this._breakpoint;
this._ended = 2;
}
if (0 != this._repeat) {
var o = Math.floor(n / this._duration);
n -= this._duration * o;
this._yoyo && (e = o % 2 == 1);
if (this._repeat > 0 && this._repeat - o < 0) {
this._yoyo && (e = this._repeat % 2 == 1);
n = this._duration;
this._ended = 1;
}
} else if (n >= this._duration) {
n = this._duration;
this._ended = 1;
}
this._normalizedTime = t.evaluateEase(this._easeType, e ? this._duration - n : n, this._duration, this._easeOvershootOrAmplitude, this._easePeriod);
this._value.setZero();
this._deltaValue.setZero();
if (6 == this._valueSize) if (0 == this._ended) {
var r = this._startValue.w * (1 - this._normalizedTime), s = r * (Math.random() > .5 ? 1 : -1), a = r * (Math.random() > .5 ? 1 : -1);
this._deltaValue.x = s;
this._deltaValue.y = a;
this._value.x = this._startValue.x + s;
this._value.y = this._startValue.y + a;
} else {
this._value.x = this._startValue.x;
this._value.y = this._startValue.y;
} else if (this._path) {
var l = i;
this._path.getPointAt(this._normalizedTime, l);
if (this._snapping) {
l.x = Math.round(l.x);
l.y = Math.round(l.y);
}
this._deltaValue.x = l.x - this._value.x;
this._deltaValue.y = l.y - this._value.y;
this._value.x = l.x;
this._value.y = l.y;
} else for (var h = Math.min(this._valueSize, 4), c = 0; c < h; c++) {
var u = this._startValue.getField(c), p = u + (this._endValue.getField(c) - u) * this._normalizedTime;
this._snapping && (p = Math.round(p));
this._deltaValue.setField(c, p - this._value.getField(c));
this._value.setField(c, p);
}
if (null != this._target && null != this._propType) if (this._propType instanceof Function) switch (this._valueSize) {
case 1:
this._propType.call(this._target, this._value.x);
break;

case 2:
this._propType.call(this._target, this._value.x, this._value.y);
break;

case 3:
this._propType.call(this._target, this._value.x, this._value.y, this._value.z);
break;

case 4:
this._propType.call(this._target, this._value.x, this._value.y, this._value.z, this._value.w);
break;

case 5:
this._propType.call(this._target, this._value.color);
break;

case 6:
this._propType.call(this._target, this._value.x, this._value.y);
} else 5 == this._valueSize ? this._target[this._propType] = this._value.color : this._target[this._propType] = this._value.x;
this.callUpdateCallback();
} else this._elapsedTime >= this._delay + this._duration && (this._ended = 1);
};
e.prototype.callStartCallback = function() {
if (null != this._onStart) try {
this._onStart.call(this._onStartCaller, this);
} catch (t) {
console.log("FairyGUI: error in start callback > " + t);
}
};
e.prototype.callUpdateCallback = function() {
if (null != this._onUpdate) try {
this._onUpdate.call(this._onUpdateCaller, this);
} catch (t) {
console.log("FairyGUI: error in update callback > " + t);
}
};
e.prototype.callCompleteCallback = function() {
if (null != this._onComplete) try {
this._onComplete.call(this._onCompleteCaller, this);
} catch (t) {
console.log("FairyGUI: error in complete callback > " + t);
}
};
return e;
}();
t.GTweener = e;
var i = new cc.Vec2();
})(t || (t = {}));
(function(t) {
var e, i = new Array(30), n = new Array(), o = 0, r = function() {
function r() {}
r.createTween = function() {
if (!e) {
e = new cc.Node("[gfTweenManager]");
cc.game.addPersistRootNode(e);
cc.director.getScheduler().schedule(r.update, e, 0, !1);
}
var s;
(s = n.length > 0 ? n.pop() : new t.GTweener())._init();
i[o++] = s;
o == i.length && (i.length = i.length + Math.ceil(.5 * i.length));
return s;
};
r.isTweening = function(t, e) {
if (null == t) return !1;
for (var n = null == e || null == e, r = 0; r < o; r++) {
var s = i[r];
if (s && s.target == t && !s._killed && (n || s._propType == e)) return !0;
}
return !1;
};
r.killTweens = function(t, e, n) {
if (null == t) return !1;
for (var r = !1, s = o, a = null == n || null == n, l = 0; l < s; l++) {
var h = i[l];
if (h && h.target == t && !h._killed && (a || h._propType == n)) {
h.kill(e);
r = !0;
}
}
return r;
};
r.getTween = function(t, e) {
if (null == t) return null;
for (var n = o, r = null == e || null == e, s = 0; s < n; s++) {
var a = i[s];
if (a && a.target == t && !a._killed && (r || a._propType == e)) return a;
}
return null;
};
r.update = function(e) {
for (var r = i, s = o, a = -1, l = 0; l < s; l++) {
var h = r[l];
if (null == h) -1 == a && (a = l); else if (h._killed) {
h._reset();
n.push(h);
r[l] = null;
-1 == a && (a = l);
} else {
h._target instanceof t.GObject && null == h._target.node ? h._killed = !0 : h._paused || h._update(e);
if (-1 != a) {
r[a] = h;
r[l] = null;
a++;
}
}
}
if (a >= 0) {
if (o != s) {
var c = s;
s = o - s;
for (l = 0; l < s; l++) r[a++] = r[c++];
}
o = a;
}
return !1;
};
return r;
}();
t.TweenManager = r;
})(t || (t = {}));
(function(t) {
var e = function() {
function t() {
this.x = this.y = this.z = this.w = 0;
}
Object.defineProperty(t.prototype, "color", {
get: function() {
return (this.w << 24) + (this.x << 16) + (this.y << 8) + this.z;
},
set: function(t) {
this.x = (16711680 & t) >> 16;
this.y = (65280 & t) >> 8;
this.z = 255 & t;
this.w = (4278190080 & t) >> 24;
},
enumerable: !1,
configurable: !0
});
t.prototype.getField = function(t) {
switch (t) {
case 0:
return this.x;

case 1:
return this.y;

case 2:
return this.z;

case 3:
return this.w;

default:
throw new Error("Index out of bounds: " + t);
}
};
t.prototype.setField = function(t, e) {
switch (t) {
case 0:
this.x = e;
break;

case 1:
this.y = e;
break;

case 2:
this.z = e;
break;

case 3:
this.w = e;
break;

default:
throw new Error("Index out of bounds: " + t);
}
};
t.prototype.setZero = function() {
this.x = this.y = this.z = this.w = 0;
};
return t;
}();
t.TweenValue = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function t(t, e, i) {
void 0 === e && (e = 0);
void 0 === i && (i = -1);
this.version = 0;
-1 == i && (i = t.byteLength - e);
this._bytes = new Uint8Array(t, e, i);
this._view = new DataView(this._bytes.buffer, e, i);
this._pos = 0;
this._length = i;
}
Object.defineProperty(t.prototype, "data", {
get: function() {
return this._bytes;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "position", {
get: function() {
return this._pos;
},
set: function(t) {
if (t > this._length) throw "Out of bounds";
this._pos = t;
},
enumerable: !1,
configurable: !0
});
t.prototype.skip = function(t) {
this._pos += t;
};
t.prototype.validate = function(t) {
if (this._pos + t > this._length) throw "Out of bounds";
};
t.prototype.readByte = function() {
this.validate(1);
return this._view.getInt8(this._pos++);
};
t.prototype.readUbyte = function() {
return this._bytes[this._pos++];
};
t.prototype.readBool = function() {
return 1 == this.readByte();
};
t.prototype.readShort = function() {
this.validate(2);
var t = this._view.getInt16(this._pos, this.littleEndian);
this._pos += 2;
return t;
};
t.prototype.readUshort = function() {
this.validate(2);
var t = this._view.getUint16(this._pos, this.littleEndian);
this._pos += 2;
return t;
};
t.prototype.readInt = function() {
this.validate(4);
var t = this._view.getInt32(this._pos, this.littleEndian);
this._pos += 4;
return t;
};
t.prototype.readUint = function() {
this.validate(4);
var t = this._view.getUint32(this._pos, this.littleEndian);
this._pos += 4;
return t;
};
t.prototype.readFloat = function() {
this.validate(4);
var t = this._view.getFloat32(this._pos, this.littleEndian);
this._pos += 4;
return t;
};
t.prototype.readString = function(t) {
null == t && (t = this.readUshort());
this.validate(t);
for (var e = "", i = this._pos + t, n = 0, o = String.fromCharCode, r = this._bytes, s = this._pos; s < i; ) (n = r[s++]) < 128 ? 0 != n && (e += o(n)) : e += o(n < 224 ? (63 & n) << 6 | 127 & r[s++] : n < 240 ? (31 & n) << 12 | (127 & r[s++]) << 6 | 127 & r[s++] : (15 & n) << 18 | (127 & r[s++]) << 12 | r[s++] << 6 & 127 | 127 & r[s++]);
this._pos += t;
return e;
};
t.prototype.readS = function() {
var t = this.readUshort();
return 65534 == t ? null : 65533 == t ? "" : this.stringTable[t];
};
t.prototype.readSArray = function(t) {
for (var e = new Array(t), i = 0; i < t; i++) e[i] = this.readS();
return e;
};
t.prototype.writeS = function(t) {
var e = this.readUshort();
65534 != e && 65533 != e && (this.stringTable[e] = t);
};
t.prototype.readColor = function(t) {
var e = this.readUbyte(), i = this.readUbyte(), n = this.readUbyte(), o = this.readUbyte();
return new cc.Color(e, i, n, t ? o : 255);
};
t.prototype.readChar = function() {
var t = this.readUshort();
return String.fromCharCode(t);
};
t.prototype.readBuffer = function() {
var e = this.readUint();
this.validate(e);
var i = new t(this._bytes.buffer, this._bytes.byteOffset + this._pos, e);
i.stringTable = this.stringTable;
i.version = this.version;
this._pos += e;
return i;
};
t.prototype.seek = function(t, e) {
var i = this._pos;
this._pos = t;
if (e < this.readByte()) {
var n;
if (1 == this.readByte()) {
this._pos += 2 * e;
n = this.readUshort();
} else {
this._pos += 4 * e;
n = this.readUint();
}
if (n > 0) {
this._pos = t + n;
return !0;
}
this._pos = i;
return !1;
}
this._pos = i;
return !1;
};
return t;
}();
t.ByteBuffer = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function t(t, e, i, o) {
this.matrix = new Array(n);
this.reset();
void 0 === t && void 0 === e && void 0 === i && void 0 === o || this.adjustColor(t, e, i, o);
}
t.prototype.reset = function() {
for (var t = 0; t < n; t++) this.matrix[t] = i[t];
};
t.prototype.invert = function() {
this.multiplyMatrix([ -1, 0, 0, 0, 255, 0, -1, 0, 0, 255, 0, 0, -1, 0, 255, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustColor = function(t, e, i, n) {
this.adjustHue(n || 0);
this.adjustContrast(e || 0);
this.adjustBrightness(t || 0);
this.adjustSaturation(i || 0);
};
t.prototype.adjustBrightness = function(t) {
t = 255 * this.cleanValue(t, 1);
this.multiplyMatrix([ 1, 0, 0, 0, t, 0, 1, 0, 0, t, 0, 0, 1, 0, t, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustContrast = function(t) {
var e = (t = this.cleanValue(t, 1)) + 1, i = 128 * (1 - e);
this.multiplyMatrix([ e, 0, 0, 0, i, 0, e, 0, 0, i, 0, 0, e, 0, i, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustSaturation = function(t) {
t = this.cleanValue(t, 1);
var e = 1 - (t += 1), i = e * o, n = e * r, a = e * s;
this.multiplyMatrix([ i + t, n, a, 0, 0, i, n + t, a, 0, 0, i, n, a + t, 0, 0, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustHue = function(t) {
t = this.cleanValue(t, 1);
t *= Math.PI;
var e = Math.cos(t), i = Math.sin(t);
this.multiplyMatrix([ o + e * (1 - o) + i * -o, r + e * -r + i * -r, s + e * -s + i * (1 - s), 0, 0, o + e * -o + .143 * i, r + e * (1 - r) + .14 * i, s + e * -s + -.283 * i, 0, 0, o + e * -o + i * -(1 - o), r + e * -r + i * r, s + e * (1 - s) + i * s, 0, 0, 0, 0, 0, 1, 0 ]);
};
t.prototype.concat = function(t) {
t.length == n && this.multiplyMatrix(t);
};
t.prototype.clone = function() {
var e = new t();
e.copyMatrix(this.matrix);
return e;
};
t.prototype.copyMatrix = function(t) {
for (var e = n, i = 0; i < e; i++) this.matrix[i] = t[i];
};
t.prototype.multiplyMatrix = function(t) {
for (var e = [], i = 0, n = 0; n < 4; ++n) {
for (var o = 0; o < 5; ++o) e[i + o] = t[i] * this.matrix[o] + t[i + 1] * this.matrix[o + 5] + t[i + 2] * this.matrix[o + 10] + t[i + 3] * this.matrix[o + 15] + (4 == o ? t[i + 4] : 0);
i += 5;
}
this.copyMatrix(e);
};
t.prototype.cleanValue = function(t, e) {
return Math.min(e, Math.max(-e, t));
};
return t;
}();
t.ColorMatrix = e;
var i = [ 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0 ], n = i.length, o = .299, r = .587, s = .114;
})(t || (t = {}));
(function(t) {
var e = function() {
function t(t, e, i) {
this.pool = [];
this._init = e;
this._reset = i;
this._ct = t;
}
t.prototype.borrow = function() {
for (var t, e = [], n = 0; n < arguments.length; n++) e[n] = arguments[n];
t = this.pool.length > 0 ? this.pool.pop() : new this._ct();
this._init && this._init.apply(this, i([ t ], e));
return t;
};
t.prototype.returns = function(t) {
if (Array.isArray(t)) {
for (var e = t.length, i = 0; i < e; i++) {
var n = t[i];
this._reset && this._reset(n);
this.pool.push(n);
}
t.length = 0;
} else {
this._reset && this._reset(t);
this.pool.push(t);
}
};
return t;
}();
t.Pool = e;
})(t || (t = {}));
(function(t) {
var e = function() {
function t() {
this._readPos = 0;
this._handlers = {};
this._handlers.url = this.onTag_URL;
this._handlers.img = this.onTag_IMG;
this._handlers.b = this.onTag_Simple;
this._handlers.i = this.onTag_Simple;
this._handlers.u = this.onTag_Simple;
this._handlers.color = this.onTag_COLOR;
this._handlers.size = this.onTag_SIZE;
}
t.prototype.onTag_URL = function(t, e, i) {
if (e) {
n = "";
this.linkColor && (n += "</color>");
this.linkUnderline && (n += "</u>");
return n + "</on>";
}
var n = void 0;
n = null != i ? '<on click="onClickLink" param="' + i + '">' : '<on click="onClickLink" param="' + this.getTagText() + '">';
this.linkUnderline && (n += "<u>");
this.linkColor && (n += "<color=" + this.linkColor + ">");
return n;
};
t.prototype.onTag_IMG = function(t, e) {
if (e) return null;
var i = this.getTagText(!0);
return i ? '<img src="' + i + '"/>' : null;
};
t.prototype.onTag_Simple = function(t, e) {
return e ? "</" + t + ">" : "<" + t + ">";
};
t.prototype.onTag_COLOR = function(t, e, i) {
if (e) return "</color>";
this.lastColor = i;
return "<color=" + i + ">";
};
t.prototype.onTag_FONT = function(t, e, i) {
return e ? "</font>" : '<font face="' + i + '">';
};
t.prototype.onTag_SIZE = function(t, e, i) {
if (e) return "</size>";
this.lastSize = i;
return "<size=" + i + ">";
};
t.prototype.getTagText = function(t) {
for (var e, i = this._readPos, n = ""; -1 != (e = this._text.indexOf("[", i)); ) {
if (92 != this._text.charCodeAt(e - 1)) {
n += this._text.substring(i, e);
break;
}
n += this._text.substring(i, e - 1);
n += "[";
i = e + 1;
}
if (-1 == e) return null;
t && (this._readPos = e);
return n;
};
t.prototype.parse = function(t, e) {
this._text = t;
this.lastColor = null;
this.lastSize = null;
for (var i, n, o, r, s, a, l, h = 0, c = ""; -1 != (i = this._text.indexOf("[", h)); ) if (i > 0 && 92 == this._text.charCodeAt(i - 1)) {
c += this._text.substring(h, i - 1);
c += "[";
h = i + 1;
} else {
c += this._text.substring(h, i);
h = i;
if (-1 == (i = this._text.indexOf("]", h))) break;
o = "/" == this._text.charAt(h + 1);
r = this._text.substring(o ? h + 2 : h + 1, i);
this._readPos = i + 1;
s = null;
a = null;
if (-1 != (n = r.indexOf("="))) {
s = r.substring(n + 1);
r = r.substring(0, n);
}
r = r.toLowerCase();
null != (l = this._handlers[r]) ? null == (a = l.call(this, r, o, s)) || e || (c += a) : c += this._text.substring(h, this._readPos);
h = this._readPos;
}
h < this._text.length && (c += this._text.substr(h));
this._text = null;
return c;
};
t.inst = new t();
return t;
}();
t.UBBParser = e;
})(t || (t = {}));
(function(t) {
t.toGrayedColor = function(t) {
var e = .299 * t.r + .587 * t.g + .114 * t.b;
return new cc.Color(e, e, e, t.a);
};
var e = function() {
function t() {}
t.startsWith = function(t, e, i) {
if (t) {
if (t.length < e.length) return !1;
t = t.substring(0, e.length);
return i ? t.toLowerCase() == e.toLowerCase() : t == e;
}
return !1;
};
t.endsWith = function(t, e, i) {
if (t) {
if (t.length < e.length) return !1;
t = t.substring(t.length - e.length);
return i ? t.toLowerCase() == e.toLowerCase() : t == e;
}
return !1;
};
t.encodeHTML = function(t) {
return t ? t.replace(/&/g, "&amp;").replace(/</g, "&lt;").replace(/>/g, "&gt;").replace(/'/g, "&apos;").replace(/"/g, "&quot;") : "";
};
t.clamp = function(t, e, i) {
t < e ? t = e : t > i && (t = i);
return t;
};
t.clamp01 = function(t) {
t > 1 ? t = 1 : t < 0 && (t = 0);
return t;
};
t.lerp = function(t, e, i) {
return t + i * (e - t);
};
t.getTime = function() {
return new Date().getMilliseconds() / 1e3;
};
t.toGrayed = function(t) {
var e = .299 * t.getR() + .587 * t.getG() + .114 * t.getB();
return new cc.Color(e, e, e, t.getA());
};
t.repeat = function(t, e) {
return t - Math.floor(t / e) * e;
};
t.distance = function(t, e, i, n) {
return Math.sqrt(Math.pow(t - i, 2) + Math.pow(e - n, 2));
};
return t;
}();
t.ToolSet = e;
})(t || (t = {}));
return t;
};
cc._RF.pop();
}, {} ],
lianyun_gameframe: [ function(require, module, exports) {
"use strict";
cc._RF.push(module, "b588c0k+GhFYbLEzSPHzI5Q", "lianyun_gameframe");
var gfwindow = window;
window.createGf = function() {
if (gfwindow.gfenv) var window = gfenv; else var window = gfwindow;
var fgui = window.gflianyunfgui, gameframe = {};
window.gameframe = gameframe;
var __values = this && this.__values || function(t) {
var e = "function" == typeof Symbol && Symbol.iterator, i = e && t[e], n = 0;
if (i) return i.call(t);
if (t && "number" == typeof t.length) return {
next: function() {
t && n >= t.length && (t = void 0);
return {
value: t && t[n++],
done: !t
};
}
};
throw new TypeError(e ? "Object is not iterable." : "Symbol.iterator is not defined.");
}, __read = this && this.__read || function(t, e) {
var i = "function" == typeof Symbol && t[Symbol.iterator];
if (!i) return t;
var n, o, r = i.call(t), s = [];
try {
for (;(void 0 === e || e-- > 0) && !(n = r.next()).done; ) s.push(n.value);
} catch (t) {
o = {
error: t
};
} finally {
try {
n && !n.done && (i = r.return) && i.call(r);
} finally {
if (o) throw o.error;
}
}
return s;
}, __spreadArray = this && this.__spreadArray || function(t, e, i) {
if (i || 2 === arguments.length) for (var n, o = 0, r = e.length; o < r; o++) if (n || !(o in e)) {
n || (n = Array.prototype.slice.call(e, 0, o));
n[o] = e[o];
}
return t.concat(n || Array.prototype.slice.call(e));
}, __extends = this && this.__extends || (extendStatics = function(t, e) {
return (extendStatics = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(t, e) {
t.__proto__ = e;
} || function(t, e) {
for (var i in e) Object.prototype.hasOwnProperty.call(e, i) && (t[i] = e[i]);
})(t, e);
}, function(t, e) {
if ("function" != typeof e && null !== e) throw new TypeError("Class extends value " + String(e) + " is not a constructor or null");
extendStatics(t, e);
function i() {
this.constructor = t;
}
t.prototype = null === e ? Object.create(e) : (i.prototype = e.prototype, new i());
}), extendStatics, __decorate = this && this.__decorate || function(t, e, i, n) {
var o, r = arguments.length, s = r < 3 ? e : null === n ? n = Object.getOwnPropertyDescriptor(e, i) : n;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) s = Reflect.decorate(t, e, i, n); else for (var a = t.length - 1; a >= 0; a--) (o = t[a]) && (s = (r < 3 ? o(s) : r > 3 ? o(e, i, s) : o(e, i)) || s);
return r > 3 && s && Object.defineProperty(e, i, s), s;
}, __awaiter = this && this.__awaiter || function(t, e, i, n) {
return new (i || (i = Promise))(function(o, r) {
function s(t) {
try {
l(n.next(t));
} catch (t) {
r(t);
}
}
function a(t) {
try {
l(n.throw(t));
} catch (t) {
r(t);
}
}
function l(t) {
t.done ? o(t.value) : (e = t.value, e instanceof i ? e : new i(function(t) {
t(e);
})).then(s, a);
var e;
}
l((n = n.apply(t, e || [])).next());
});
}, __generator = this && this.__generator || function(t, e) {
var i, n, o, r, s = {
label: 0,
sent: function() {
if (1 & o[0]) throw o[1];
return o[1];
},
trys: [],
ops: []
};
return r = {
next: a(0),
throw: a(1),
return: a(2)
}, "function" == typeof Symbol && (r[Symbol.iterator] = function() {
return this;
}), r;
function a(t) {
return function(e) {
return l([ t, e ]);
};
}
function l(a) {
if (i) throw new TypeError("Generator is already executing.");
for (;r && (r = 0, a[0] && (s = 0)), s; ) try {
if (i = 1, n && (o = 2 & a[0] ? n.return : a[0] ? n.throw || ((o = n.return) && o.call(n), 
0) : n.next) && !(o = o.call(n, a[1])).done) return o;
(n = 0, o) && (a = [ 2 & a[0], o.value ]);
switch (a[0]) {
case 0:
case 1:
o = a;
break;

case 4:
s.label++;
return {
value: a[1],
done: !1
};

case 5:
s.label++;
n = a[1];
a = [ 0 ];
continue;

case 7:
a = s.ops.pop();
s.trys.pop();
continue;

default:
if (!(o = s.trys, o = o.length > 0 && o[o.length - 1]) && (6 === a[0] || 2 === a[0])) {
s = 0;
continue;
}
if (3 === a[0] && (!o || a[1] > o[0] && a[1] < o[3])) {
s.label = a[1];
break;
}
if (6 === a[0] && s.label < o[1]) {
s.label = o[1];
o = a;
break;
}
if (o && s.label < o[2]) {
s.label = o[2];
s.ops.push(a);
break;
}
o[2] && s.ops.pop();
s.trys.pop();
continue;
}
a = e.call(t, s);
} catch (t) {
a = [ 6, t ];
n = 0;
} finally {
i = o = 0;
}
if (5 & a[0]) throw a[1];
return {
value: a[0] ? a[1] : void 0,
done: !0
};
}
}, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf, __inner_gf;
(function(t) {
t.Assets = function() {};
})(gameframe || (gameframe = {}));
(function(t) {
t.macro = function() {};
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
t.newColor = function(t, e, i, n) {
return new cc.Color(t, e, i, n);
};
t.newNode = function(t) {
return new cc.Node(t);
};
t.newSpriteFrame = function() {
return new cc.SpriteFrame();
};
t.newFont = function() {
return new cc.Font();
};
t.newSize = function(t, e) {
return new cc.Size(t, e);
};
t.newVec2 = function(t, e) {
return new cc.Vec2(t, e);
};
t.newVec3 = function(t, e, i) {
return new cc.Vec3(t, e, i);
};
t.newRect = function(t, e, i, n) {
return new cc.Rect(t, e, i, n);
};
gameframe.Assets.AudioClip = cc.AudioClip;
gameframe.macro.REPEAT_FORERER = cc.macro.REPEAT_FOREVER;
t.director = cc.director;
t.enableForTarget = function(t) {
cc.director.getScheduler().enableForTarget(t);
};
t.isTargetEnabled = function(t) {
return "_id" in t;
};
(t.OS || (t.OS = {})).isStandalone = cc.sys.os == cc.sys.OS_WINDOWS || cc.sys.os == cc.sys.OS_OSX;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {})).makePluginModuleResolver = function(t) {
return function(e) {
return "".concat(t, "_") + e;
};
};
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.getBundle = function(t, e) {
var i = this;
if (t.bundleName) {
var n = cc.assetManager.getBundle(t.bundleName);
if (n) {
this.loadedBundles.set(t.bundleName, n);
e(n);
} else cc.assetManager.loadBundle(t.bundleName, {}, function(n, o) {
if (n) e(null, n); else {
i.loadedBundles.set(t.bundleName, o);
e(o);
}
});
} else e(null, "error Bundle name");
};
t.LoadText = function(e, i) {
var n = this;
e.bundleName ? t.getBundle(e, function(t, o) {
o ? i(null) : t.load(n.remmoveExtension(e.url), cc.Asset, function(t, e) {
t ? console.error("Load Text Error:" + t) : i(e._nativeAsset);
});
}) : i(null);
};
t.LoadAsset = function(e, i, n) {
var o = this;
e.bundleName ? t.getBundle(e, function(t, r) {
r ? n(null) : t.load(o.remmoveExtension(e.url), i, function(t, e) {
if (t) {
console.error("Load Asset Error:" + t);
n(null);
} else n(e);
});
}) : n(null);
};
t.PreloadAsset = function(e) {
var i = this;
e.bundleName && t.getBundle(e, function(t, n) {
n || t.preload(i.remmoveExtension(e.url));
});
};
t.loadRemote = function(t, e) {
cc.assetManager.loadRemote(t, function(t, i) {
if (t) {
console.error("Load Asset Error:" + t);
e(null);
} else e(i);
});
};
t.remmoveExtension = function(t) {
var e = t.lastIndexOf(".");
return e > 0 ? t.substring(0, e) : t;
};
t.ParseJson = function(t) {
return JSON.parse(t).json;
};
t.UnloadBundle = function(t) {
var e = cc.assetManager.getBundle(t);
if (e) {
cc.assetManager.removeBundle(e);
this.loadedBundles.delete(t);
}
};
t.UnloadBundles = function() {
this.loadedBundles.forEach(function(t, e) {
var i = cc.assetManager.getBundle(e);
if (i) {
i.releaseAll();
cc.assetManager.removeBundle(i);
}
});
this.loadedBundles.clear();
};
t.loadedBundles = new Map();
return t;
}();
t.ResourceLoader = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {
this.loading = new Map();
}
t.prototype.clearLoading = function() {
this.loading.clear();
};
t.prototype.stopLoading = function(t) {
this.loading.has(t) && this.loading.delete(t);
};
t.prototype.doAsync = function(t, e, i, n) {
var o = n(t);
if (o) i && i(o); else {
var r = this.loading.get(t);
if (r) {
var s = r.postLoad;
r.postLoad = function(t) {
s && s(t);
i && i(t);
};
} else {
r = {
postLoad: i
};
this.loading.set(t, r);
var a = this;
e(t, function(e) {
try {
r.postLoad && r.postLoad(e);
} finally {
a.loading.delete(t);
}
});
}
}
};
return t;
}();
t.SyncOpUtil = e;
})(t.__base || (t.__base = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
var i = function() {
function i() {}
i.makePackageKey = function(t) {
return t.bundleName ? t.bundleName + "/" + t.url : t.url;
};
i.addPackage = function(t, e) {
this._addPackage(t, function(t) {
e(null != t);
});
};
i._addPackage = function(t, i) {
var n = this, o = this.makePackageKey(t);
this.syncOp.doAsync(o, function(i, n) {
e.ResourceLoader.getBundle(t, function(i) {
if (i) {
var o = t.url, r = o.substring(o.lastIndexOf("/") + 1);
e.FGUI.delayLoadPkgdList[r] ? fgui.UIPackage.tryAddPackage("".concat(o, "/").concat(r), i, function(t, e) {
n(e);
}) : fgui.UIPackage.loadPackage(i, "".concat(o, "/").concat(r), function(t, e) {
n(e);
});
} else n(null);
});
}, function(t) {
t && n.loadedPackaged.set(o, t);
i(t);
}, this.getPackage.bind(this));
};
i.unloadPackage = function(t) {
var e = this.makePackageKey(t);
if (this.loadedPackaged.has(e)) {
var i = this.loadedPackaged.get(e);
fgui.UIPackage.removePackage(i.id);
this.loadedPackaged.delete(e);
}
};
i.unloadPackageByBundle = function(t) {
var e = this, i = new Map();
this.loadedPackaged.forEach(function(n, o) {
if (o.startsWith(t + "/")) {
fgui.UIPackage.removePackage(n.name);
e.syncOp.stopLoading(o);
} else i.set(o, n);
});
this.loadedPackaged = i;
};
i.createObject = function(t, e, i) {
this._addPackage(t, function(t) {
if (t) {
var n = new fgui.AsyncOperation();
n.callback = function(t) {
i(t);
};
n.createObject(t, e);
} else i(null);
});
};
i.getPackage = function(t) {
return this.loadedPackaged.get(t);
};
i.getUIPackage = function(t) {
return this.getPackage(this.makePackageKey(t));
};
i.disposeLoadedPackags = function() {
this.loadedPackaged.forEach(function(t) {
t && fgui.UIPackage.removePackage(t.name);
});
this.loadedPackaged.clear();
i.syncOp.clearLoading();
};
i.registerFont = function(t, e) {
fgui.registerFont(t, e);
};
i.castGObjectToGameObject = function(t) {
return t.node;
};
i.syncOp = new t.__base.SyncOpUtil();
i.loadedPackaged = new Map();
return i;
}();
e.FariyGUI = i;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function e() {}
e.addRelation = function(t, e, i) {
t.addRelation(e, i);
};
e.makeFullScreen = function(t) {
t.makeFullScreen();
};
e.getChildAt = function(t, e) {
return t.getChildAt(e);
};
e.getChild = function(t, e) {
return "getChild" in t ? t.getChild(e) : null;
};
e.addChild = function(t, e) {
t.addChild(e);
};
e.removeChildToPool = function(t, e) {
t.removeChildToPool(e);
};
e.removeChildrenToPool = function(t) {
t.removeChildrenToPool();
};
e.removeChildren = function(t) {
t.removeChildren();
};
e.addItemFromPool = function(t, e) {
return t.addItemFromPool(e);
};
e.setVirtual = function(t) {
return t.setVirtual();
};
e.setPosition = function(t, e, i) {
t.setPosition(e, i);
};
e.getChildIndex = function(t, e) {
return t.getChildIndex(e);
};
e.removeChild = function(t, e, i) {
t.removeChild(e, i);
};
e.removeFromParent = function(t) {
t.removeFromParent();
};
e.addChildAt = function(t, e, i) {
t.addChildAt(e, i);
};
e.getSize = function(t) {
return gameframe.newSize(t.width, t.height);
};
e.dispose = function(t) {
t.dispose();
};
e.addClick = function(t, e) {
t.onClick(e);
};
e.clearClick = function(t) {
return t.clearClick();
};
e.removeClick = function(t, e) {
t.offClick(e);
};
e.onEvent = function(t, e, i) {
t.on(e, i);
return i;
};
e.offEvent = function(t, e, i) {
t.off(e, i);
};
e.hitTest = function(t, e) {
return null != t.hitTest(e, !1);
};
e.getController = function(t, e) {
return "getController" in t ? t.getController(e) : null;
};
e.getTransition = function(t, e) {
return "getTransition" in t ? t.getTransition(e) : null;
};
e.play = function(t, e, i, n, o, r) {
t.play(e, i, n, o, r);
};
e.playReverse = function(t, e, i, n) {
t.playReverse(e, i, n);
};
e.getItemURL = function(t, e) {
return fgui.UIPackage.getItemURL(t, e);
};
e.setActive = function(t, e) {
t.node.active = e;
};
e.setFont = function(t, e) {
t.font = e;
};
e.prototype.saveScreenToFile = function(e, i) {
void 0 === e && (e = "image.png");
if (t.sys.isWeiXin) {
var n = cc.game.canvas, o = cc.winSize.width, r = cc.winSize.height;
n.toTempFilePath({
x: 0,
y: 0,
width: o,
height: r,
destWidth: o,
destHeight: r,
success: function(t) {
console.log(t);
i(!0, t.tempFilePath);
wx.saveImageToPhotosAlbum({
filePath: t.tempFilePath,
success: function() {
console.log("wx.saveImageToPhotosAlbum succeed.");
},
fail: function(t) {
console.error("wx.saveImageToPhotosAlbum failed:", t);
}
});
},
fail: function(t) {
i(!1, null);
console.error("wx.toTempFilePath failed:", t);
}
});
} else {
var s = cc.director.getScene().getComponentInChildren(cc.Camera), a = new cc.RenderTexture();
a.initWithSize(cc.winSize.width, cc.winSize.height, cc.game._renderContext.STENCIL_INDEX8);
s.cullingMask = 4294967295;
s.targetTexture = a;
s.render();
s.targetTexture = null;
for (var l = a.readPixels(), h = a.width, c = a.height, u = new Uint8Array(h * c * 4), p = 4 * h, d = 0; d < c; d++) for (var f = (c - 1 - d) * h * 4, _ = d * h * 4, g = 0; g < p; g++) u[_ + g] = l[f + g];
e = jsb.fileUtils.getWritablePath() + e;
var y = jsb.saveImageData(u, h, c, e);
console.log("saveImagePath:" + e);
null == i || i(y, e);
}
};
e.createTextureWithData = function(t, e, i) {
var n = new cc.SpriteFrame(), o = new cc.Texture2D();
o.initWithData(t, cc.Texture2D.PixelFormat.RGBA8888, e, i);
n.setTexture(o);
return n;
};
e.saveGObjectToFile = function(t, e, i) {
void 0 === e && (e = "image.png");
t.node.parent || (t.node.parent = cc.director.getScene());
var n = new cc.Node();
n.parent = t.node;
n.setPosition(t.width / 2, -t.height / 2);
var o = n.addComponent(cc.Camera);
o.cullingMask = 4294967295;
o.alignWithScreen = !1;
var r = n.convertToWorldSpace(cc.Vec2.ZERO), s = n.convertToWorldSpace(cc.Vec2.ONE);
o.orthoSize = Math.max(Math.abs(t.width * (s.x - r.x)), Math.abs(t.height * (s.y - r.y))) / 2;
var a = new cc.RenderTexture();
a.initWithSize(t.width, t.height, cc.game._renderContext.STENCIL_INDEX8);
o.targetTexture = a;
o.render(n.parent);
for (var l = a.width, h = a.height, c = a.readPixels(), u = new Uint8Array(l * h * 4), p = 4 * l, d = 0; d < h; d++) for (var f = (h - 1 - d) * l * 4, _ = d * l * 4, g = 0; g < p; g++) u[_ + g] = c[f + g];
e = jsb.fileUtils.getWritablePath() + e;
var y = jsb.saveImageData(u, l, h, e);
console.log("saveImagePath:" + e);
null == i || i(y, e);
n.removeFromParent(!0);
};
e.setDelayLoadPkg = function(t) {
e.delayLoadPkgdList = {};
for (var i = 0; i < t.length; i++) {
var n = t[i];
e.delayLoadPkgdList[n] = !0;
}
};
e.delayLoadPkgdList = {};
return e;
}();
t.FGUI = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.setInt = function(t, e) {
cc.sys.localStorage.setItem(t, e.toString());
};
t.getInt = function(t, e) {
void 0 === e && (e = 0);
var i = cc.sys.localStorage.getItem(t);
return i ? parseInt(i) : e;
};
t.setFloat = function(t, e) {
cc.sys.localStorage.setItem(t, e.toString());
};
t.getFloat = function(t, e) {
void 0 === e && (e = 0);
var i = cc.sys.localStorage.getItem(t);
return i ? Number(i) : e;
};
t.setString = function(t, e) {
cc.sys.localStorage.setItem(t, e);
};
t.getString = function(t, e) {
void 0 === e && (e = "");
var i = cc.sys.localStorage.getItem(t);
return null != i && "" != i ? i : e;
};
t.deleteKey = function(t) {
cc.sys.localStorage.removeItem(t);
};
t.clearStorage = function() {
cc.sys.localStorage.clear();
};
return t;
}();
t.Storage = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
(function(t) {
t[t.NONE = 0] = "NONE";
t[t.DEVELOP = 1] = "DEVELOP";
t[t.ONLINE = 2] = "ONLINE";
})(t.ENVIRONMENTTYPE || (t.ENVIRONMENTTYPE = {}));
var e = window.AppVersion, i = function() {
function t() {}
t.LoadJsDirectory = function() {
console.error("cocos use eval!");
};
t.PrepareResource = function(t, e, i) {
if (e && e.length > 0) for (var n = !1, o = 0, r = 0; r < e.length; r++) cc.assetManager.loadBundle(e[r], function(t) {
if (t) {
console.error(t);
n = !0;
}
++o == e.length && i(!n);
}); else i(!0);
};
t.getAppVersion = function() {
return e;
};
t.getApplicationVersion = function() {
return cc.sys.osVersion;
};
t.getDeviceName = function() {
return "";
};
t.getDeviceUniqueIdentifier = function() {
return "";
};
t.isWifi = function() {
return cc.sys.getNetworkType() == cc.sys.NetworkType.LAN;
};
t.AddUpdatorStartDownloadListner = function() {};
t.AddUpdatorProgressEventListner = function() {};
t.AddUpdatorCompletionEventListner = function() {};
t.RemoveUpdatorStartDownloadListner = function() {};
t.RemoveUpdatorProgressEventListner = function() {};
t.RemoveUpdatorCompletionEventListner = function() {};
t.UpdateSettings = function() {};
t.addUpdatorStartDownload = function() {};
t.addUpdatorProgressEvent = function() {};
t.addUpdatorCompletionEvent = function() {};
t.removeUpdatorStartDownload = function() {};
t.removeUpdatorProgressEvent = function() {};
t.removeUpdatorCompletionEvent = function() {};
t.showDebugInfo = function() {};
t.Quit = function(t) {
void 0 === t && (t = 0);
};
return t;
}();
t.App = i;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.find = function(t) {
var e = cc.find(t);
return null != e ? e : null;
};
t.walk = function(t, e, i) {
var n, o;
try {
for (var r = __values(t.children), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
e && e(a);
this.walk(a, e, i);
i && i(a);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
s && !s.done && (o = r.return) && o.call(r);
} finally {
if (n) throw n.error;
}
}
};
t.getChildByName = function(t, e) {
return t.getChildByName(e);
};
t.getComponentByType = function(t, e) {
return t.getComponent(e);
};
t.setName = function(t, e) {
t.name = e;
};
t.getGObject = function(t) {
return "$gobj" in t ? t.$gobj : null;
};
t.removeFromParent = function(t, e) {
t.removeFromParent();
e && t.destroy();
};
t.isValid = function(t, e) {
void 0 === e && (e = !0);
return "isValid" in t && t.isValid == e;
};
t.childrenCount = function(t) {
return t.children.length;
};
t.getChildAt = function(t, e) {
return t.children[e];
};
t.isActive = function(t) {
return null == t ? void 0 : t.active;
};
t.setActive = function(t, e) {
t.active = e;
};
return t;
}();
t.CCNodeHelpper = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
t.addScriptComponentToNode = function(t, e) {
var i = e.getComponent("GFComponent");
if (null == i) {
gameframe.DEBUG() && console.log("addBeanComponent ScriptComponent2:" + (e.$gobj ? e.$gobj.name : e.name));
(n = e.addComponent("GFComponent")).scriptComponent = t;
n.setDelegate(t);
} else {
var n;
(n = i).scriptComponent = t;
n.setDelegate(t);
}
};
t.getScriptComponent = function(t) {
var e = t.getComponent("GFComponent");
if (e) return e.scriptComponent;
};
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
Object.defineProperty(t, "isNative", {
get: function() {
return cc.sys.isNative;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t, "isBrowser", {
get: function() {
return cc.sys.isBrowser;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t, "os", {
get: function() {
return cc.sys.os;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t, "isWeiXin", {
get: function() {
return "undefined" != typeof window.wx && "undefined" != typeof window.wx.updateWeChatApp;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t, "isEvalScript", {
get: function() {
return !0;
},
enumerable: !1,
configurable: !0
});
t.getBatteryLevel = function(e) {
t.isWeiXin ? wx.getBatteryInfo({
complete: function(t) {
e(t ? t.level / 100 : 1);
}
}) : e(cc.sys.getBatteryLevel());
};
t.isDebug = function() {
return t.DEBUG;
};
t.setDebug = function(e) {
t.DEBUG = e;
};
t.getApplicationVersion = function() {
return cc.sys.osVersion;
};
t.getDeviceName = function() {
if (this.isWeiXin) {
this.weixinSystemInfo || (this.weixinSystemInfo = window.wx.getSystemInfoSync());
return this.weixinSystemInfo.brand + "-" + this.weixinSystemInfo.model;
}
return "editor";
};
t.getDeviceUniqueIdentifier = function() {
return this.getDeviceName();
};
t.isWifi = function() {
return this.isWeiXin ? "wifi" == t.weixinNetworkType : cc.sys.getNetworkType() == cc.sys.NetworkType.LAN;
};
t.isNetwork = function() {
return this.isWeiXin ? t.weixinIsConnected : cc.sys.getNetworkType() != cc.sys.NetworkType.NONE;
};
t.getNetworkType = function(e) {
if (this.isWeiXin) {
var i = e;
window.wx.getNetworkType({
complete: function(e) {
t.weixinNetworkType = e.networkType || "unknown";
"offline" == t.weixinNetworkType && (t.weixinNetworkType = "none");
t.weixinIsConnected = "none" != t.weixinNetworkType;
i(t.weixinNetworkType);
}
});
} else switch (cc.sys.getNetworkType()) {
case cc.sys.NetworkType.NONE:
null == e || e("none");
return;

case cc.sys.NetworkType.LAN:
null == e || e("wifi");
return;

case cc.sys.NetworkType.WWAN:
null == e || e("4g");
return;

default:
null == e || e("unknown");
}
};
t.OS_IOS = cc.sys.OS_IOS;
t.OS_ANDROID = cc.sys.OS_ANDROID;
t.OS_WINDOWS = cc.sys.OS_WINDOWS;
t.OS_MACOS = cc.sys.OS_OSX;
t.DEBUG = !window.ccenv;
t.weixinNetworkType = "unknown";
t.weixinIsConnected = !0;
return t;
}();
t.sys = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e;
(function(t) {
var e = function() {
function t() {}
t.prototype.Init = function(t, e) {
this.data = new Array(16e4);
this.rows = new Array();
this.rows.push({
size: t,
index: 0
});
this.columns = new Array();
this.columns.push({
size: e,
index: 0
});
};
t.prototype.Get = function(t, e) {
var i = this.rows[e].index, n = this.columns[t].index;
return this.data[this.GetDataLocation(n, i)];
};
t.prototype.Set = function(t, e, i) {
var n = this.rows[e].index, o = this.columns[t].index;
this.data[this.GetDataLocation(o, n)] = i;
};
t.prototype.GetDataLocation = function(t, e) {
return 400 * e + t;
};
t.prototype.GetRowHeight = function(t) {
return this.rows[t].size;
};
t.prototype.GetColumnWidth = function(t) {
return this.columns[t].size;
};
t.prototype.InsertRow = function(t, e) {
for (var i = this.rows[t].index, n = 0; n < this.columns.length; n++) this.data[this.GetDataLocation(n, this.rows.length)] = this.data[this.GetDataLocation(n, i)];
var o = this.rows[t];
this.rows.splice(t, 0, {
size: o.size - e,
index: this.rows.length
});
this.rows[t + 1].size = e;
};
t.prototype.InsertColumn = function(t, e) {
for (var i = this.columns[t].index, n = 0; n < this.rows.length; n++) this.data[this.GetDataLocation(this.columns.length, n)] = this.data[this.GetDataLocation(i, n)];
var o = this.columns[t];
this.columns.splice(t, 0, {
size: o.size - e,
index: this.columns.length
});
this.columns[t + 1].size = e;
};
t.prototype.PackRectsGridSplitter = function(e) {
var i, o;
e.sort(function(t, e) {
return e.h - t.h;
});
var r = new t();
r.Init(n, n);
try {
for (var s = __values(e), a = s.next(); !a.done; a = s.next()) {
for (var l = a.value, h = !1, c = 0, u = 0; u < r.rows.length && !h; u++) {
for (var p = 0, d = 0; d < r.columns.length && !h; d++) {
var f = {
x: 0,
y: 0
}, _ = {
x: 0,
y: 0
};
if (this.CanBePlaced(r, {
x: d,
y: u
}, {
x: l.w,
y: l.h
}, _, f)) {
h = !0;
l.x = p;
l.y = c;
var g = d + _.x - 1;
r.InsertColumn(g, f.x);
var y = u + _.y - 1;
r.InsertRow(y, f.y);
for (var m = d + _.x - 1; m >= d; m--) for (var v = u + _.y - 1; v >= u; v--) r.Set(m, v, !0);
}
p += r.GetColumnWidth(d);
}
c += r.GetRowHeight(u);
}
h && (l.wasPacked = !0);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
a && !a.done && (o = s.return) && o.call(s);
} finally {
if (i) throw i.error;
}
}
};
t.prototype.CanBePlaced = function(t, e, i, n, o) {
for (var r = 0, s = 0, a = e.x, l = e.y; s < i.y; ) {
a = e.x;
r = 0;
if (l >= t.rows.length) return !1;
s += t.GetRowHeight(l);
for (;r < i.x; ) {
if (a >= t.columns.length) return !1;
if (t.Get(a, l)) return !1;
r += t.GetColumnWidth(a);
a++;
}
l++;
}
if (a - e.x <= 0 || l - e.y <= 0) return !1;
n.x = a - e.x;
n.y = l - e.y;
o.x = r - i.x;
o.y = s - i.y;
return !0;
};
return t;
}();
t.DynamicGrid = e;
})(e || (e = {}));
var i = function() {
function t(t, e) {
this._textures = [];
this._innerTextureInfos = [];
this._innerSpriteFrames = new Map();
this._width = t;
this._height = e;
}
t.prototype.getSpriteFrame = function(t) {
return this._innerSpriteFrames.get(t);
};
t.prototype.addOrigin = function(t, e) {
e.addRef();
this._innerTextureInfos.push(e);
this._innerSpriteFrames.set(t, e);
};
t.prototype.packSpriteFrames = function(t) {
var e, i;
if (t && 0 != t.size) try {
for (var n = __values(t), o = n.next(); !o.done; o = n.next()) {
var r = o.value, s = r[0], a = r[1];
this.addOrigin(s, a);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
t.prototype.reset = function() {
var t, e;
try {
for (var i = __values(this._innerTextureInfos), n = i.next(); !n.done; n = i.next()) n.value.decRef();
} catch (e) {
t = {
error: e
};
} finally {
try {
n && !n.done && (e = i.return) && e.call(i);
} finally {
if (t) throw t.error;
}
}
this._innerTextureInfos.splice(0);
this._innerSpriteFrames.clear();
};
t.prototype.destroy = function() {
var t, e;
this.reset();
try {
for (var i = __values(this._textures), n = i.next(); !n.done; n = i.next()) n.value.destroy();
} catch (e) {
t = {
error: e
};
} finally {
try {
n && !n.done && (e = i.return) && e.call(i);
} finally {
if (t) throw t.error;
}
}
this._textures.splice(0);
};
return t;
}(), n = 2048;
t.createSpriteAtalas = function(t) {
var e = new i(n, n);
e.packSpriteFrames(t);
return e;
};
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.prototype.stopMusic = function() {
cc.audioEngine.stopMusic();
};
t.prototype.pauseMusic = function() {
cc.audioEngine.pauseMusic();
};
t.prototype.resumeMusic = function() {
cc.audioEngine.resumeMusic();
};
t.prototype.playMusic = function(t, e) {
cc.audioEngine.playMusic(t, e);
};
t.prototype.playEffect = function(t, e) {
cc.audioEngine.playEffect(t, e);
};
t.prototype.stopAllEffects = function() {
cc.audioEngine.stopAllEffects();
};
t.prototype.setMusicVolume = function(t) {
cc.audioEngine.setMusicVolume(t);
};
t.prototype.setEffectsVolume = function(t) {
cc.audioEngine.setEffectsVolume(t);
};
t.prototype.getMusicVolume = function() {
return cc.audioEngine.getMusicVolume();
};
t.prototype.getEffectsVolume = function() {
return cc.audioEngine.getEffectsVolume();
};
t.prototype.fixPath = function(t) {
return t.endsWith(".mp3") ? t.substring(0, t.length - 4) : t;
};
t.prototype.clearAll = function(t) {
t.forEach(function(t) {
t.forEach(function(t) {
"object" == typeof t && cc.audioEngine.uncache(t);
});
});
};
return t;
}();
t.Audio = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
t.Event = function() {};
})(gameframe || (gameframe = {}));
(function(t) {
t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}), function() {
var t = gameframe.Event;
t.onClick = fgui.Event.CLICK;
t.onTouchBegin = fgui.Event.TOUCH_BEGIN;
t.onTouchMove = fgui.Event.TOUCH_MOVE;
t.onTouchEnd = fgui.Event.TOUCH_END;
t.onRollOver = fgui.Event.ROLL_OVER;
t.onRollOut = fgui.Event.ROLL_OUT;
t.onKeyDown = cc.SystemEvent.EventType.KEY_DOWN;
t.onSizeChanged = fgui.Event.SIZE_CHANGED;
t.onDragStart = fgui.Event.DRAG_START;
t.onDragMove = fgui.Event.DRAG_MOVE;
t.onDragEnd = fgui.Event.DRAG_END;
t.onClickItem = fgui.Event.CLICK_ITEM;
t.onChanged = fgui.Event.STATUS_CHANGED;
t.onScroll = fgui.Event.SCROLL;
t.onScrollEnd = fgui.Event.SCROLL_END;
t.onPullDownRelease = fgui.Event.PULL_DOWN_RELEASE;
t.onPullUpRelease = fgui.Event.PULL_UP_RELEASE;
t.onHide = cc.game.EVENT_HIDE;
t.onShow = cc.game.EVENT_SHOW;
t.onLowMemory = "";
t.onRestart = cc.game.EVENT_RESTART;
t.onPause = "";
t.onResume = "";
t.onClose = "";
t.handleGameEvent = function(t, e) {
cc.game.on(t, e);
return function() {
cc.game.off(t, e);
};
};
}();
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.wrapCallback = function(t) {
return function(e, i, n, o) {
t(e, i, n, !e && "Request timeout" == o, o);
};
};
t.Get = function(t, e, i, n) {
var o = new XMLHttpRequest();
t.startsWith("https") && (o.withCredentials = !0);
o.timeout = 1e3 * i;
o.onreadystatechange = function() {
if (4 == o.readyState) {
var t = o.status >= 200 && o.status < 400, e = o.statusText;
n(t, o.status, o.responseText, !t && "Request timeout" == e, e);
}
};
o.open("GET", t, !0);
if (e) for (var r in e.entries()) o.setRequestHeader(r[0], r[1]);
o.send();
};
t.PostRequestWithBody = function(t, e, i, n, o) {
var r = new XMLHttpRequest();
t.startsWith("https") && (r.withCredentials = !0);
r.timeout = 1e3 * n;
r.onreadystatechange = function() {
if (4 == r.readyState) {
var t = r.status >= 200 && r.status < 400, e = r.statusText;
o(t, r.status, r.responseText, !t && "Request timeout" == e, e);
}
};
r.open("POST", t, !0);
if (i) for (var s in i.entries()) r.setRequestHeader(s[0], s[1]);
r.send(e);
};
t.PostRequest = function(t, e, i, n, o) {
var r = new XMLHttpRequest();
t.startsWith("https") && (r.withCredentials = !0);
r.timeout = 1e3 * n;
r.onreadystatechange = function() {
if (4 == r.readyState) {
var t = r.status >= 200 && r.status < 400, e = r.statusText;
o(t, r.status, r.responseText, !t && "Request timeout" == e, e);
}
};
var s = new FormData();
if (e) for (var a in e.entries()) s.append(a[0], a[1]);
r.open("POST", t, !0);
if (i) for (var a in i.entries()) r.setRequestHeader(a[0], a[1]);
r.send(s);
};
return t;
}();
t.XMLWebRequest = e;
})(t.__base || (t.__base = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {})).WebRequestHelper = t.__base.XMLWebRequest;
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
(function() {
if (!sp.Skeleton.isGFHooked && window.jsb) {
sp.Skeleton.isGFHooked = !0;
sp.Skeleton.prototype.__OldGf_preload = sp.Skeleton.prototype.__preload;
sp.Skeleton.prototype.__preload = function() {
Object.getPrototypeOf(sp.Skeleton.prototype).__preload.call(this, arguments);
for (var t = this.node.children, e = 0, i = t.length; e < i; e++) {
var n = t[e];
n && "DEBUG_DRAW_NODE" === n._name && n.destroy();
}
this.skeletonData || this.disableRender();
this._updateDebugDraw();
this._updateUseTint();
this._updateBatch();
};
}
})();
t.unHookspine = function() {
if (sp.Skeleton.isGFHooked) {
sp.Skeleton.prototype.__preload = sp.Skeleton.prototype.__OldGf_preload;
delete sp.Skeleton.prototype.__OldGf_preload;
delete sp.Skeleton.isGFHooked;
}
};
t.spineFromNode = function(t) {
return (null == t ? void 0 : t.getComponent(sp.Skeleton)) || null;
};
function e(t) {
var e = null == t ? void 0 : t.content;
return e ? t && t.content_PathChange ? null : e : null;
}
t.spineFromGLoader3D = e;
t.onSpineLoaded = function(t, i) {
var n = e(t);
n ? i(n) : t.node.once("fui_loaded", function(t) {
n = e(t);
i(n || null);
});
};
var i = function() {
function t(t) {
this._ccSkeleton = t;
}
t.fromNode = function(e) {
var i = null == e ? void 0 : e.getComponent(sp.Skeleton);
return i ? new t(i) : null;
};
t.fromGLoader3D = function(e) {
var i = null == e ? void 0 : e.content;
return i ? new t(i) : null;
};
t.onSpineLoaded = function(t, e) {
var i = this, n = this.fromGLoader3D(t);
n ? e(n) : t.node.once("fui_loaded", function(t) {
var n = i.fromGLoader3D(t);
n && e(n);
});
};
Object.defineProperty(t.prototype, "paused", {
get: function() {
return this._ccSkeleton.paused;
},
set: function(t) {
this._ccSkeleton.paused = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "loop", {
get: function() {
return this._ccSkeleton.loop;
},
set: function(t) {
this._ccSkeleton.loop = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "timeScale", {
get: function() {
return this._ccSkeleton.timeScale;
},
set: function(t) {
this._ccSkeleton.timeScale = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "animation", {
get: function() {
return this._ccSkeleton.animation;
},
set: function(t) {
this._ccSkeleton.animation = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "premultipliedAlpha", {
get: function() {
return this._ccSkeleton.premultipliedAlpha;
},
set: function(t) {
this._ccSkeleton.premultipliedAlpha = t;
},
enumerable: !1,
configurable: !0
});
t.prototype.updateAnimation = function() {};
t.prototype.invalidAnimationCache = function() {
this._ccSkeleton.invalidAnimationCache();
};
t.prototype.setAnimation = function(t, e, i) {
this._ccSkeleton.setAnimation(t, e, i);
};
t.prototype.addAnimation = function(t, e, i, n) {
this._ccSkeleton.addAnimation(t, e, i, n);
};
t.prototype.getState = function() {
return this._ccSkeleton.getState();
};
t.prototype.getSkeleton = function() {
return this._ccSkeleton.getState().getSkeleton;
};
t.prototype.setStartListener = function(t) {
this._ccSkeleton.setStartListener(t);
};
t.prototype.setInterruptListener = function(t) {
this._ccSkeleton.setInterruptListener(t);
};
t.prototype.setEndListener = function(t) {
this._ccSkeleton.setEndListener(t);
};
t.prototype.setDisposeListener = function(t) {
this._ccSkeleton.setDisposeListener(t);
};
t.prototype.setCompleteListener = function(t) {
this._ccSkeleton.setCompleteListener(t);
};
t.prototype.setEventListener = function(t) {
this._ccSkeleton.setEventListener(t);
};
t.prototype.clearTracks = function() {
this._ccSkeleton.clearTracks();
};
t.prototype.clearTrack = function(t) {
this._ccSkeleton.clearTrack(t);
};
t.prototype.attachToBone = function(t, e) {
if (e.parent != this._ccSkeleton.node) {
e.removeFromParent();
e.parent = this._ccSkeleton.node;
}
};
return t;
}();
t.Spine = i;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t(t) {
this._fguiObg = t;
var e = this._fguiObg.node;
this._webview = e.addComponent(cc.WebView);
this._webview.name = t.name;
}
t.getOrAddWebView = function(e, i, n) {
e._gfwebview || (e._gfwebview = new t(e));
var o = e._gfwebview;
i && (o.url = i);
n && n(o);
return o;
};
t.getWebView = function(t) {
return t._gfwebview;
};
Object.defineProperty(t.prototype, "url", {
get: function() {
return this._webview.url;
},
set: function(t) {
this._webview.url = t;
},
enumerable: !1,
configurable: !0
});
t.prototype.evaluateJS = function(t) {
this._webview.evaluateJS(t);
};
t.prototype.setJavascriptInterfaceScheme = function(t) {
this._webview.setJavascriptInterfaceScheme(t);
};
t.prototype.setOnJSCallback = function(t) {
this._webview.setOnJSCallback(t);
};
return t;
}();
t.webview = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
(function() {
if (window.wx && cc.VideoPlayer) {
var t = cc.VideoPlayer.Impl;
if (!t.isGFHooked) {
console.log("hook VideoPlayer");
t.isGFHooked = !0;
t.prototype.__OldGf_createDomElementIfNeeded = t.prototype.createDomElementIfNeeded;
t.prototype.createDomElementIfNeeded = function() {
if (wx.createVideo) {
if (!this._video) {
this._video = wx.createVideo({
width: 10,
x: -10,
showCenterPlayBtn: !1,
controls: !1,
enableProgressGesture: !1,
showProgress: !1,
showProgressInControlMode: !1,
autoPauseIfOpenNative: !1,
autoPauseIfNavigate: !1
});
this._duration = 0;
this._currentTime = 0;
this._loaded = !1;
this._visible = !1;
this._bindEvent();
}
} else cc.warn("VideoPlayer not supported");
};
}
}
})();
e.unHookVideoPlayer = function() {
if (window.wx && cc.VideoPlayer) {
var t = cc.VideoPlayer.Impl;
if (t.isGFHooked && t.prototype.__OldGf_createDomElementIfNeeded) {
t.prototype.createDomElementIfNeeded = t.prototype.__OldGf_createDomElementIfNeeded;
delete t.isGFHooked;
}
}
};
var i = function() {
function e(t) {
var e = this;
this._playOnAwake = !1;
this._callBack = null;
this._loop = !1;
this.videoPlayerCall = function(t, i) {
i == cc.VideoPlayer.EventType.READY_TO_PLAY ? e._playOnAwake && e.play() : i == cc.VideoPlayer.EventType.COMPLETED && e._loop && e._videoPlayer.play();
e._callBack && e._callBack(t, i);
};
this._fguiObg = t;
var i = this._fguiObg.node;
this._videoPlayer = i.addComponent(cc.VideoPlayer);
this._videoPlayer.name = t.name;
var n = this._videoPlayer._impl;
n.setVisible(!1);
n._video.width = 100;
n._video.x = -100;
var o = i.getComponent("GFComponent_NodeActiveLisnter");
if (!o) {
o = i.addComponent("GFComponent_NodeActiveLisnter");
var r = new cc.Component.EventHandler();
r.target = i;
r.component = "GFComponent_NodeActiveLisnter";
r.handler = "callback";
this._videoPlayer.videoPlayerEvent = [ r ];
var s = this;
o.onEnable = function() {
var t;
s._playOnAwake && (null === (t = this._videoPlayer) || void 0 === t || t.play());
};
}
o.callback = this.videoPlayerCall;
}
e.getOrAddVideo = function(t, i, n) {
t._gfvideoplayer || (t._gfvideoplayer = new e(t));
var o = t._gfvideoplayer;
i && (o.url = i);
n && n(o);
return o;
};
e.getVideo = function(t) {
return t._gfvideoplayer;
};
Object.defineProperty(e.prototype, "url", {
get: function() {
return this._videoPlayer.remoteURL;
},
set: function(t) {
this._videoPlayer.resourceType = cc.VideoPlayer.ResourceType.REMOTE;
this._videoPlayer.remoteURL = t;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPath = function(e, i, n) {
var o = this;
void 0 === i && (i = "lobby");
var r = {
bundleName: gameframe.App.inst.context.getBean(gameframe.IAssetPlugin).moduleResolver(i),
url: "res/".concat(e)
};
this._videoPlayer.resourceType = cc.VideoPlayer.ResourceType.LOCAL;
t.adaptor.ResourceLoader.LoadAsset(r, null, function(t) {
if (t) {
o._videoPlayer.clip = t;
null == n || n.call(null, !0);
window.wx && cc.assetManager.releaseAsset(t);
} else null == n || n.call(null, !1);
});
};
Object.defineProperty(e.prototype, "playOnAwake", {
get: function() {
return this._playOnAwake;
},
set: function(t) {
this._playOnAwake = t;
t && this._videoPlayer.clip && this._videoPlayer.play();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "volume", {
get: function() {
return this._videoPlayer.volume;
},
set: function(t) {
this._videoPlayer.volume = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "loop", {
get: function() {
return this._loop;
},
set: function(t) {
this._loop = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "keepAspectRatio", {
get: function() {
return this._videoPlayer.keepAspectRatio;
},
set: function(t) {
this._videoPlayer.keepAspectRatio = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "fullScreenOnAwake", {
get: function() {
return this._videoPlayer.isFullscreen;
},
set: function(t) {
this._videoPlayer.isFullscreen = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "currentTime", {
get: function() {
return this._videoPlayer.currentTime;
},
set: function(t) {
this._videoPlayer.currentTime = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "duration", {
get: function() {
return this._videoPlayer.getDuration();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "isPlaying", {
get: function() {
return this._videoPlayer.isPlaying;
},
enumerable: !1,
configurable: !0
});
e.prototype.play = function() {
var t;
this._videoPlayer && this._videoPlayer._impl.setVisible(!0);
return null === (t = this._videoPlayer) || void 0 === t ? void 0 : t.play();
};
e.prototype.resume = function() {
return this._videoPlayer.resume();
};
e.prototype.pause = function() {
return this._videoPlayer.pause();
};
e.prototype.stop = function() {
return this._videoPlayer.stop();
};
e.prototype.setEventCallBack = function(t) {
this._callBack = t;
};
var i, n, o, r, s, a, l, h, c, u, p, d, f, _;
e.isSupprt = !!cc.VideoPlayer;
e.EventType = {
PLAYING: null === (n = null === (i = cc.VideoPlayer) || void 0 === i ? void 0 : i.EventType) || void 0 === n ? void 0 : n.PLAYING,
PAUSED: null === (r = null === (o = cc.VideoPlayer) || void 0 === o ? void 0 : o.EventType) || void 0 === r ? void 0 : r.PAUSED,
STOPPED: null === (a = null === (s = cc.VideoPlayer) || void 0 === s ? void 0 : s.EventType) || void 0 === a ? void 0 : a.STOPPED,
COMPLETED: null === (h = null === (l = cc.VideoPlayer) || void 0 === l ? void 0 : l.EventType) || void 0 === h ? void 0 : h.COMPLETED,
META_LOADED: null === (u = null === (c = cc.VideoPlayer) || void 0 === c ? void 0 : c.EventType) || void 0 === u ? void 0 : u.META_LOADED,
CLICKED: null === (d = null === (p = cc.VideoPlayer) || void 0 === p ? void 0 : p.EventType) || void 0 === d ? void 0 : d.CLICKED,
READY_TO_PLAY: null === (_ = null === (f = cc.VideoPlayer) || void 0 === f ? void 0 : f.EventType) || void 0 === _ ? void 0 : _.READY_TO_PLAY
};
return e;
}();
e.videoPlayer = i;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
(function(t) {
t[t.CONNECTING = 1] = "CONNECTING";
t[t.OPEN = 2] = "OPEN";
t[t.ERROR = 3] = "ERROR";
t[t.CLOSING = 4] = "CLOSING";
t[t.CLOSED = 5] = "CLOSED";
})(t.SocketState || (t.SocketState = {}));
(function(t) {
t[t.EWxWebScoekt = 0] = "EWxWebScoekt";
t[t.EUnityWebSocket = 1] = "EUnityWebSocket";
t[t.EBrowserWebSocket = 2] = "EBrowserWebSocket";
})(t.ConnectType || (t.ConnectType = {}));
})(t._interfaces || (t._interfaces = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
var i = t._interfaces.ConnectType, n = t._interfaces.SocketState, o = function() {
function e(t) {
this._certificateUrl = t;
}
e.prototype.connect = function(e, i) {
var n, o = WebSocket;
(n = (t.adaptor.OS.isAndroid || t.adaptor.OS.isStandalone) && this._certificateUrl && e.startsWith("wss") ? new o(e, null, this._certificateUrl) : new WebSocket(e)).binaryType = "arraybuffer";
n.onopen = function() {
i.onOpen();
};
n.onmessage = function(t) {
i.onMessage(t.data);
};
n.onerror = function(t) {
i.onError(t);
};
n.onclose = function(t) {
i.onClose(t.Code, t.Reason, t.WasClean);
};
this._webSocket = n;
};
e.prototype.send = function(t) {
var e;
null === (e = this._webSocket) || void 0 === e || e.send(t.buffer);
};
e.prototype.close = function() {
var t;
try {
null === (t = this._webSocket) || void 0 === t || t.close();
} catch (t) {
console.error("error while closing webSocket");
}
if (this._webSocket) {
this._webSocket.onopen = null;
this._webSocket.onmessage = null;
this._webSocket.onerror = null;
this._webSocket.onclose = null;
this._webSocket = void 0;
}
};
e.prototype.getState = function() {
var t;
switch (null === (t = this._webSocket) || void 0 === t ? void 0 : t.readyState) {
case WebSocket.OPEN:
return n.OPEN;

case WebSocket.CONNECTING:
return n.CONNECTING;

case WebSocket.CLOSING:
return n.CLOSING;

case WebSocket.CLOSED:
return n.CLOSED;
}
return n.CLOSED;
};
e.prototype.getConnectType = function() {
return i.EBrowserWebSocket;
};
return e;
}();
e.BrowserWebSocket = o;
})(t.__base || (t.__base = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {})).WebSocketImpl = t.__base.BrowserWebSocket;
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.iniNativeFileUtils = function() {
t._isInited = !0;
if (t._nativeFileUils) console.log("[DEBUG][FILEUTILS]is native"); else if (window.wx) {
console.log("[DEBUG][FILEUTILS]is wecaht");
t._nativeFileUils = i;
} else {
if (!window.localStorage) throw new Error("nativeFileUils must be set in adaptor.");
console.log("[DEBUG][FILEUTILS]is web");
t._nativeFileUils = n;
}
};
Object.defineProperty(t, "nativeFileUils", {
get: function() {
t._isInited || t.iniNativeFileUtils();
return t._nativeFileUils;
},
set: function(e) {
t._nativeFileUils = e;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t, "writeablePath", {
get: function() {
var e;
return null === (e = t.nativeFileUils) || void 0 === e ? void 0 : e.getWritablePath();
},
enumerable: !1,
configurable: !0
});
t.getAbsolutePath = function(e) {
var i = t.writeablePath, n = i.endsWith("/") || e.startsWith("/") ? "" : "/";
return i + n + e;
};
t.isFileExist = function(e) {
var i = t.getAbsolutePath(e);
return t.nativeFileUils.isFileExist(i);
};
t.createDirectory = function(e) {
if (!t.nativeFileUils.isDirectoryExist(e)) return t.nativeFileUils.createDirectory(e);
};
t.writeStringToFile = function(e, i) {
var n = t.getAbsolutePath(i), o = n.lastIndexOf("/"), r = n.substring(0, o);
t.createDirectory(r);
return t.nativeFileUils.writeStringToFile(e, n);
};
t.getStringFromFile = function(e) {
var i = t.getAbsolutePath(e);
return t.nativeFileUils.getStringFromFile(i);
};
t._isInited = !1;
t._nativeFileUils = null;
return t;
}();
t.BaseFileUtils = e;
var i = function() {
function t() {}
t.getWritablePath = function() {
return wx.env.USER_DATA_PATH;
};
t.isDirectoryExist = function(e) {
return t.isFileExist(e);
};
t.createDirectory = function(t) {
var e = wx.getFileSystemManager();
try {
e.mkdirSync(t, !0);
return t;
} catch (t) {
return null;
}
};
t.isFileExist = function(t) {
var e = wx.getFileSystemManager();
try {
e.accessSync(t);
return !0;
} catch (t) {
return !1;
}
};
t.writeStringToFile = function(t, e) {
var i = wx.getFileSystemManager();
try {
i.writeFileSync(e, t, "utf8");
return !0;
} catch (t) {
console.error(t);
return !1;
}
};
t.getStringFromFile = function(t) {
var e = wx.getFileSystemManager();
try {
return e.readFileSync(t, "utf8");
} catch (t) {
console.error(t);
return null;
}
};
return t;
}();
t.WxNativeFileUtils = i;
var n = function() {
function t() {}
t.getWritablePath = function() {
return "";
};
t.isDirectoryExist = function() {
return !0;
};
t.createDirectory = function(t) {
return t;
};
t.isFileExist = function(t) {
return !!window.localStorage.getItem(t);
};
t.writeStringToFile = function(t, e) {
try {
window.localStorage.setItem(e, t);
return !0;
} catch (t) {
console.error(new Error("web中做开发测试时用localStroke模拟文件读写, 总大小为5M超过后出错!").stack);
console.error(t);
return !1;
}
};
t.getStringFromFile = function(t) {
try {
return window.localStorage.getItem(t);
} catch (t) {
console.error(t);
return null;
}
};
return t;
}();
t.WebNativeFileUtils = n;
})(t.__base || (t.__base = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
var i;
e.FileUtils = t.__base.BaseFileUtils;
e.FileUtils.nativeFileUils = null === (i = window.jsb) || void 0 === i ? void 0 : i.fileUtils;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = t.__Adapator_Cocos2;
(function(t) {
t.FariyGUIExt = e.FariyGUI;
t.sys = e.sys;
t.director = e.director;
t.AppAdaptor = e.App;
t.ResourceLoader = e.ResourceLoader;
t.cdnUrl = "";
t.storage = e.Storage;
t.makePluginModuleResolver = e.makePluginModuleResolver;
t.DEBUG = e.sys.isDebug;
t.addScriptComponentToNode = e.addScriptComponentToNode;
t.getScriptComponent = e.getScriptComponent;
t.NodeHelpper = e.CCNodeHelpper;
t.createSpriteAtalas = e.createSpriteAtalas;
t.Audio = e.Audio;
t.setDEBUG = e.sys.setDebug;
t.UGOHelper = e.CCNodeHelpper;
t.isValid = e.CCNodeHelpper.isValid;
t.castToGObject = e.CCNodeHelpper.getGObject;
t.castGObjectToGameObject = e.FariyGUI.castGObjectToGameObject;
t.WebRequest = e.WebRequestHelper;
t.FGUI = e.FGUI;
t.FileUtils = e.FileUtils;
t.Spine = e.Spine;
t.spineFromNode = e.spineFromNode;
t.spineFromGLoader3D = e.spineFromGLoader3D;
t.onSpineLoaded = e.onSpineLoaded;
t.webview = e.webview;
t.videoPlayer = e.videoPlayer;
t.ENVIRONMENTTYPE = e.ENVIRONMENTTYPE;
t.WebSocketImpl = e.WebSocketImpl;
t.enableForTarget = e.enableForTarget;
t.isTargetEnabled = e.isTargetEnabled;
t.newNode = e.newNode;
t.newColor = e.newColor;
t.newVec2 = e.newVec2;
t.newVec3 = e.newVec3;
t.newSize = e.newSize;
t.newFont = e.newFont;
t.newSpriteFrame = e.newSpriteFrame;
t.newRect = e.newRect;
(function(t) {
t.isNative = e.sys.isNative;
t.isBrowser = e.sys.isBrowser;
t.isAndroid = e.sys.os === e.sys.OS_ANDROID;
t.isIOS = e.sys.os === e.sys.OS_IOS;
t.isWeiXin = e.sys.isWeiXin;
t.isStandalone = e.OS.isStandalone;
})(t.OS || (t.OS = {}));
t.cleanUpHooks = function() {
e.unHookspine();
e.unHookVideoPlayer();
};
})(t.cocos2 || (t.cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
t.adaptor = t.cocos2;
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = __inner_gf.adaptor;
t.DEBUG = e.DEBUG;
t.setDEBUG = e.setDEBUG;
t.UGOHelper = e.UGOHelper;
t.isValid = e.isValid;
t.castToGObject = e.castToGObject;
t.castGObjectToGameObject = e.castGObjectToGameObject;
t.WebRequest = e.WebRequest;
t.FileUtils = e.FileUtils;
t.FGUI = e.FGUI;
t.ResourceLoader = e.ResourceLoader;
t.sys = e.sys;
t.resVerson = new Map();
t.Verson = 1;
t.FariyGUIExt = e.FariyGUIExt;
t.Spine = e.Spine;
t.webView = e.webview;
t.videoPlayer = e.videoPlayer;
t.ENVIRONMENTTYPE = e.ENVIRONMENTTYPE;
t.AppAdaptor = e.AppAdaptor;
t.newNode = e.newNode;
t.newColor = e.newColor;
t.newVec2 = e.newVec2;
t.newVec3 = e.newVec3;
t.newRect = e.newRect;
t.newSize = e.newSize;
t.newFont = e.newFont;
t.newSpriteFrame = e.newSpriteFrame;
(function(t) {
t.fromNode = e.spineFromNode;
t.fromGLoader3D = e.spineFromGLoader3D;
t.onSpineLoaded = e.onSpineLoaded;
})(t.sp || (t.sp = {}));
t.cleanUp = e.cleanUpHooks;
(function(t) {
t.isNative = e.OS.isNative;
t.isBrowser = e.OS.isBrowser;
t.isAndroid = e.OS.isAndroid;
t.isIOS = e.OS.isIOS;
t.isWeiXin = e.OS.isWeiXin;
t.isStandalone = e.OS.isStandalone;
})(t.OS || (t.OS = {}));
t.setLayerNode = function() {};
t.setSmart = function(t, e) {
void 0 === e && (e = !0);
};
t.setTextTopping = function(t, e) {
void 0 === e && (e = !0);
};
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.destroy = function(t) {
t.destroy();
};
t.asNode = function(t) {
return t instanceof cc.Node ? t : null;
};
return t;
}();
t.CCObjectHelpper = e;
})(t.__Adapator_Cocos2 || (t.__Adapator_Cocos2 = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = {
value: void 0,
enumerable: !1,
writable: !1,
configurable: !0
}, i = function() {
function t() {
this._registeredClassNames = {};
}
t.getClassName = function(t) {
if ("function" == typeof t) {
var e = t.prototype;
if (e && e.hasOwnProperty("__classname__")) return e.__classname__;
throw new Error("Get deafult class name not support any more.:" + t);
}
return t && t.constructor ? this.getClassName(t.constructor) : "";
};
t.setClassAlias = function(e, i) {
var n = e.prototype;
if (n) if (n.hasOwnProperty("__classname__")) {
if (n.__classname__ === i) return;
console.error("Class (".concat(e.name, ") registered with direrent alias ").concat(i, " vs ").concat(n.__classname__), new Error().stack);
t.value(e.prototype, "__classname__", i);
} else t.value(e.prototype, "__classname__", i);
};
t.prototype.getClassByName = function(t) {
return this._registeredClassNames[t];
};
t.prototype.registerClass = function(e, i) {
t.setClassAlias(e, i);
if (i) {
var n = this._registeredClassNames[i];
if (n && n !== e) {
var o = 'A Class already exists with the same __classname__ : "' + i + '".';
console.error(o);
} else this._registeredClassNames[i] = e;
}
return i;
};
t.value = function(t, i, n, o, r) {
void 0 === o && (o = !1);
void 0 === r && (r = !1);
e.value = n;
e.writable = o;
e.enumerable = r;
Object.defineProperty(t, i, e);
e.value = void 0;
};
return t;
}();
t.TypeRegistry = i;
})(t.__Context_ || (t.__Context_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {
this._intfToImplMap = new Map();
this._implToIntfMap = new Map();
}
t.prototype.regImpl = function(t, e) {
if (this._intfToImplMap.has(e) || this._implToIntfMap.has(t)) {
gameframe.DEBUG() && console.error("[ImplPool] regImpl implement ".concat(t, " register interface ").concat(e, " already registered : ").concat(this._intfToImplMap.get(e)));
return !1;
}
this._intfToImplMap.set(e, t);
this._implToIntfMap.set(t, e);
return !0;
};
t.prototype.getImpl = function(t) {
var e = this._intfToImplMap.get(t);
return void 0 === e ? null : e;
};
t.prototype.getIntf = function(t) {
var e = this._implToIntfMap.get(t);
return void 0 === e ? null : e;
};
t.prototype.getAllIntf = function() {
return this._intfToImplMap.keys();
};
return t;
}();
t.ImplRegistry = e;
})(t.__Context_ || (t.__Context_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
var e = {
value: void 0,
enumerable: !1,
writable: !1,
configurable: !0
}, i = function() {
function t(t, e) {
this.autoCreate = !1;
this.unwired = new Array();
this.autoAwares = new Array();
this.properties = new Map();
this._ctx = t;
this.creator = function() {
return new e();
};
}
t.get = function(e, i) {
if (i.prototype.hasOwnProperty("__bean_prototype__")) return i.prototype.__bean_prototype__;
if (!e || !i) return null;
var n = new t(e, i);
t.value(i.prototype, "__bean_prototype__", n);
return n;
};
Object.defineProperty(t.prototype, "ctx", {
get: function() {
return this._ctx;
},
enumerable: !1,
configurable: !0
});
t.value = function(t, i, n, o, r) {
void 0 === o && (o = !1);
void 0 === r && (r = !1);
e.value = n;
e.writable = o;
e.enumerable = r;
Object.defineProperty(t, i, e);
e.value = void 0;
};
return t;
}();
t.BeanProperty = i;
})(t.__Context_ || (t.__Context_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
t.setBeanProperty = function(t, e, i, n) {
var o = __inner_gf.__Context_.BeanProperty.get(t, e);
if (o) {
o.properties.set(i, n);
return !0;
}
return !1;
};
t.getBeanProperty = function(t, e, i) {
var n = __inner_gf.__Context_.BeanProperty.get(t, e);
return n ? n.properties.get(i) : null;
};
})(gameframe || (gameframe = {}));
(function(t) {
var e = function() {
function t() {
this.eventMap = new Map();
this.pendingAddMap = new Map();
this.pendingRemoveMap = new Map();
this.dispatchDepth = 0;
}
t.prototype.dispatch = function(t, e) {
for (var i, n, o, r, s = this, a = [], l = 2; l < arguments.length; l++) a[l - 2] = arguments[l];
if (this.eventMap.has(t)) {
this.dispatchDepth++;
try {
for (var h = this.eventMap.get(t), c = 0; c < h.length; c++) (y = h[c]).apply(void 0, __spreadArray([ e ], __read(a), !1));
} catch (t) {
console.error(t);
} finally {
this.dispatchDepth--;
}
if (0 == this.dispatchDepth) {
if (this.pendingAddMap.size > 0) {
this.pendingAddMap.forEach(function(t, e) {
var i, n;
try {
for (var o = __values(t), r = o.next(); !r.done; r = o.next()) {
var a = r.value;
s.addListener(s.eventMap, e, a);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
});
this.pendingAddMap.clear();
}
if (this.pendingRemoveMap.size > 0) {
try {
for (var u = __values(this.pendingRemoveMap), p = u.next(); !p.done; p = u.next()) {
var d = p.value, f = d[0];
try {
for (var _ = (o = void 0, __values(d[1])), g = _.next(); !g.done; g = _.next()) {
var y = g.value;
this.removeListener(this.eventMap, f, y);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
g && !g.done && (r = _.return) && r.call(_);
} finally {
if (o) throw o.error;
}
}
}
} catch (t) {
i = {
error: t
};
} finally {
try {
p && !p.done && (n = u.return) && n.call(u);
} finally {
if (i) throw i.error;
}
}
this.pendingRemoveMap.clear();
}
}
}
};
t.prototype.register = function(t, e) {
this.dispatchDepth > 0 ? this.addListener(this.pendingAddMap, t, e) : this.addListener(this.eventMap, t, e);
};
t.prototype.unregister = function(t, e) {
this.dispatchDepth > 0 ? this.addListener(this.pendingRemoveMap, t, e) : this.removeListener(this.eventMap, t, e);
};
t.prototype.addListener = function(t, e, i) {
if (t.has(e)) t.get(e).push(i); else {
var n = new Array();
n.push(i);
t.set(e, n);
}
};
t.prototype.removeListener = function(t, e, i) {
if (t.has(e)) {
var n = t.get(e), o = n.indexOf(i, 0);
if (o > -1) {
n.splice(o, 1);
0 == n.length && t.delete(e);
}
}
};
return t;
}();
t.Dispatcher = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e, i = __inner_gf.__Context_.TypeRegistry, n = __inner_gf.__Context_.ImplRegistry, o = __inner_gf.__Context_.BeanProperty;
(function(t) {
t[t.BeanCreate = 0] = "BeanCreate";
t[t.BeanDestory = 1] = "BeanDestory";
t[t.ContextInit = 2] = "ContextInit";
t[t.ContextDestory = 3] = "ContextDestory";
})(e = t.ContextEvent || (t.ContextEvent = {}));
var r = function() {
function r(e, o, r) {
void 0 === o && (o = t.App.inst.dispatcher);
void 0 === r && (r = null);
this.typeRegistry = new i();
this.implRegistry = new n();
this.entry = null;
this.beans = new Map();
this._name = e;
this.parent = r;
this.dispatcher = o;
}
r.removeBean = function(t) {
var e = o.get(null, t.constructor);
e && e.ctx && e.ctx.destroyBean(t);
};
r.removeObject = function(t) {
var e = o.get(null, t.constructor);
e && e.ctx && e.ctx.destroyObject(t);
};
r.fromBean = function(t) {
var e = o.get(null, t.constructor);
return null == e ? void 0 : e.ctx;
};
r.prototype.isAutoCreate = function(t) {
var e = this.implRegistry.getImpl(t), i = this.typeRegistry.getClassByName(e);
return o.get(this, i).autoCreate;
};
r.prototype.init = function(t) {
var i, n, o, r, s;
void 0 === t && (t = !0);
try {
for (var a = __values(this.implRegistry.getAllIntf()), l = a.next(); !l.done; l = a.next()) {
var h = l.value;
(null === (s = this.parent) || void 0 === s ? void 0 : s.getBeanByName(h, !1)) && this.getBeanByName(h);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
l && !l.done && (n = a.return) && n.call(a);
} finally {
if (i) throw i.error;
}
}
try {
for (var c = __values(this.implRegistry.getAllIntf()), u = c.next(); !u.done; u = c.next()) {
h = u.value;
if (this.isAutoCreate(h)) {
this.getBeanByName(h);
console.log("[Context]auto create bean:".concat(h));
}
}
} catch (t) {
o = {
error: t
};
} finally {
try {
u && !u.done && (r = c.return) && r.call(c);
} finally {
if (o) throw o.error;
}
}
console.log("context " + this.name + " inited");
this.dispatcher.dispatch(e.ContextInit, {
intf: null,
bean: null,
ctx: this
});
this.entry && t && this.getBean(this.entry);
};
r.prototype.reload = function() {
if (this.entry) {
var t = this.getBean(this.entry), e = o.get(this, t.constructor);
e && e.initializer && e.initializer.call(t, this);
}
};
Object.defineProperty(r.prototype, "name", {
get: function() {
return this._name;
},
enumerable: !1,
configurable: !0
});
r.prototype.destroy = function() {
this.parent = null;
for (;this.beans.size > 0; ) {
var t = this.beans.entries().next().value, i = t[0], n = this.beans.size;
this.destroyBean(t[1]);
n === this.beans.size && this.beans.delete(i);
}
this.beans.clear();
this.dispatcher.dispatch(e.ContextDestory, {
intf: null,
bean: null,
ctx: this
});
};
r.prototype.getClassByName = function(t) {
var e;
return this.typeRegistry.getClassByName(t) || (null === (e = this.parent) || void 0 === e ? void 0 : e.getClassByName(t));
};
r.prototype.getBean = function(t, e) {
void 0 === e && (e = !0);
var n = i.getClassName(t);
return this.getBeanByName(n);
};
r.prototype.getBeanName = function(t) {
var e, n = i.getClassName(t), r = o.get(null, t);
r && r.ctx && (n = null !== (e = r.ctx.implRegistry.getIntf(n)) && void 0 !== e ? e : n);
return n;
};
r.prototype.getBeanByName = function(t, e) {
var i;
void 0 === e && (e = !0);
if (this.beans.has(t)) return this.beans.get(t);
if (e) {
var n = this.implRegistry.getImpl(t);
if (n) {
var r = this.typeRegistry.getClassByName(n), s = o.get(this, r).creator();
this.beans.set(t, s);
this.initBean(s, t);
return s;
}
}
return null === (i = this.parent) || void 0 === i ? void 0 : i.getBeanByName(t, e);
};
r.prototype.createAsObjectByName = function(t) {
var i, n = this.implRegistry.getImpl(t);
if (n) {
var r = this.typeRegistry.getClassByName(n), s = o.get(this, r), a = s.creator();
this.initObject(a, s);
this.dispatcher.dispatch(e.BeanCreate, {
intf: t,
bean: a,
ctx: this
});
return a;
}
return null === (i = this.parent) || void 0 === i ? void 0 : i.createAsObjectByName(t);
};
r.prototype.hasBean = function(t) {
var e = i.getClassName(t), n = this.implRegistry.getIntf(e);
return !(!n || !this.beans.has(n) && this.beans.get(n) != t);
};
r.prototype.initBean = function(t, i) {
var n, s = null === (n = this.parent) || void 0 === n ? void 0 : n.getBeanByName(i, !1);
s && r.removeBean(s);
var a = o.get(this, t.constructor);
this.initObject(t, a);
this.dispatcher.dispatch(e.BeanCreate, {
intf: i,
bean: t,
ctx: this
});
};
r.prototype.initObject = function(t, e) {
var i, n;
if (e && e.autoAwares.length > 0) try {
for (var o = __values(e.autoAwares), r = o.next(); !r.done; r = o.next()) (0, r.value)(t);
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
e && e.initializer && e.initializer.call(t, this);
};
r.prototype.destroyBean = function(n) {
var r, s, a = i.getClassName(n), l = this.implRegistry.getIntf(a);
if (l || !t.DEBUG()) {
if (this.beans.has(l) && this.beans.get(l) === n) {
this.dispatcher.dispatch(e.BeanDestory, {
intf: l,
bean: n,
ctx: this
});
this.beans.delete(l);
var h = o.get(null, n.constructor);
h && h.destroyer && h.destroyer.bind(n)(this);
if (h && h.unwired.length > 0) try {
for (var c = __values(h.unwired), u = c.next(); !u.done; u = c.next()) (0, u.value)(n);
} catch (t) {
r = {
error: t
};
} finally {
try {
u && !u.done && (s = c.return) && s.call(c);
} finally {
if (r) throw r.error;
}
}
n.unscheduleAllCallbacks();
} else if (t.DEBUG()) {
console.warn("[Context](".concat(this.name, ") cannot destory bean:").concat(a, ", not in context"));
return;
}
} else console.warn("[Context](".concat(this.name, ") cannot destory bean:").concat(a));
};
r.prototype.destroyObject = function(n) {
var r, s, a = i.getClassName(n), l = this.implRegistry.getIntf(a);
l || t.DEBUG() && console.warn("[Context](".concat(this.name, ") cannot destory bean:").concat(a));
this.dispatcher.dispatch(e.BeanDestory, {
intf: null != l ? l : a,
bean: n,
ctx: this
});
var h = o.get(null, n.constructor);
h && h.destroyer && h.destroyer.bind(n)(this);
if (h && h.unwired.length > 0) try {
for (var c = __values(h.unwired), u = c.next(); !u.done; u = c.next()) (0, u.value)(n);
} catch (t) {
r = {
error: t
};
} finally {
try {
u && !u.done && (s = c.return) && s.call(c);
} finally {
if (r) throw r.error;
}
}
n.unscheduleAllCallbacks();
};
return r;
}();
t.Context = r;
t.BeanMeta = o;
})(gameframe || (gameframe = {}));
(function(gameframe) {
var appAdaptor = __inner_gf.adaptor.AppAdaptor, gfmodules = new Map([ [ "gameframe", gameframe ], [ "gflianyunfgui", fgui ] ]), expandModules = function() {
var t, e;
try {
for (var i = __values(gfmodules), n = i.next(); !n.done; n = i.next()) {
var o = n.value;
window[o[0]] = o[1];
}
} catch (e) {
t = {
error: e
};
} finally {
try {
n && !n.done && (e = i.return) && e.call(i);
} finally {
if (t) throw t.error;
}
}
};
function AddModule(t, e) {
gfmodules.set(t, e);
}
gameframe.AddModule = AddModule;
function RemoveModule(t) {
gfmodules.delete(t);
}
gameframe.RemoveModule = RemoveModule;
var App = function() {
function App() {
this._dispatcher = new gameframe.Dispatcher();
this._baseConstex = new gameframe.Context("RootCtx", this._dispatcher);
this._gloablContext = this._baseConstex;
this._secretKey = null;
this._root = null;
this._allContex = new Map();
this._creatorResolver = function(t) {
return t;
};
this._loadJsDirectory = appAdaptor.LoadJsDirectory;
this._checkUpdate = function(t, e, i) {
i(!0);
};
}
Object.defineProperty(App.prototype, "root", {
get: function() {
return this._root ? this._root : fgui.GRoot.inst;
},
enumerable: !1,
configurable: !0
});
App.prototype.setRoot = function(t) {
this._root = null;
console.log("setRoot", t);
t && (this._root = __inner_gf.adaptor.castToGObject(t));
};
Object.defineProperty(App, "inst", {
get: function() {
return this._inst;
},
enumerable: !1,
configurable: !0
});
App.prototype.setSecretKey = function(t) {
this._secretKey = t;
};
Object.defineProperty(App.prototype, "baseContext", {
get: function() {
return this._baseConstex;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(App.prototype, "context", {
get: function() {
return this._gloablContext;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(App.prototype, "dispatcher", {
get: function() {
return this._dispatcher;
},
enumerable: !1,
configurable: !0
});
App.prototype.prepareContext = function(t, e) {
return this._prepareContext(t, e, null);
};
App.prototype.prepareContextWithProcessCallback = function(t, e, i) {
return this._prepareContext(t, i, e);
};
App.prototype.loadContextWithCallback = function(t, e) {
return this._loadContext(t, e);
};
App.prototype.popContext = function(t) {
return this._popContext(t);
};
App.prototype.popAllContext = function(t) {
for (;this._gloablContext && this._gloablContext != this._baseConstex; ) this._popContext();
t && this._allContex.clear();
};
App.prototype.hasContext = function(t) {
return this.hasInUseContext(t);
};
App.prototype._loadContext = function(t, e, i) {
void 0 === i && (i = !1);
if (this._allContex.has(t)) {
var n = this._allContex.get(t);
if (n.parent) {
n.reload.call(n);
e && e(n);
return;
}
n.parent = this._gloablContext;
this._gloablContext = n;
n.init.call(n, i);
e && e(n);
return n;
}
var o = new gameframe.Context(t, this._dispatcher, this._gloablContext);
this._allContex.set(t, o);
this._gloablContext = o;
this.loadContextJs(t, function() {
o.init.call(o, i);
e && e(o);
});
};
Object.defineProperty(App.prototype, "creatorResolver", {
set: function(t) {
t ? this._creatorResolver = t : this.creatorResolver = function(t) {
return t;
};
},
enumerable: !1,
configurable: !0
});
App.prototype.loadContextJs = function(name, callback) {
var files;
files = -1 !== name.indexOf(";") ? name.split(";") : [ name ];
for (var self = this, f = callback, assetPlugin = App.inst._baseConstex.getBean(gameframe.IAssetPlugin), _loop_1 = function(i) {
var file = files[i], next = f;
f = function() {
console.log("loadJavaScript: " + file);
var module = file;
if (file.startsWith("@") && file.indexOf("/") > 0) {
var substr = file.split("/", 2);
module = substr[0].slice(1);
file = substr[1];
}
var creatorName = "create" + self._creatorResolver(file);
console.log("creator ".concat(creatorName));
if (__inner_gf.adaptor.sys.isWeiXin) {
expandModules();
var creater_1 = window[creatorName];
if (creater_1) {
console.log("loadJavaScript  create:" + file);
creater_1();
next();
} else self._loadJsDirectory(assetPlugin.resloveModule(module), file, function() {
expandModules();
(creater_1 = window[creatorName])();
next();
});
} else if (__inner_gf.adaptor.sys.isEvalScript) assetPlugin.getBundle(module).then(function() {
var creater = window[creatorName];
if (creater) {
expandModules();
creater();
next();
} else assetPlugin.loadScript(module, file).then(function(result) {
if (result) {
console.log("loadJavaScript:" + file + "  v:" + gameframe.Verson);
if (self._secretKey && "" != self._secretKey) {
var CryptoJS = window.CryptoJS, bytes = CryptoJS.AES.decrypt(result, self._secretKey);
result = bytes.toString(CryptoJS.enc.Utf8);
}
expandModules();
eval(result);
creater = window[creatorName];
creater();
next();
} else console.log("loadJavaScript failed " + file + " result:" + result);
}).catch(function(t) {
console.error("loadJavaScript failed " + file, t);
console.error(t.stack);
});
}); else {
var creater_2 = window[creatorName];
if (creater_2) {
expandModules();
creater_2();
next();
} else self._loadJsDirectory(assetPlugin.resloveModule(module), file, function() {
expandModules();
(creater_2 = window[creatorName])();
next();
});
}
};
}, i = files.length - 1; i >= 0; i--) _loop_1(i);
f();
};
Object.defineProperty(App.prototype, "checkUpdate", {
set: function(t) {
t ? this._checkUpdate = t : t = function(t, e, i) {
i(!0);
};
},
enumerable: !1,
configurable: !0
});
App.prototype.prepareContextResource = function(t, e) {
var i = this;
return new Promise(function(n) {
if (e && e.length > 0) {
var o;
o = -1 !== e.indexOf(";") ? e.split(";") : [ e ];
for (var r = App.inst._baseConstex.getBean(gameframe.IAssetPlugin), s = 0; s < o.length; s++) o[s] = r.resloveModule(o[s]);
var a = null;
i._checkUpdate(t, o, function(e) {
if (null != a) {
a.onComplete("UpdateResource", !0);
a = null;
}
e ? appAdaptor.PrepareResource(t, o, function(e) {
console.log("prepareContextResource finished:" + t);
n(e);
}) : n(!1);
}, function(t, e) {
null == a ? null == (a = gameframe.App.inst.context.getBeanByName("WaitingImpl")) || a.setTask({
name: "UpdateResource",
tip: "资源加载中。。。"
}) : a.onProgress("UpdateResource", e);
});
} else n(!0);
});
};
App.prototype._prepareContext = function(t, e, i) {
var n = this, o = this;
return new Promise(function(r, s) {
var a = function() {
console.log("_prepareContext->funcPrepareContext:" + t);
n._loadContext(e, function(t) {
r(t);
}, !0);
};
if (null != e && "" != e) {
var l = null, h = null, c = null;
if (i) {
if (i.onStartDownload) {
l = function(e, n) {
e == t && i.onStartDownload(n);
};
appAdaptor.AddUpdatorStartDownloadListner(l);
}
if (i.onProgress) {
h = function(e, n) {
e == t && i.onProgress(n);
};
appAdaptor.AddUpdatorProgressEventListner(h);
}
if (i.onComplete) {
c = function(e, n) {
e == t && i.onComplete(n);
};
appAdaptor.AddUpdatorCompletionEventListner(c);
}
}
o.prepareContextResource(t, e).then(function(t) {
if (t) {
l && appAdaptor.RemoveUpdatorStartDownloadListner(l);
h && appAdaptor.RemoveUpdatorProgressEventListner(h);
c && appAdaptor.RemoveUpdatorCompletionEventListner(c);
a();
} else s("failed to prepare resource!");
});
} else {
if (i) {
i.onProgress && i.onProgress(1);
i.onComplete && i.onComplete(!0);
}
a();
}
});
};
App.prototype.hasInUseContext = function(t) {
var e = this._allContex.get(t);
return !(!e || !e.parent);
};
App.prototype.pushContext = function(t) {
var e = new gameframe.Context(t, this._dispatcher, this._gloablContext);
this._allContex.set(t, e);
this._gloablContext = e;
};
App.prototype._popContext = function(t) {
if (!this._gloablContext || this._gloablContext == this._baseConstex) return null;
var e = this._gloablContext, i = e.parent;
this._gloablContext = i;
e.destroy.call(e);
t && this._allContex.delete(e.name);
return e;
};
App.UpdateSettings = function() {
appAdaptor.UpdateSettings();
};
App.addUpdatorStartDownload = function(t) {
appAdaptor.addUpdatorStartDownload(t);
};
App.addUpdatorProgressEvent = function(t) {
appAdaptor.addUpdatorProgressEvent(t);
};
App.addUpdatorCompletionEvent = function(t) {
appAdaptor.addUpdatorCompletionEvent(t);
};
App.removeUpdatorStartDownload = function(t) {
appAdaptor.removeUpdatorStartDownload(t);
};
App.removeUpdatorProgressEvent = function(t) {
appAdaptor.removeUpdatorProgressEvent(t);
};
App.removeUpdatorCompletionEvent = function(t) {
appAdaptor.removeUpdatorCompletionEvent(t);
};
App.showDebugInfo = function(t) {
appAdaptor.showDebugInfo(t);
};
App.Quit = function(t) {
void 0 === t && (t = 0);
appAdaptor.Quit(t);
};
App._inst = new App();
return App;
}();
gameframe.App = App;
})(gameframe || (gameframe = {}));
(function(t) {
var e = __inner_gf.__Context_.TypeRegistry, i = function() {
function i() {
this._schedule = {};
this.__dispatcher = null;
this._selfActive = !0;
}
Object.defineProperty(i.prototype, "name", {
get: function() {
return e.getClassName(this);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selfActive", {
get: function() {
return this._selfActive;
},
set: function(t) {
this._selfActive = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "ctx", {
get: function() {
return t.Context.fromBean(this);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "isBean", {
get: function() {
var t;
return null === (t = this.ctx) || void 0 === t ? void 0 : t.hasBean(this);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "isObject", {
get: function() {
return !this.isBean;
},
enumerable: !1,
configurable: !0
});
i.prototype.getImpl = function(e) {
var i = t.App.inst.context.getBean(e);
t.DEBUG() && null == i && console.warn("getImpl interface ".concat(e.name, " not implement"));
return i;
};
Object.defineProperty(i.prototype, "curdispatcher", {
get: function() {
if (this.__dispatcher) return this.__dispatcher;
this.__dispatcher = this.getPlugin(t.IEventDispatcher);
return this.__dispatcher;
},
enumerable: !1,
configurable: !0
});
i.prototype.dispatchEvent = function(t) {
this.curdispatcher.dispatchEvent(t);
};
i.prototype.dispatch = function(t, e) {
for (var i, n = [], o = 2; o < arguments.length; o++) n[o - 2] = arguments[o];
(i = this.curdispatcher).dispatch.apply(i, __spreadArray([ t, e ], __read(n), !1));
};
i.prototype.getPlugin = function(e) {
return t.App.inst.baseContext.getBean(e);
};
i.prototype.schedule = function(e, i, n, o) {
void 0 === n && (n = t.macro.REPEAT_FORERER);
void 0 === o && (o = 0);
var r = __inner_gf.adaptor.director.getScheduler();
__inner_gf.adaptor.enableForTarget(this._schedule);
r.schedule(e, this._schedule, i, n, o, !1);
};
i.prototype.scheduleOnce = function(t, e) {
void 0 === e && (e = 0);
this.schedule(t, 0, 0, e);
};
i.prototype.unschedule = function(t) {
t && __inner_gf.adaptor.isTargetEnabled(this._schedule) && __inner_gf.adaptor.director.getScheduler().unschedule(t, this._schedule);
};
i.prototype.unscheduleAllCallbacks = function() {
__inner_gf.adaptor.isTargetEnabled(this._schedule) && __inner_gf.adaptor.director.getScheduler().unscheduleAllForTarget(this._schedule);
};
return i;
}();
t.Bean = i;
})(gameframe || (gameframe = {}));
(function(t) {
var e = __inner_gf.__Context_.BeanProperty, i = __inner_gf.__Context_.TypeRegistry, n = 1;
function o() {
return "__anonymous-class-" + n++ + "_";
}
t.register = function(e) {
var i = t.App.inst.context;
e = null != e ? e : o();
return function(t) {
i.typeRegistry.registerClass(t, e);
};
};
t.bean = function(i, n, r) {
var s = t.App.inst.context;
n = null != n ? n : o();
r = null != r && r;
return function(o) {
var a = s.typeRegistry, l = s.implRegistry;
if (i && i !== o) {
var h = a.registerClass(i, n), c = "__" + n + "-imply__", u = a.registerClass(o, c);
l.regImpl(u, h);
} else {
u = a.registerClass(o, n);
l.regImpl(u, u);
}
if (r) {
var p = e.get(t.App.inst.context, o);
p && (p.autoCreate = !0);
}
};
};
t.plugin = function(e) {
var i = t.App.inst.baseContext;
return function(t) {
var n = i.typeRegistry, r = i.implRegistry, s = o(), a = o(), l = n.registerClass(t, a), h = n.registerClass(e, s);
r.regImpl(l, h);
};
};
t.init = function(i, n, o) {
var r = i.constructor, s = e.get(t.App.inst.context, r);
s && (s.initializer = o.value);
};
t.destroy = function(i, n, o) {
var r = i.constructor, s = e.get(t.App.inst.context, r);
s && (s.destroyer = o.value);
};
t.aware = function(n) {
var o = t.App.inst.context;
return function(t, r) {
var s = t.constructor || t, a = e.get(o, s);
a && a.autoAwares.push(function(t) {
var e;
(e = "string" != typeof n ? o.getBean(n) : o.getBeanByName(n)) || console.error("failed to aware target:".concat(n, " for ").concat(i.getClassName(s)));
t[r] = e;
});
};
};
t.entry = function(e) {
var i = t.App.inst.context, n = i.typeRegistry, o = i.implRegistry, r = "__" + i.name + "-entry__", s = n.registerClass(e, r);
o.regImpl(s, s);
i.entry = e;
};
})(gameframe || (gameframe = {}));
(function(t) {
function e(e) {
return t.ScriptComponent.fromGo(e);
}
t.castGameObject = e;
t.castToGameObject = function(t) {
return null == t ? void 0 : t.node;
};
t.addComponent = function(t, i) {
var n = e(t);
return null == n ? void 0 : n.addComponent(i);
};
t.addBeanComponent = function(e, i) {
return t.ScriptComponent.fromGo(e).addBeanComponent(i);
};
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
Object.defineProperty(e.prototype, "node", {
get: function() {
return this._node;
},
set: function(t) {
this._node = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "name", {
get: function() {
return this.node.name;
},
set: function(t) {
this.node.name = t;
},
enumerable: !1,
configurable: !0
});
e.prototype.onLoad = function() {};
return e;
}(t.Bean);
t.Component = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = __inner_gf.__Context_.TypeRegistry, i = function() {
function i() {
this.components = new Map();
this.pendingComponents = new Array();
this.loaded = !1;
}
i.prototype.printInfo = function() {
var t, e, i = "";
try {
for (var n = __values(this.components), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
if ("ScriptComponent" != r[0]) {
"" != i && (i += ",");
i += r[0];
}
}
} catch (e) {
t = {
error: e
};
} finally {
try {
o && !o.done && (e = n.return) && e.call(n);
} finally {
if (t) throw t.error;
}
}
return i;
};
i.prototype.onLoad = function() {
var t, e;
this.loaded = !0;
var i = this.pendingComponents;
this.pendingComponents = new Array();
try {
for (var n = __values(i), o = n.next(); !o.done; o = n.next()) o.value.onLoad();
} catch (e) {
t = {
error: e
};
} finally {
try {
o && !o.done && (e = n.return) && e.call(n);
} finally {
if (t) throw t.error;
}
}
};
i.prototype.onEnable = function() {
var t, e;
try {
for (var i = __values(this.components), n = i.next(); !n.done; n = i.next()) {
var o = n.value;
"onEnable" in o && o.onEnable();
}
} catch (e) {
t = {
error: e
};
} finally {
try {
n && !n.done && (e = i.return) && e.call(i);
} finally {
if (t) throw t.error;
}
}
};
i.prototype.dispose = function() {
var t = __inner_gf.adaptor.NodeHelpper.getGObject(this.node);
t ? t.dispose() : __inner_gf.adaptor.NodeHelpper.removeFromParent(this.node);
};
i.prototype.onDestroy = function() {
var t, e, i = this.components;
this.components = new Map();
try {
for (var n = __values(i), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
"onDispose" in r[1] && r[1].onDispose();
}
} catch (e) {
t = {
error: e
};
} finally {
try {
o && !o.done && (e = n.return) && e.call(n);
} finally {
if (t) throw t.error;
}
}
};
i.prototype.getGFComponent = function(t) {
var i = "string" == typeof t ? t : e.getClassName(t);
return this.components.has(i) ? this.components.get(i) : null;
};
i.prototype.insertComponent = function(t) {
var i = e.getClassName(t);
this.components.set(i, t);
t.node = this.node;
this.loaded ? t.onLoad() : this.pendingComponents.push(t);
};
i.prototype.addBeanComponent = function(i) {
var n = "string" == typeof i ? i : e.getClassName(i);
if (this.components.has(n)) return this.components.get(n);
var o = t.App.inst.context.getBeanByName(n);
this.components.set(n, o);
o.node = this.node;
this.loaded ? o.onLoad() : this.pendingComponents.push(o);
return o;
};
i.prototype.addComponent = function(i) {
var n = "string" == typeof i ? i : e.getClassName(i);
if (this.components.has(n)) return this.components.get(n);
var o = new (t.App.inst.context.getClassByName(n))();
this.components.set(n, o);
o.node = this.node;
this.loaded ? o.onLoad() : this.pendingComponents.push(o);
return o;
};
i.schedule = function(t, e, i, n) {
__inner_gf.adaptor.director.getScheduler().schedule(t, this, e, i, n, !1);
};
i.unscheduleAllCallbacks = function() {
this._id && __inner_gf.adaptor.director.getScheduler().unscheduleAllForTarget(this);
};
i.fromGo = function(e) {
var n = __inner_gf.adaptor.getScriptComponent(e);
if (null == n) {
t.DEBUG() && console.log("addBeanComponent ScriptComponent1:" + (e.$gobj ? e.$gobj.name : e.name));
var o = new i();
o.node = e;
__inner_gf.adaptor.addScriptComponentToNode(o, e);
return o;
}
return n;
};
return i;
}();
t.ScriptComponent = i;
t.cast = i.fromGo;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.IAssetPlugin = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = gameframe.App.inst, n = function(e) {
__extends(n, e);
function n() {
var t = null !== e && e.apply(this, arguments) || this;
t._isSplitFolder = !0;
t.uiDir = "fgui/";
t.moduleResolver = function(t) {
return t;
};
t.configDir = "config/";
t.assetDir = "res/";
t.scriptDir = "jsresources/";
return t;
}
n.prototype.setModuleResolver = function(t) {
this.moduleResolver = t || function(t) {
return t;
};
};
n.prototype.setSplitFolder = function(t) {
this._isSplitFolder = t;
};
n.prototype.loadFguiAsync = function(t, e, i, n) {
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function(o) {
switch (o.label) {
case 0:
return [ 4, this.loadFguiPackageAsync(t, e, n) ];

case 1:
o.sent();
return [ 4, this.createFguiObj(t, e[e.length - 1], i) ];

case 2:
return [ 2, o.sent() ];
}
});
});
};
n.prototype.buildFguiResPath = function(t, e) {
return {
bundleName: this.moduleResolver(t),
url: "".concat(this.uiDir).concat(e)
};
};
n.prototype.loadFguiPackageAsync = function(e, i, n) {
var o = this;
return new Promise(function(r, s) {
var a, l, h, c, u, p, d = new Array();
if (n && n.length > 0) try {
for (var f = __values(n), _ = f.next(); !_.done; _ = f.next()) {
var g = _.value;
d.push(o.buildFguiResPath(g.module, g.pkg));
}
} catch (t) {
a = {
error: t
};
} finally {
try {
_ && !_.done && (l = f.return) && l.call(f);
} finally {
if (a) throw a.error;
}
}
try {
for (var y = __values(i), m = y.next(); !m.done; m = y.next()) {
var v = m.value;
d.push(o.buildFguiResPath(e, v));
}
} catch (t) {
h = {
error: t
};
} finally {
try {
m && !m.done && (c = y.return) && c.call(y);
} finally {
if (h) throw h.error;
}
}
var b = o.checkLoadFgui(d);
if (b.length > 0) {
var w = b.length, C = function(e) {
try {
t.adaptor.FariyGUIExt.addPackage(e, function(t) {
t ? --w <= 0 && r(!0) : s(e.url);
});
} catch (t) {
console.error("[AssetTool] loadFguiAsync ".concat(e.url, " failed. ").concat(t));
s(e.url);
return {
value: void 0
};
}
};
try {
for (var S = __values(b), x = S.next(); !x.done; x = S.next()) {
var P = C(x.value);
if ("object" == typeof P) return P.value;
}
} catch (t) {
u = {
error: t
};
} finally {
try {
x && !x.done && (p = S.return) && p.call(S);
} finally {
if (u) throw u.error;
}
}
} else r(!0);
});
};
n.prototype.checkLoadFgui = function(e) {
if (!(null == e ? void 0 : e.length)) {
console.error("pkgUrls is null");
return [];
}
for (var i = [], n = 0; n < e.length; n++) t.adaptor.FariyGUIExt.getUIPackage(e[n]) || i.push(e[n]);
return i;
};
n.prototype.createFguiObj = function(e, n, o) {
var r = this;
return new Promise(function(s, a) {
t.adaptor.FariyGUIExt.createObject(r.buildFguiResPath(e, n), o, function(e) {
if (e) {
e.name = o;
t.adaptor.NodeHelpper.setName(t.adaptor.FariyGUIExt.castGObjectToGameObject(e), o);
if (e.width == (fgui.GRoot.designWidth || 1920) && e.height == (fgui.GRoot.designHeight || 1080)) {
gameframe.FGUI.addRelation(e, i.root, fgui.RelationType.Size);
gameframe.FGUI.addRelation(e, i.root, fgui.RelationType.Center_Center);
gameframe.FGUI.makeFullScreen(e);
}
s(e.asCom);
} else {
console.warn("fgui create fail!pkgUrl:" + n + "resName:" + o);
a();
}
});
});
};
n.prototype.toName = function(t, e, i) {
return "".concat(this.moduleResolver(t), "/").concat(e).concat(i);
};
n.prototype.loadConfig = function(e, i) {
var n = {
bundleName: this.moduleResolver(e),
url: "".concat(this.configDir).concat(i)
};
return new Promise(function(e) {
t.adaptor.ResourceLoader.LoadText(n, function(t) {
e(t);
});
});
};
n.prototype.loadConfigJson = function(e, i) {
var n = {
bundleName: this.moduleResolver(e),
url: "".concat(this.configDir).concat(i)
};
return new Promise(function(e) {
t.adaptor.ResourceLoader.LoadText(n, function(i) {
e(i ? t.adaptor.ResourceLoader.ParseJson(i) : null);
});
});
};
n.prototype.loadAsset = function(e, i, n) {
var o = {
bundleName: this.moduleResolver(e),
url: "".concat(this.assetDir).concat(i)
};
return new Promise(function(e) {
t.adaptor.ResourceLoader.LoadAsset(o, n, function(t) {
e(t || null);
});
});
};
n.prototype.preloadAsset = function(e, i, n) {
var o = {
bundleName: this.moduleResolver(e),
url: "".concat(this.assetDir).concat(i)
};
t.adaptor.ResourceLoader.PreloadAsset(o, n);
};
n.prototype.loadScript = function(e, i) {
var n = {
bundleName: this.moduleResolver(e),
url: "".concat(this.scriptDir).concat(i, ".mjs")
};
return new Promise(function(e) {
t.adaptor.ResourceLoader.LoadText(n, function(t) {
e(t || null);
});
});
};
n.prototype.resolveWeixinScriptPath = function(t, e) {
t.startsWith("game") || (t = "lobby");
return this.toName(t, "", "".concat(e, ".js"));
};
n.prototype.resloveModule = function(t) {
return this.moduleResolver(t);
};
n.prototype.getBundle = function(e) {
var i = {
bundleName: this.moduleResolver(e),
url: ""
};
return new Promise(function(e) {
t.adaptor.ResourceLoader.getBundle(i, function(t) {
e(t || null);
});
});
};
n.prototype.unLoadBundle = function(e) {
var i = this.moduleResolver(e);
console.log("unLoadBundle:" + e);
this.getPlugin(gameframe.IViewPlugin).clearFguiCacheByModule(e);
t.adaptor.FariyGUIExt.unloadPackageByBundle(i);
t.adaptor.ResourceLoader.UnloadBundle(i);
this.getPlugin(gameframe.ISound).ClearByBundle(i);
};
n.prototype.loadRemote = function(e) {
return new Promise(function(i) {
t.adaptor.ResourceLoader.loadRemote(e, function(t) {
i(t || null);
});
});
};
return __decorate([ gameframe.plugin(gameframe.IAssetPlugin) ], n);
}(gameframe.IAssetPlugin);
e.AssetPluginImpl = n;
})(t.__Plugin_ASSET_ || (t.__Plugin_ASSET_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.IConfig = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.IHttp = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._configCache = new Map();
t._remoteConfigPath = "";
return t;
}
i.prototype.init = function() {
var e = t.adaptor.cdnUrl;
e.endsWith("/") || (e += "/");
this._remoteConfigPath = e + "config/";
gameframe.DEBUG() && console.log("IConfig cdnUrl:" + this._remoteConfigPath);
};
i.prototype.setCdnUrl = function(t) {
var e = t;
e.endsWith("/") || (e += "/");
this._remoteConfigPath = e + "config/";
};
i.prototype.getConfig = function(t, e) {
var i = "".concat(t, "-").concat(e);
if (this._configCache.has(i)) {
var n = this._configCache.get(i);
return n.isLoading ? n.lodingPromise : new Promise(function(t) {
t(n.config);
});
}
var o = this.isRemote(e) ? this.loadRemoteConfig(this.remoteToUrl(t, e), e) : this.loadLocalConfig(t, e), r = {
config: null,
isLoading: !0,
lodingPromise: null
};
r.lodingPromise = o.then(function(t) {
r.config = t;
r.isLoading = !1;
r.lodingPromise = null;
return t;
});
this._configCache.set(i, r);
return r.lodingPromise;
};
i.prototype.reloadConfig = function(t, e) {
var i = "".concat(t, "-").concat(e);
if (this._configCache.has(i)) {
var n = this._configCache.get(i);
if (n.isLoading) return n.lodingPromise;
this._configCache.delete(i);
}
return this.getConfig(t, e);
};
i.prototype.toRemote = function(t) {
return "remote://" + t;
};
i.prototype.isRemote = function(t) {
return t.startsWith("remote://");
};
i.prototype.remoteToUrl = function(t, e) {
return this._remoteConfigPath + t + "/" + e.substring("remote://".length);
};
i.prototype.loadRemoteConfig = function(t, e) {
var i = this;
return new Promise(function(n) {
i._http.httpReq("get", t, t, function(o) {
var r = o.response;
if (r) {
var s = null;
try {
s = JSON.parse(r);
} catch (t) {
console.error("JSON parse Error:" + e);
}
if (s) {
gameframe.LocalStorage.setString(e, r);
n(JSON.parse(r));
return;
}
}
var a = gameframe.LocalStorage.getString(e);
n("" != a ? JSON.parse(a) : null);
i._configCache.has(t) && i._configCache.delete(t);
});
});
};
i.prototype.loadLocalConfig = function(t, e) {
return this._assetPlugin.loadConfigJson(t, e);
};
__decorate([ gameframe.aware(gameframe.IAssetPlugin) ], i.prototype, "_assetPlugin", void 0);
__decorate([ gameframe.aware(gameframe.IHttp) ], i.prototype, "_http", void 0);
__decorate([ gameframe.init ], i.prototype, "init", null);
return __decorate([ gameframe.plugin(gameframe.IConfig) ], i);
}(gameframe.IConfig);
e.ConfigPluginImpl = i;
})(t.__Plugin_ASSET_ || (t.__Plugin_ASSET_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = window.wx && window.wx.getFileSystemManager ? window.wx.getFileSystemManager() : null, i = window.wx && window.wx.getFileSystemManager ? window.wx : null, n = function() {
function t() {}
t.init = function() {
if (!t.isInit && window.wx) {
t.isInit = !0;
t.cacheDir = i.env.USER_DATA_PATH + "/" + t.cacheDir;
t.cacheFilePath = t.cacheDir + "/" + t.cachedFileName;
var n = t.readJsonSync(t.cacheFilePath);
if (n instanceof Error || !n) {
if (!(n instanceof Error)) try {
e.rmdirSync(t.cacheDir, !0);
} catch (t) {}
t.cachedFiles = {};
try {
e.mkdirSync(t.cacheDir);
} catch (t) {}
t.writeFileSync(t.cacheFilePath, JSON.stringify(t.cachedFiles), "utf8");
} else t.cachedFiles = n;
}
};
t.cacheFile = function(e, i) {
t.cachedFiles[e] = i;
t.writeFileSync(t.cacheFilePath, JSON.stringify(t.cachedFiles), "utf8");
};
t.getCacheFile = function(e) {
return t.cachedFiles[e];
};
t.clearCache = function() {
e.rmdirSync(t.cacheDir, !0);
t.cachedFiles = {};
e.mkdirSync(t.cacheDir);
};
t.readJsonSync = function(t) {
try {
var i = e.readFileSync(t, "utf8");
return JSON.parse(i);
} catch (e) {
console.warn("Read json failed: path: ".concat(t, " message: ").concat(e.message));
return new Error(e.message);
}
};
t.writeFileSync = function(t, i, n) {
try {
e.writeFileSync(t, i, n);
return null;
} catch (e) {
console.warn("Write file failed: path: ".concat(t, " message: ").concat(e.message));
return new Error(e.message);
}
};
t.cacheDir = "gamecaches";
t.cachedFileName = "cacheList.json";
t.cacheFilePath = "";
t.isInit = !1;
return t;
}();
t.cacheManager = n;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function() {
function t() {}
t.init = function() {
Object.defineProperty(fgui.GLoader.prototype, "weburl", Object.getOwnPropertyDescriptor(fgui.GLoader.prototype, "url"));
};
return t;
}();
t.wxdownload = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.IEventDispatcher = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = t.__Context_.TypeRegistry, n = function(t) {
__extends(e, t);
function e() {
var e = null !== t && t.apply(this, arguments) || this;
e.dispatcher = new gameframe.Dispatcher();
e.beanEventInfoMap = new Map();
return e;
}
e.prototype.init = function() {
gameframe.App.inst.dispatcher.register(gameframe.ContextEvent.BeanDestory, this.onBeanDestory.bind(this));
};
e.prototype.dispatch = function(t, e) {
for (var n, o = [], r = 2; r < arguments.length; r++) o[r - 2] = arguments[r];
var s = "string" == typeof t ? t : i.getClassName(t);
(n = this.dispatcher).dispatch.apply(n, __spreadArray([ s, e ], __read(o), !1));
};
e.prototype.dispatchEvent = function(t) {
var e = i.getClassName(t.constructor);
this.dispatcher.dispatch(e, t);
};
e.prototype.register = function(t, e, i) {
var n = function(t) {
for (var n, o = [], r = 1; r < arguments.length; r++) o[r - 1] = arguments[r];
e.selfActive && (n = e[i]).call.apply(n, __spreadArray([ e, t ], __read(o), !1));
};
this.dispatcher.register(t, n);
this.beanEventInfoMap.has(e) || this.beanEventInfoMap.set(e, new Array());
this.beanEventInfoMap.get(e).push({
event: t,
listener: n
});
};
e.prototype.onBeanDestory = function(t) {
var e, i, n = t.bean;
if (this.beanEventInfoMap.has(n)) {
var o = this.beanEventInfoMap.get(n);
try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
this.dispatcher.unregister(a.event, a.listener);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
this.beanEventInfoMap.delete(n);
}
};
__decorate([ gameframe.init ], e.prototype, "init", null);
return __decorate([ gameframe.plugin(gameframe.IEventDispatcher) ], e);
}(gameframe.IEventDispatcher);
e.EventImpl = n;
})(t.__Plugin_Event_ || (t.__Plugin_Event_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = __inner_gf.__Context_.BeanProperty, i = __inner_gf.__Context_.TypeRegistry;
t.event = function(t) {
return function(e) {
i.setClassAlias(e, t);
};
};
t.listen = function(n) {
var o = t.App.inst.context, r = t.App.inst.baseContext;
return function(s, a) {
var l = s.constructor || s, h = e.get(o, l);
h && h.autoAwares.push(function(e) {
var o = r.getBean(t.IEventDispatcher), s = "string" == typeof n ? n : i.getClassName(n);
o.register(s, e, a);
});
};
};
})(gameframe || (gameframe = {}));
(function(t) {
t.ArrToMap = function(t, e) {
if (!t || !e) return null;
for (var i = new Map(), n = 0; n < t.length && n < e.length; n++) i.set(t[n], e[n]);
return i;
};
(function(t) {
t[t.null = 0] = "null";
t[t.loginFail = 1] = "loginFail";
t[t.lobbyOut = 2] = "lobbyOut";
t[t.gameOut = 3] = "gameOut";
t[t.loadFail = 4] = "loadFail";
})(t.GamePluginExitType || (t.GamePluginExitType = {}));
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
e.leavePluginModeEvent = "KW_leavePluginModeEvent";
return e;
}(t.Bean);
t.IGamePlugin = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._isPluginMode = !1;
return t;
}
i.prototype.init = function() {
this._userinfo = {
area: 0,
userId: 0,
props: null
};
};
i.prototype.enterPluginMode = function(e, i, n, o, r, s, a, l) {
this._isPluginMode = !0;
this._hostinfo = e;
this._gameinfo = i;
this._prepareBundle = s;
this._getShopItems = a;
this._userinfo.props = n.props || new Map();
if (this._userinfo.area != n.area || this._userinfo.userId != n.userId) {
this._userinfo.area = n.area;
this._userinfo.userId = n.userId;
this._userinfo.token = null;
this._userinfo.pluginUserId = null;
this._userinfo.jwt_token = null;
}
this._callbacks = o;
var h = t.adaptor.makePluginModuleResolver(i.game);
this._assetPlugin.setModuleResolver(h);
fgui.moduleResolver = h;
this._assetPlugin.setSplitFolder(!0);
gameframe.App.inst.creatorResolver = function(t) {
return "".concat(i.game, "_").concat(t);
};
gameframe.App.inst.setRoot(r);
gameframe.App.inst.checkUpdate = this.PluginPrepareResource.bind(this);
l && this.getPlugin(gameframe.ISound).setAudioController(l);
};
i.prototype.leavePluginMode = function(e, i) {
var n;
void 0 === e && (e = 0);
void 0 === i && (i = "");
this._isPluginMode = !1;
null === (n = gameframe.App.inst.context.getBeanByName("WaitingImpl")) || void 0 === n || n.closeAll();
this.dispatch(gameframe.IGamePlugin.leavePluginModeEvent);
this.getPlugin(gameframe.mvc.IPopupManager).closeAll();
this.getPlugin(gameframe.IViewPlugin).closeAllView();
this.getPlugin(gameframe.ISound).stopAndClear();
var o = gameframe.App.inst;
o.popAllContext(!0);
this._assetPlugin.setModuleResolver(null);
this.getPlugin(gameframe.IViewPlugin).clearFguiCache();
this.getPlugin(gameframe.IViewPlugin).setViewRoot(null);
t.adaptor.FariyGUIExt.disposeLoadedPackags();
o.root.removeChildren();
o.setRoot(null);
o.creatorResolver = null;
gameframe.App.inst.checkUpdate = null;
t.adaptor.ResourceLoader.UnloadBundles();
this.getPlugin(gameframe.ISound).setAudioController(null);
t.adaptor.cleanUpHooks();
this._callbacks && this._callbacks.onQuit && this._callbacks.onQuit(e, i);
};
Object.defineProperty(i.prototype, "isPluginMode", {
get: function() {
return this._isPluginMode;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "hostInfo", {
get: function() {
return this._hostinfo;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "gameInfo", {
get: function() {
return this._gameinfo;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "userInfo", {
get: function() {
return this._userinfo;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "callbacks", {
get: function() {
return this._callbacks;
},
enumerable: !1,
configurable: !0
});
i.prototype.updateProps = function(t) {
this._userinfo.props = t;
this.dispatch("KW_updatePluginProps", t);
};
i.prototype.PluginPrepareResource = function(t, e, i, n) {
var o = this, r = e.length;
e.forEach(function(t) {
o._prepareBundle(t, function(t, e) {
r--;
console.log("prepare res left ".concat(r, ", ").concat(t, ", ").concat(e));
if (e && "" != e) {
if (0 == r) {
console.log("prepare res finished");
i(!0);
}
} else o.leavePluginMode(gameframe.GamePluginExitType.loadFail, "资源更新失败");
}, n);
});
};
i.prototype.getHostShopItems = function() {
return this._getShopItems();
};
i.leavePluginModeEvent = "KW_leavePluginModeEvent";
__decorate([ gameframe.init ], i.prototype, "init", null);
__decorate([ gameframe.aware(gameframe.IAssetPlugin) ], i.prototype, "_assetPlugin", void 0);
return __decorate([ gameframe.plugin(gameframe.IGamePlugin) ], i);
}(gameframe.IGamePlugin);
e.GamePluginImpl = i;
})(t.__Plugin_GamePlugin_ || (t.__Plugin_GamePlugin_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.IHostResource = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.initHostResouce = function(e, i, n) {
var o, r;
this.atalas = __inner_gf.adaptor.createSpriteAtalas(e);
this.fonts = i;
if (i) try {
for (var s = __values(i), a = s.next(); !a.done; a = s.next()) {
var l = a.value;
t.FariyGUIExt.registerFont(l[0], l[1]);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
a && !a.done && (r = s.return) && r.call(s);
} finally {
if (o) throw o.error;
}
}
n && (fgui.UIConfig.defaultFont = n);
};
i.prototype.getTexture = function(t) {
var e;
return null === (e = this.atalas) || void 0 === e ? void 0 : e.getSpriteFrame(t);
};
return __decorate([ t.plugin(t.IHostResource) ], i);
}(t.IHostResource);
t.HostResource = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t._toRawType = function(t) {
return Object.prototype.toString.call(t).slice(8, -1);
};
t.deepClone = function(t) {
var e, i, n, o, r, s, a = null;
switch (this._toRawType(t)) {
case "Array":
a = [];
try {
for (var l = __values(t.entries()), h = l.next(); !h.done; h = l.next()) {
var c = __read(h.value, 2), u = c[0], p = c[1];
a[u] = this.deepClone(p);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
h && !h.done && (i = l.return) && i.call(l);
} finally {
if (e) throw e.error;
}
}
break;

case "Map":
a = new Map();
try {
for (var d = __values(t), f = d.next(); !f.done; f = d.next()) {
var _ = __read(f.value, 2), g = _[0], y = _[1];
a.set(g, this.deepClone(y));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
f && !f.done && (o = d.return) && o.call(d);
} finally {
if (n) throw n.error;
}
}
break;

case "Set":
a = new Set();
try {
for (var m = __values(t), v = m.next(); !v.done; v = m.next()) {
y = v.value;
a.add(this.deepClone(y));
}
} catch (t) {
r = {
error: t
};
} finally {
try {
v && !v.done && (s = m.return) && s.call(m);
} finally {
if (r) throw r.error;
}
}
break;

case "Object":
a = {};
for (var u in t) a[u] = this.deepClone(t[u]);
break;

default:
a = t;
}
return a;
};
t.clone = function(t) {
return this.deepClone(t);
};
return t;
}();
t.CloneUtil = e;
})(t.utils || (t.utils = {}));
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
var e = null !== t && t.apply(this, arguments) || this;
e._waitQueues = [];
e._reqQueues = [];
e._reqFailQueues = [];
e._nQueues = 5;
e._doingQueue = 0;
e._index = 0;
e.defaultHeader = new Map([ [ "Content-Type", "application/x-www-form-urlencoded" ], [ "withCredentials", "true" ] ]);
return e;
}
e.prototype.init = function() {
if (gameframe.sys.isWeiXin) {
this.getOld = this.wxGet;
this.postOld = this.wxPost;
} else if (!("XMLHttpRequest" in window)) {
console.warn("[Http] ctor XMLHttpRequest not defined! use Engine WebRequest");
this.getOld = this.engineGet;
this.postOld = this.enginePost;
}
};
e.prototype.httpReq = function(t, e, i, n, o, r, s, a) {
void 0 === s && (s = 10);
void 0 === a && (a = !1);
var l = {
host: i,
callBack: n
};
if (this[t]) {
this._index = this._index + 1;
var h = {};
h.type = t;
h.index = this._index;
h.url = e;
h.body = o;
h.head = r;
h.timeOut = s;
h.callBackData = l;
h.isAccess = a;
this.dealQueue(!0, h);
}
};
e.prototype.dealQueue = function(t, e) {
void 0 === t && (t = !1);
if (this._doingQueue < this._nQueues) {
var i = void 0;
if (0 === this._waitQueues.length && t) i = e; else if (this._waitQueues.length > 0) {
i = this._waitQueues[0];
this._waitQueues.shift();
} else {
if (!(this._reqFailQueues.length > 0)) return;
i = this._reqFailQueues[0];
this._reqFailQueues.shift();
}
this._reqQueues.push(i);
this._doingQueue = this._doingQueue + 1;
this[i.type](i.index, i.url, i.body, i.head, i.timeOut, i.callBackData, i.isAccess);
} else t && this._waitQueues.push(e);
};
e.prototype.get = function(t, e, i, n, o, r) {
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
this.getOld(t, e, i, n, o, r);
};
e.prototype.post = function(t, e, i, n, o, r) {
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
this.postOld(t, e, i, n, o, r);
};
e.prototype.post_plus = function(t, e, i, n, o, r) {
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
this.postOld(t, e, i, n, o, r);
};
e.prototype.engineGet = function(t, e, i, n, o, r) {
var s = this;
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
gameframe.DEBUG() && console.log("http get", e);
gameframe.WebRequest.Get(e, null != n ? n : this.defaultHeader, o, function(i, n, o, a, l) {
if (i) {
var h = {};
h.response = gameframe.utils.CloneUtil.clone(o);
h.readyState = 4;
h.errorcode = n;
s.dealResData(t, h, r);
} else if (a) {
console.warn("xhr-on-timeout " + e);
s.dealResData(t, null, r);
} else {
console.warn("xhr-on-error ".concat(e, ", code:").concat(n, ", error:").concat(l));
s.dealResData(t, null, r);
}
});
};
e.prototype.wxGet = function(t, e, i, n, o, r) {
var s = this;
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
gameframe.DEBUG() && console.log("http get", e);
var a = {
"content-type": "application/x-www-form-urlencoded"
};
n && n.forEach(function(t, e) {
a[e] = t;
});
window.wx.request({
url: e,
header: a,
enableHttp2: !0,
method: "GET",
timeout: 1e3 * o,
dataType: "string",
success: function(e) {
var i = gameframe.utils.CloneUtil.clone(e);
i.response = e.data;
i.readyState = e.statusCode;
try {
i.errorcode = e.header["x-error-code"];
} catch (t) {
i.errorcode = null;
}
s.dealResData(t, i, r);
},
fail: function(i) {
s.dealResData(t, null, r);
console.warn("xhr-on-error ".concat(e, ", code:").concat(i.errno, ", error:").concat(i.errMsg));
}
});
};
e.prototype.getOld = function(t, e, i, n, o, r) {
var s = this;
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
var a = new XMLHttpRequest();
a.timeout = 1e3 * o;
a.open("get", e, !0);
n ? n.forEach(function(t, e) {
a.setRequestHeader(e, t);
}) : a.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
a.onerror = function() {
console.warn("xhr-on-error " + e);
s.dealResData(t, null, r);
};
a.ontimeout = function() {
console.warn("xhr-on-timeout " + e);
s.dealResData(t, null, r);
};
a.onload = function() {
if (a && 4 == a.readyState) if (a.status && a.status >= 200 && a.status < 400) {
var i = void 0;
try {
i = a.response;
} catch (t) {
i = {};
}
(n = {}).response = i;
n.readyState = a.readyState;
try {
n.errorcode = a.getResponseHeader("x-error-code");
} catch (t) {
n.errorcode = null;
}
s.dealResData(t, n, r);
} else {
console.warn("xhr-status-not-200-400: ".concat(a.status, ", url: ").concat(e, ",response: ").concat(a.responseText));
var n;
(n = {}).errorcode = a.responseText;
s.dealResData(t, n, r);
}
};
gameframe.DEBUG() && console.log("http req", e);
a.send(null);
};
e.prototype.enginePost = function(t, e, i, n, o, r) {
var s = this;
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
gameframe.DEBUG() && console.log("http post", e);
gameframe.WebRequest.PostRequestWithBody(e, i, null != n ? n : this.defaultHeader, o, function(i, n, o, a, l) {
if (i) {
var h = {};
h.response = gameframe.utils.CloneUtil.clone(o);
h.readyState = 4;
h.errorcode = n;
s.dealResData(t, h, r);
} else if (a) {
console.warn("xhr-on-timeout " + e);
s.dealResData(t, null, r);
} else {
console.warn("xhr-on-error ".concat(e, ", code:").concat(n, ", error:").concat(l));
s.dealResData(t, null, r);
}
});
};
e.prototype.wxPost = function(t, e, i, n, o, r) {
var s = this;
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
gameframe.DEBUG() && console.log("http get", e);
var a = {
"content-type": "application/x-www-form-urlencoded"
};
n && n.forEach(function(t, e) {
a[e] = t;
});
window.wx.request({
url: e,
header: a,
enableHttp2: !0,
method: "POST",
timeout: 1e3 * o,
data: i,
dataType: "string",
success: function(e) {
var i = gameframe.utils.CloneUtil.clone(e);
i.response = e.data;
i.readyState = e.statusCode;
try {
i.errorcode = e.header["x-error-code"];
} catch (t) {
i.errorcode = null;
}
s.dealResData(t, i, r);
},
fail: function(i) {
s.dealResData(t, null, r);
console.warn("xhr-on-error ".concat(e, ", code:").concat(i.errno, ", error:").concat(i.errMsg));
}
});
};
e.prototype.postOld = function(t, e, i, n, o, r) {
var s = this;
void 0 === i && (i = "");
void 0 === n && (n = null);
void 0 === o && (o = 10);
var a = new XMLHttpRequest();
a.timeout = 1e3 * o;
a.open("post", e, !0);
n ? n.forEach(function(t, e) {
a.setRequestHeader(e, t);
}) : a.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
a.onerror = function() {
console.error("xhr-on-error " + e);
s.dealResData(t, null, r);
};
a.ontimeout = function() {
console.error("xhr-on-timeout " + e);
s.dealResData(t, null, r);
};
a.onload = function() {
if (a && 4 == a.readyState) if (a.status && a.status >= 200 && a.status < 400) {
var i = void 0;
try {
i = a.response;
} catch (t) {
i = {};
}
(n = {}).response = i;
n.readyState = a.readyState;
try {
n.errorcode = a.getResponseHeader("x-error-code");
} catch (t) {
n.errorcode = null;
}
s.dealResData(t, n, r);
} else {
console.warn("xhr-status-not-200-400: ".concat(a.status, ", url: ").concat(e, ",response: ").concat(a.responseText));
var n;
(n = {}).errorcode = a.responseText;
s.dealResData(t, n, r);
}
};
gameframe.DEBUG() && console.log("http req", e);
a.send(i);
};
e.prototype.dealResData = function(t, e, i) {
this._doingQueue = this._doingQueue - 1;
for (var n = 0; n < this._reqQueues.length; n++) if (t == this._reqQueues[n].index) {
var o = this._reqQueues[n];
this._reqQueues.splice(n, 1);
if (e && 1009999 == e.code) {
this._reqFailQueues.push(o);
this.dealQueue();
return;
}
}
this.dealQueue();
i.callBack && i.callBack.call(i.host, e);
};
e.prototype.getRequestParameters = function(t) {
var e, i = "";
for (e in t) i += "".concat(e, "=").concat(t[e], "&");
return i.substr(0, i.length - 1);
};
__decorate([ gameframe.init ], e.prototype, "init", null);
return __decorate([ gameframe.plugin(gameframe.IHttp) ], e);
}(gameframe.IHttp);
t.Http = e;
})(t.__Plugin_ASSET_ || (t.__Plugin_ASSET_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(t) {
t[t.Base = 0] = "Base";
t[t.Pop = 1] = "Pop";
t[t.Tip = 2] = "Tip";
t[t.Toast = 3] = "Toast";
t[t.Loading = 4] = "Loading";
t[t.Top = 5] = "Top";
})(t.ViewLayer || (t.ViewLayer = {}));
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.IViewPlugin = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._loaded = !1;
t.selfActive = !1;
return t;
}
Object.defineProperty(i.prototype, "fguiObject", {
get: function() {
return this._fguiObject;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "gobject", {
get: function() {
return this._fguiObject;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "name", {
set: function(t) {
this.node.name = this.gobject.name = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.preLoadUI = function() {};
i.prototype.initUI = function() {
for (var t = [], e = 0; e < arguments.length; e++) t[e] = arguments[e];
};
i.prototype.onDestroy = function() {};
i.prototype.close = function() {
this.getPlugin(t.IViewPlugin).closeController(this);
};
i.prototype.bindUI = function(t) {
this._fguiObject = t;
this._loaded = !0;
this.selfActive = !0;
t.name = this.constructor.name;
};
i.prototype.doDestroy = function() {
if (this._loaded) {
this._loaded = !1;
this.selfActive = !1;
this.onDestroy();
if (this._fguiObject) {
if (this._fguiObject.node) {
var e = this.getPlugin(t.IViewPlugin);
console.log("controller base dodestroy removeFguiObject");
e.removeFguiObject(this.name, this._fguiObject, this);
}
this._fguiObject = null;
} else this.node && t.UGOHelper.removeFromParent(this.node, !0);
this.node = null;
this.unscheduleAllCallbacks();
this.isObject && t.Context.removeObject(this);
}
};
i.prototype.onDispose = function() {
this.close();
};
return i;
}(t.Component);
t.ControllerBase = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = __inner_gf.__Context_.BeanProperty;
t.controller = function(i) {
return function(n) {
var o = i.name;
t.bean(i.interface, o)(n);
var r = e.get(t.App.inst.context, n);
r.unwired.push(function(t) {
n.prototype.close.call(t);
});
r.properties.set("ControllerInfo", i);
r.properties.set("ViewName", o);
};
};
t.module = function(i) {
return function(n) {
var o = i.name;
t.bean(i.interface, o, i.autoCreate)(n);
e.get(t.App.inst.context, n).properties.set("ModuleInfo", i);
};
};
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._loaded = !1;
return t;
}
Object.defineProperty(i.prototype, "fguiObject", {
get: function() {
return this._fguiObject;
},
enumerable: !1,
configurable: !0
});
i.prototype.onLoad = function() {
e.prototype.onLoad.call(this);
this.bindUI(t.castToGObject(this.node));
try {
this.initUI();
} catch (t) {
console.error(t);
}
};
i.prototype.initUI = function() {};
i.prototype.onDestroy = function() {
this.doDestroy();
e.prototype.onDestroy.call(this);
};
i.prototype.bindUI = function(t) {
this._fguiObject = t;
this._loaded = !0;
};
i.prototype.doDestroy = function() {
if (this._loaded) {
this._loaded = !1;
this.onDestroy();
this.fguiObject ? t.FGUI.dispose(this.fguiObject) : this.node && t.UGOHelper.removeFromParent(this.node, !0);
__inner_gf.adaptor.isTargetEnabled(this) && __inner_gf.adaptor.director.getScheduler().unscheduleAllForTarget(this);
}
};
return i;
}(t.ScriptComponent);
t.ExtensionBase = e;
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Component);
t.ModuleBase = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = t.__Context_.BeanProperty, n = function(t) {
__extends(n, t);
function n() {
var e = null !== t && t.apply(this, arguments) || this;
e._viewLayerRoot = new Array(gameframe.ViewLayer.Top + 1);
e._activeViews = new Map();
e._LoadingHandle = "openingSubView";
e.enableCahche = !0;
e._fguiCache = new Array();
return e;
}
n.prototype.init = function() {
var t = this;
gameframe.sys.isWeiXin && window.wx.onMemoryWarning(function(e) {
t.clearFguiCache();
console.warn("wx.onMemoryWarning:" + e);
});
};
n.prototype.createCacheParent = function() {
var t = new fgui.GComponent();
t.name = t.node.name = "viewCache";
t.sortingOrder = -1e3;
gameframe.UGOHelper.setActive(gameframe.castGObjectToGameObject(t), !1);
this._fguiCacheParent = t;
};
n.prototype.setViewRoot = function(t) {
if (null != t) {
t.length != this._viewLayerRoot.length && console.error("[ViewPluginImpl]setViewRoot wrong layers count ".concat(t.length, ". required ").concat(this._viewLayerRoot.length));
for (e = 0; e < t.length && e < this._viewLayerRoot.length; e++) this._viewLayerRoot[e] = t[e];
} else for (var e = 0; e < this._viewLayerRoot.length; e++) this._viewLayerRoot[e] = null;
};
n.prototype.getViewLayer = function(t) {
if (t >= 0 && t < this._viewLayerRoot.length) return this._viewLayerRoot[t];
gameframe.DEBUG() && console.error("[ViewPool] getViewRoot viewLayer ".concat(t, " invalid"));
return null;
};
n.prototype.attachWidget = function(t, e) {
for (var i, n = [], o = 2; o < arguments.length; o++) n[o - 2] = arguments[o];
if (null == t) return null;
var r = gameframe.App.inst.context, s = r.createAsObjectByName(e);
if (!s) {
console.error("[ViewPluginImpl]openWidget ".concat(e, " widget not find"));
return null;
}
s.preLoadUI();
var a = gameframe.castGameObject(gameframe.castGObjectToGameObject(t.asCom));
a.insertComponent(s);
try {
s.bindUI.call(s, t);
(i = s).initUI.apply(i, __spreadArray([], __read(n), !1));
return s;
} catch (t) {
console.error("lianyun", t);
s.close();
return null;
}
};
n.prototype.openWidget = function(t) {
for (var e = this, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
var r = gameframe.App.inst.context, s = r.createAsObjectByName(t);
if (!s) {
console.error("[ViewPluginImpl]openWidget ".concat(t, " widget not find"));
return new Promise(function(t, e) {
e("no widget");
});
}
var a = i.get(null, s.constructor), l = null == a ? void 0 : a.properties.get("ControllerInfo");
if (!l) {
console.error("[ViewPluginImpl]openWidget ".concat(t, " not a widget"));
return new Promise(function(t, e) {
e("not a widget");
});
}
s.preLoadUI();
var h = this.tryGetFromCache(t);
return null != h ? new Promise(function(t, e) {
var i;
gameframe.castGameObject(gameframe.castGObjectToGameObject(h.asCom)).insertComponent(s);
try {
s.bindUI.call(s, h);
(i = s).initUI.apply(i, __spreadArray([], __read(n), !1));
t(s);
} catch (t) {
console.error(t);
e(t);
}
}) : new Promise(function(t, i) {
e._assetPlugin.loadFguiAsync(l.module, l.fguiPackage, l.fguiObject, l.exPkgs).then(function(e) {
var o;
gameframe.castGameObject(gameframe.castGObjectToGameObject(e.asCom)).insertComponent(s);
try {
s.bindUI.call(s, e);
(o = s).initUI.apply(o, __spreadArray([], __read(n), !1));
t(s);
} catch (t) {
console.error(t);
i(t);
}
}).catch(function(t) {
console.error(t);
i(t);
});
});
};
n.prototype.openView = function(t) {
for (var e, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
var r = gameframe.App.inst.context, s = r.getClassByName(t);
if (!s) {
console.error("[ViewPluginImpl]cannot find view ".concat(t));
return new Promise(function(t, e) {
e("no view");
});
}
var a = i.get(null, s), l = null == a ? void 0 : a.properties.get("ControllerInfo");
if (!l) {
console.error("[ViewPluginImpl]openView ".concat(t, " not a controller"));
return new Promise(function(t, e) {
e("not a controller");
});
}
var h = this.getViewLayer(null !== (e = l.layer) && void 0 !== e ? e : gameframe.ViewLayer.Base);
return this.openSubView.apply(this, __spreadArray([ h, t ], __read(n), !1));
};
n.prototype.openViewOnLayer = function(t, e) {
for (var i = [], n = 2; n < arguments.length; n++) i[n - 2] = arguments[n];
var o = gameframe.App.inst.context, r = o.getClassByName(t);
if (!r) {
console.error("[ViewPluginImpl]cannot find view ".concat(t));
return new Promise(function(t, e) {
e("no view");
});
}
var s = this.getViewLayer(e);
return this.openSubView.apply(this, __spreadArray([ s, t ], __read(i), !1));
};
n.prototype.openSubViewFullScreen = function(t, e) {
for (var i = [], n = 2; n < arguments.length; n++) i[n - 2] = arguments[n];
return this._openSubView.apply(this, __spreadArray([ t, e, !0 ], __read(i), !1));
};
n.prototype.openSubView = function(t, e) {
for (var i = [], n = 2; n < arguments.length; n++) i[n - 2] = arguments[n];
return this._openSubView.apply(this, __spreadArray([ t, e, !1 ], __read(i), !1));
};
n.prototype._openSubView = function(t, e, n) {
for (var o = this, r = [], s = 3; s < arguments.length; s++) r[s - 3] = arguments[s];
if (this._activeViews.has(e)) {
var a = this._activeViews.get(e);
if (a.isLoading) {
a.postLoad = this.makePostLoad.apply(this, __spreadArray([ t, a ], __read(r), !1));
return a.loadPromise;
}
return new Promise(function(t) {
var e;
try {
(e = a.controller).initUI.apply(e, __spreadArray([], __read(r), !1));
} catch (t) {
console.error(t);
}
t(a.controller);
});
}
var l = Date.now(), h = gameframe.App.inst.context, c = h.getBeanByName(e);
if (!c) {
console.error("[ViewPluginImpl]openView ".concat(e, " controller not find"));
return null;
}
var u = i.get(null, c.constructor), p = null == u ? void 0 : u.properties.get("ControllerInfo");
if (!p) {
console.error("[ViewPluginImpl]openView ".concat(e, " not a controller"));
return null;
}
var d = {
controllerInfo: p,
controller: c,
isLoading: !0
};
d.postLoad = this.makePostLoad.apply(this, __spreadArray([ t, d ], __read(r), !1));
this._activeViews.set(e, d);
c.preLoadUI();
var f = this.tryGetFromCache(e);
if (null != f) d.loadPromise = new Promise(function(t) {
d.postLoad(f);
t(d.controller);
}); else {
var _ = null;
1 != p.notLoading && (null == (_ = gameframe.App.inst.context.getBeanByName("WaitingImpl")) || _.setTask({
name: this._LoadingHandle,
tip: "加载中...",
showBack: !1
}));
d.loadPromise = new Promise(function(t, i) {
o._assetPlugin.loadFguiAsync(p.module, p.fguiPackage, p.fguiObject).then(function(r) {
gameframe.DEBUG() && console.warn("openView:" + e + "  loadcost:" + (Date.now() - l));
n && r.makeFullScreen();
if (d.postLoad(r)) {
t(d.controller);
null == _ || _.onComplete(o._LoadingHandle, !0);
gameframe.DEBUG() && console.warn("openView:" + e + "  allcost:" + (Date.now() - l));
} else {
d.controller.doDestroy();
gameframe.Context.removeBean(d.controller);
o._activeViews.delete(e);
i(null);
null == _ || _.onComplete(o._LoadingHandle, !1);
}
}).catch(function(t) {
d.controller.doDestroy();
gameframe.Context.removeBean(d.controller);
o._activeViews.delete(e);
console.error("lianyun", t);
i(t);
null == _ || _.onComplete(o._LoadingHandle, !1);
});
});
}
return d.loadPromise;
};
n.prototype.makePostLoad = function(t, e) {
for (var i = [], n = 2; n < arguments.length; n++) i[n - 2] = arguments[n];
return function(n) {
var o, r, s = e.controller;
if (e.isLoading) {
gameframe.castGameObject(gameframe.castGObjectToGameObject(n.asCom)).insertComponent(s);
if (gameframe.DEBUG()) s.bindUI.call(s, n); else try {
s.bindUI.call(s, n);
} catch (t) {
console.error(t);
return null;
}
gameframe.FGUI.addChild(t, n);
e.controllerInfo.sortingOrder ? n.sortingOrder = e.controllerInfo.sortingOrder : n.sortingOrder = 0;
e.isLoading = !1;
e.postLoad = null;
e.loadPromise = null;
if (gameframe.DEBUG()) (o = s).initUI.apply(o, __spreadArray([], __read(i), !1)); else try {
(r = s).initUI.apply(r, __spreadArray([], __read(i), !1));
} catch (t) {
console.error(t);
return null;
}
}
return s;
};
};
n.prototype.haveView = function(t) {
return !!this._activeViews.has(t);
};
n.prototype.getViewController = function(t) {
var e = this._activeViews.get(t);
return e && !e.isLoading ? e.controller : null;
};
n.prototype.isInManage = function(t) {
var e = i.get(null, t.constructor).properties.get("ViewName");
return !!this._activeViews.has(e) && this._activeViews.get(e).controller === t;
};
n.prototype.closeView = function(t) {
var e = this;
console.warn("closeView:" + t);
if (!this._activeViews.has(t)) return !1;
var i = this._activeViews.get(t);
if (i.isLoading) i.postLoad = function() {
e._activeViews.delete(t);
i.controller.doDestroy();
gameframe.Context.removeBean(i.controller);
return null;
}; else {
this._activeViews.delete(t);
i.controller.doDestroy();
gameframe.Context.removeBean(i.controller);
}
return !0;
};
n.prototype.closeController = function(t) {
var e = i.get(null, t.constructor).properties.get("ViewName");
this.isInManage(t) && this.closeView(e) || t.doDestroy.call(t);
};
n.prototype.closeAllView = function() {
console.warn("closeAllView:");
this._activeViews.forEach(function(t) {
if (t.isLoading) t.postLoad = function() {
gameframe.Context.removeBean(t.controller);
return null;
}; else {
t.controller.doDestroy();
gameframe.Context.removeBean(t.controller);
}
});
this._activeViews.clear();
};
n.prototype.setViewLayerVisiable = function(t, e) {
this._viewLayerRoot[t].alpha = e ? 1 : 0;
};
n.prototype.removeFguiObject = function(t, e, n) {
var o, r, s, a, l;
null === (s = n.unBindUI) || void 0 === s || s.call(n);
gameframe.castGameObject(gameframe.castGObjectToGameObject(e)).onDestroy();
var h = i.get(null, n.constructor), c = null == h ? void 0 : h.properties.get("ControllerInfo"), u = !1;
if (c) {
u = null !== (a = c.cachable) && void 0 !== a && a;
t = null !== (l = c.name) && void 0 !== l ? l : t;
}
if (u && this.enableCahche) {
try {
for (var p = __values(this._fguiCache), d = p.next(); !d.done; d = p.next()) if (d.value.name === t) {
gameframe.FGUI.dispose(e);
return;
}
} catch (t) {
o = {
error: t
};
} finally {
try {
d && !d.done && (r = p.return) && r.call(p);
} finally {
if (o) throw o.error;
}
}
if (this._fguiCache.length >= 10) {
var f = this._fguiCache.shift();
gameframe.FGUI.dispose(f.gobj);
}
gameframe.FGUI.removeFromParent(e);
this._fguiCacheParent || this.createCacheParent();
gameframe.FGUI.addChild(this._fguiCacheParent, e);
e.visible = !1;
this._fguiCache.push({
name: t,
gobj: e,
module: c.module
});
} else gameframe.FGUI.dispose(e);
};
n.prototype.clearFguiCacheByModule = function(t) {
for (var e = this._fguiCache.length - 1; e >= 0; e--) {
var i = this._fguiCache[e];
if (i.module === t) {
gameframe.FGUI.removeFromParent(i.gobj);
gameframe.FGUI.dispose(i.gobj);
this._fguiCache.splice(e, 1);
}
}
};
n.prototype.clearFguiCache = function() {
var t;
this._fguiCache = [];
null === (t = this._fguiCacheParent) || void 0 === t || t.dispose();
this._fguiCacheParent = null;
};
n.prototype.tryGetFromCache = function(t) {
for (var e = 0; e < this._fguiCache.length; e++) if (this._fguiCache[e].name === t) {
var i = this._fguiCache[e].gobj;
gameframe.FGUI.removeFromParent(i);
i.visible = !0;
this._fguiCache.splice(e, 1);
return i;
}
return null;
};
n.prototype.attachDeclare = function(t) {
return t ? e.UIUtil.bindObjects(t) : null;
};
__decorate([ gameframe.aware(gameframe.IAssetPlugin) ], n.prototype, "_assetPlugin", void 0);
__decorate([ gameframe.init ], n.prototype, "init", null);
return __decorate([ gameframe.plugin(gameframe.IViewPlugin) ], n);
}(gameframe.IViewPlugin);
e.ViewPluginImpl = n;
})(t.__Plugin_MVC_ || (t.__Plugin_MVC_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
var i = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
e.IPopupManager = i;
})(t.mvc || (t.mvc = {}));
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = function() {
function e() {}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.addClick = function(e, i) {
if (!e) return null;
if (!this.nodeIsExist(e)) return null;
var n;
n = e instanceof fgui.GObject ? e : t.castToGObject(e);
t.FGUI.addClick(n, i);
return {
btn: n,
call: i
};
};
e.prototype.removeClick = function(e, i) {
if (!e) return null;
if (!this.nodeIsExist(e)) return null;
var n;
n = e instanceof fgui.GObject ? e : t.castToGObject(e);
t.FGUI.removeClick(n, i);
};
e.prototype.onEvent = function(e, i, n) {
return e && this.nodeIsExist(e) ? {
btn: o = e instanceof fgui.GObject ? e : t.castToGObject(e),
call: t.FGUI.onEvent(o, i, n)
} : null;
var o;
};
e.prototype.setSprite = function(e, i) {
var n;
if (!this.nodeIsExist(e)) return !1;
var o = null === (n = t.castToGObject(e)) || void 0 === n ? void 0 : n.asLoader;
if (!o) return !1;
o.url = i;
return !0;
};
e.prototype.setText = function(e, i) {
if (e) {
if (!this.nodeIsExist(e)) return;
if (e instanceof fgui.GTextField || e instanceof fgui.GButton) {
e.text = i;
return;
}
var n = t.castToGObject(e);
if (!n) return;
n.text = i;
}
};
e.prototype.getText = function(e) {
if (e) {
if (!this.nodeIsExist(e)) return "";
if (e instanceof fgui.GTextField || e instanceof fgui.GButton) return e.text;
var i = t.castToGObject(e);
if (i) return i.text;
}
return "";
};
e.prototype.setSpriteAsync = function(t) {
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function() {
return this.nodeIsExist(t) ? [ 2 ] : [ 2, !1 ];
});
});
};
e.prototype.setSpriteFromAtlas = function(t) {
this.nodeIsExist(t);
};
e.prototype.setSpriteFromAtlasAsync = function(t) {
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function() {
return this.nodeIsExist(t), [ 2 ];
});
});
};
e.prototype.nodeIsExist = function(e) {
return e instanceof fgui.GObject ? null != e : e && t.isValid(e);
};
e.prototype.judgePosInArea = function(e, i) {
return t.FGUI.hitTest(t.castToGObject(e), i);
};
e.prototype.setImgByUrl = function(t) {
this.nodeIsExist(t);
};
e.prototype.setFguiImgByUrl = function() {};
e.prototype.setHeadImage = function(t, e) {
void 0 === e && (e = "");
t instanceof fgui.GButton || t instanceof fgui.GLoader ? t.icon = e || "ui://5hwbh28jcjal3e" : e && (e.startsWith("http") || e.startsWith("https")) ? this.setHeadIconByUrl(t, e) : this.setSpriteFromAtlas(t, "res/areabase/textures/common/common", "common_head");
};
e.prototype.downloadImgByUrls = function() {};
e.prototype.setHeadIconByUrl = function(t) {
this.nodeIsExist(t);
};
e.prototype.getNodePosition = function() {
return null;
};
e.prototype.setBright = function(t, e, i) {
void 0 === i && (i = !1);
};
e.prototype.setButtonEnabled = function(e, i) {
var n = t.castToGObject(e);
n && (n.enabled = i);
};
e.prototype.captureScreen = function() {};
e.prototype.getChildByNameDeep = function(e, i) {
for (var n = 0; n < t.UGOHelper.childrenCount(e); n++) {
var o = t.UGOHelper.getChildAt(e, n);
if (o.name == i) return o;
if (t.UGOHelper.childrenCount(o) > 0) return this.getChildByNameDeep(o, i);
}
return null;
};
e.prototype.getChileByNameDeepFgui = function(e, i) {
if (e instanceof fgui.GComponent) for (var n = 0; n < e.numChildren; n++) {
var o = t.FGUI.getChildAt(e, n);
if (o.name == i) return o;
if (o instanceof fgui.GComponent && o.asCom.numChildren > 0) {
var r = this.getChileByNameDeepFgui(o.asCom, i);
if (r) return r;
}
}
return null;
};
e._ins = null;
return e;
}();
e.UIFunction = i;
})(t.mvc || (t.mvc = {}));
})(gameframe || (gameframe = {}));
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
return e;
}(t.Bean);
t.ISound = e;
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {}
t.bindObjects = function(e) {
return e.__isGfProxy ? e : new Proxy(e, {
get: function(e, i) {
if ("__isGfProxy" == i) return !0;
var n;
if (i in e) {
if ("function" == typeof (n = e[i])) {
if ("GetChildAt" == i || "GetChild" == i || "getChildAt" == i || "getChild" == i || "addItemFromPool" == i) {
var o = n.bind(e);
n = function(e) {
var i = o(e);
return i ? t.bindObjects(i) : null;
};
}
return n.bind(e);
}
return n;
}
i && (n = gameframe.FGUI.getChild(e, i)) && (n = t.bindObjects(n));
n || (n = gameframe.FGUI.getController(e, i) || gameframe.FGUI.getTransition(e, i));
n && (e[i] = n);
return n;
},
set: function(t, e, i) {
t[e] = i;
return !0;
}
});
};
t.bindRoot = function(e) {
if (e.__isGfProxy) return e;
var i = e;
return new Proxy({}, {
get: function(e, n) {
if ("__isGfProxy" == n) return !0;
if (n in e) return e[n];
var o = gameframe.FGUI.getChild(i, n);
(o = o ? t.bindObjects(o) : gameframe.FGUI.getController(i, n) || gameframe.FGUI.getTransition(i, n)) && (e[n] = o);
return o;
},
set: function(t, e, n) {
i[e] = n;
return !0;
}
});
};
return t;
}();
t.UIUtil = e;
})(t.__Plugin_MVC_ || (t.__Plugin_MVC_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
var i = __inner_gf.__Plugin_MVC_.UIUtil, n = function(n) {
__extends(o, n);
function o() {
var t = null !== n && n.apply(this, arguments) || this;
t.view = {};
t.needBindUI = !0;
t.addClickedList = new Map();
t.onEventList = [];
return t;
}
Object.defineProperty(o.prototype, "winsize", {
get: function() {
return t.FGUI.getSize(t.App.inst.root);
},
enumerable: !1,
configurable: !0
});
o.prototype.bindUI = function(e) {
n.prototype.bindUI.call(this, e);
if (this.needBindUI) {
this.view = i.bindObjects(this.fguiObject);
this.addTouchClose();
}
this.view[this.node.name] = this.node;
if (t.DEBUG()) this.onUIBinded(); else try {
this.onUIBinded();
} catch (t) {
console.log(t);
}
};
o.prototype.unBindUI = function() {
this.addClickedList.forEach(function(e, i) {
if (i && e) for (var n = 0; n < e.length; n++) {
var o = e[n];
t.FGUI.removeClick(i, o);
}
});
this.addClickedList.clear();
this.onEventList.forEach(function(e) {
e.btn && e.evt && t.FGUI.offEvent(e.btn, e.evt, e.call);
});
this.onEventList = [];
this.onUnUIBinded();
this.view = null;
};
o.prototype.preLoadUI = function() {};
o.prototype.onUIBinded = function() {};
o.prototype.onUnUIBinded = function() {};
o.prototype.initUI = function() {
for (var t = [], e = 0; e < arguments.length; e++) t[e] = arguments[e];
};
o.prototype.onDestroy = function() {};
o.prototype.addTouchClose = function() {
var t = this.view.KW_AUTO_CLOSE;
null != t && this.addClick(t, this.onBtnClose);
};
o.prototype.onBtnClose = function() {
this.close();
};
o.prototype.callbackPolaris = function(e, i) {
var n = this;
return function(o) {
n.getPlugin(t.ISound).playEffect("Click.mp3");
e.call(n, o, i);
};
};
o.prototype.addClick = function(i, n, o) {
if (!o) {
var r;
r = i instanceof fgui.GObject ? i : t.castToGObject(i);
var s = this.addClickedList.get(r);
if (s) for (var a = 0; a < s.length; a++) {
var l = s[a];
t.FGUI.removeClick(r, l);
}
}
var h = e.UIFunction.staticInstance.addClick(i, this.callbackPolaris(n, i)), c = this.addClickedList.get(h.btn);
c && o ? c.push(h.call) : this.addClickedList.set(h.btn, [ h.call ]);
return h.call;
};
o.prototype.removeClick = function(e, i) {
var n;
n = e instanceof fgui.GObject ? e : t.castToGObject(e);
var o = this.addClickedList.get(n), r = o.indexOf(i);
r >= 0 && (1 == o.length ? this.addClickedList.delete(n) : o.splice(r, 1));
t.FGUI.removeClick(n, i);
};
o.prototype.onEvent = function(t, i, n) {
var o = e.UIFunction.staticInstance.onEvent(t, i, this.callbackPolaris(n, t));
this.onEventList.push({
btn: o.btn,
evt: i,
call: o.call
});
};
o.prototype.setActive = function(i, n) {
e.UIFunction.staticInstance.nodeIsExist(i) && (i instanceof fgui.GObject ? i instanceof fgui.GGroup ? i.visible = n : t.UGOHelper.setActive(t.castGObjectToGameObject(i), n) : t.UGOHelper.setActive(i, n));
};
o.prototype.isActive = function(i) {
return !!e.UIFunction.staticInstance.nodeIsExist(i) && (i instanceof fgui.GObject ? i instanceof fgui.GGroup ? i.visible : t.UGOHelper.isActive(t.castGObjectToGameObject(i)) : t.UGOHelper.isActive(i));
};
o.prototype.setText = function(t, i) {
e.UIFunction.staticInstance.setText(t, i);
};
o.prototype.getText = function(t) {
return e.UIFunction.staticInstance.getText(t);
};
o.prototype.setSprite = function(t, i) {
e.UIFunction.staticInstance.setSprite(t, i);
};
o.prototype.setSpriteAsync = function(t, i) {
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function(n) {
switch (n.label) {
case 0:
return [ 4, e.UIFunction.staticInstance.setSpriteAsync(t, i) ];

case 1:
return [ 2, n.sent() ];
}
});
});
};
o.prototype.setSpriteFromAtlas = function(t, i, n) {
e.UIFunction.staticInstance.setSpriteFromAtlas(t, i, n);
};
o.prototype.judgePosInArea = function(t, i) {
return e.UIFunction.staticInstance.judgePosInArea(t, i);
};
o.prototype.setProcess = function(e, i) {
var n = t.castToGObject(e).asProgress;
n && (n.value = i);
};
o.prototype.setOpacity = function(e, i) {
t.castToGObject(e).alpha = i;
};
o.prototype.enabledSprite = function(e) {
var i = t.castToGObject(e);
if (i) {
i.enabled = !0;
i.grayed = !1;
}
};
o.prototype.unabledSprite = function(e) {
var i = t.castToGObject(e);
if (i) {
i.enabled = !1;
i.grayed = !0;
}
};
o.prototype.replaceView = function(e, i) {
if (i) {
var n = t.castToGObject(i);
if (null != n) {
var o = e.parent;
if (null != o) {
var r = t.FGUI.getChildIndex(o, e);
t.FGUI.removeChild(o, e, !0);
t.FGUI.addChildAt(o, n, r);
}
}
}
};
o.prototype.close = function() {
n.prototype.close.call(this);
};
return o;
}(t.ControllerBase);
e.UIController = n;
})(t.mvc || (t.mvc = {}));
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
(function(t) {
t[t.dialog = 10] = "dialog";
t[t.toast = 1500] = "toast";
t[t.loading = 1900] = "loading";
})(e.PopZorder || (e.PopZorder = {}));
e.popup = function(e) {
return function(i) {
t.register(e.name)(i);
Object.defineProperty(i.prototype, "__POPUP_INFO_", {
value: e,
enumerable: !1,
writable: !1
});
};
};
var i = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.getPopupInfo = function(t) {
return t.prototype.hasOwnProperty("__POPUP_INFO_") ? t.prototype.__POPUP_INFO_ : null;
};
Object.defineProperty(i.prototype, "order", {
get: function() {
return i.getPopupInfo(this.constructor).order;
},
enumerable: !1,
configurable: !0
});
i.prototype.onLoad = function() {
var i;
e.prototype.onLoad.call(this);
t.DEBUG() && console.log("[UIpop Init UI ClassName]:" + this.name);
this._manager = t.App.inst.context.getBean(t.mvc.IPopupManager);
null === (i = this._manager) || void 0 === i || i.add(this);
};
i.prototype.preLoadUI = function() {
throw new Error("not valid");
};
i.prototype.initUI = function() {
for (var t = [], e = 0; e < arguments.length; e++) t[e] = arguments[e];
};
i.prototype.onDestroy = function() {};
i.prototype.close = function() {
var t;
null === (t = this._manager) || void 0 === t || t.remove(this);
this.doDestroy.call(this);
};
return i;
}(e.UIController);
e.UIPopup = i;
})(t.mvc || (t.mvc = {}));
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
var e = null !== t && t.apply(this, arguments) || this;
e._popMap = new Map();
return e;
}
e.prototype.closeAll = function() {
var t, e, i, n, o = this._popMap;
this._popMap = new Map();
try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
try {
for (var l = (i = void 0, __values(a[1])), h = l.next(); !h.done; h = l.next()) h.value.close();
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
}
} catch (e) {
t = {
error: e
};
} finally {
try {
s && !s.done && (e = r.return) && e.call(r);
} finally {
if (t) throw t.error;
}
}
};
e.prototype.closeByType = function(t) {
var e, i, n = "string" == typeof t ? gameframe.App.inst.context.getClassByName(t) : t;
if (this._popMap.has(n)) {
var o = this._popMap.get(n);
this._popMap.delete(n);
try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) s.value.close();
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
}
};
e.prototype.add = function(t) {
var e = t.constructor;
if (this._popMap.has(e)) this._popMap.get(e).push(t); else {
var i = new Array();
i.push(t);
this._popMap.set(e, i);
}
};
e.prototype.remove = function(t) {
var e = t.constructor;
if (this._popMap.has(e)) {
var i = this._popMap.get(e), n = i.indexOf(t);
if (n >= 0) {
i.splice(n, 1);
0 == i.length && this._popMap.delete(e);
}
}
};
e.prototype.getAllInstance = function(t) {
var e = t.constructor;
if (this._popMap.has(e)) return this._popMap.get(e);
};
e.prototype.createPopup = function(t) {
for (var e = [], i = 1; i < arguments.length; i++) e[i - 1] = arguments[i];
var n = "string" == typeof t ? gameframe.App.inst.context.getClassByName(t) : t, o = gameframe.mvc.UIPopup.getPopupInfo(n);
o || console.log("not a popup ", t);
this._assetPlugin.loadFguiAsync(o.module, o.fguiPackage, o.fguiObject, o.exPkgs).then(function(t) {
if (t) {
var i;
if (!(i = o.order <= gameframe.mvc.PopZorder.dialog ? gameframe.FGUI.getChild(gameframe.App.inst.root, "TipRoot") : o.order <= gameframe.mvc.PopZorder.toast ? gameframe.FGUI.getChild(gameframe.App.inst.root, "ToastRoot") : gameframe.FGUI.getChild(gameframe.App.inst.root, "LoadingRoot"))) return;
gameframe.FGUI.setPosition(t, 0, 0, 0);
var r = gameframe.addComponent(gameframe.castGObjectToGameObject(t), n);
r.bindUI.call(r, t);
gameframe.FGUI.addChild(i, t);
r.initUI.apply(r, __spreadArray([], __read(e), !1));
}
});
};
__decorate([ gameframe.aware(gameframe.IAssetPlugin) ], e.prototype, "_assetPlugin", void 0);
return __decorate([ gameframe.plugin(gameframe.mvc.IPopupManager) ], e);
}(gameframe.mvc.IPopupManager);
t.PopupManager = e;
})(t.__Plugin_MVC_ || (t.__Plugin_MVC_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
(function(e) {
var i = __inner_gf.__Plugin_MVC_.UIUtil, n = function(n) {
__extends(o, n);
function o() {
var t = null !== n && n.apply(this, arguments) || this;
t.view = {};
return t;
}
Object.defineProperty(o.prototype, "winsize", {
get: function() {
return t.FGUI.getSize(t.App.inst.root);
},
enumerable: !1,
configurable: !0
});
o.prototype.bindUI = function(t) {
n.prototype.bindUI.call(this, t);
this.view = i.bindRoot(this.fguiObject);
this.view[this.node.name] = this.node;
this.onUIBinded();
};
o.prototype.onUIBinded = function() {};
o.prototype.initUI = function() {};
o.prototype.onDestroy = function() {};
o.prototype.callbackPolaris = function(t, e) {
var i = this;
return function(n) {
t.call(i, n, e);
};
};
o.prototype.addClick = function(t, i) {
e.UIFunction.staticInstance.addClick(t, this.callbackPolaris(i, t));
};
o.prototype.setActive = function(i, n) {
e.UIFunction.staticInstance.nodeIsExist(i) && (i instanceof fgui.GObject ? i instanceof fgui.GGroup ? i.visible = n : t.UGOHelper.setActive(t.castGObjectToGameObject(i), n) : t.UGOHelper.setActive(i, n));
};
o.prototype.isActive = function(i) {
return !!e.UIFunction.staticInstance.nodeIsExist(i) && (i instanceof fgui.GObject ? i instanceof fgui.GGroup ? i.visible : t.UGOHelper.isActive(t.castGObjectToGameObject(i)) : t.UGOHelper.isActive(i));
};
o.prototype.setText = function(t, i) {
e.UIFunction.staticInstance.setText(t, i);
};
o.prototype.getText = function(t) {
return e.UIFunction.staticInstance.getText(t);
};
o.prototype.setSprite = function(t, i) {
e.UIFunction.staticInstance.setSprite(t, i);
};
o.prototype.setSpriteAsync = function(t, i) {
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function(n) {
switch (n.label) {
case 0:
return [ 4, e.UIFunction.staticInstance.setSpriteAsync(t, i) ];

case 1:
return [ 2, n.sent() ];
}
});
});
};
o.prototype.setSpriteFromAtlas = function(t, i, n) {
e.UIFunction.staticInstance.setSpriteFromAtlas(t, i, n);
};
o.prototype.judgePosInArea = function(t, i) {
return e.UIFunction.staticInstance.judgePosInArea(t, i);
};
o.prototype.setProcess = function(e, i) {
var n = t.castToGObject(e).asProgress;
n && (n.value = i);
};
o.prototype.setOpacity = function(e, i) {
t.castToGObject(e).alpha = i;
};
o.prototype.enabledSprite = function(e) {
var i = t.castToGObject(e);
if (i) {
i.enabled = !0;
i.grayed = !1;
}
};
o.prototype.unabledSprite = function(e) {
var i = t.castToGObject(e);
if (i) {
i.enabled = !1;
i.grayed = !0;
}
};
o.prototype.replaceView = function(e, i) {
if (i) {
var n = t.castToGObject(i);
if (null != n) {
var o = e.parent;
if (null != o) {
var r = t.FGUI.getChildIndex(o, e);
t.FGUI.removeChild(o, e, !0);
t.FGUI.addChildAt(o, n, r);
}
}
}
};
return o;
}(t.ExtensionBase);
e.UIExtension = n;
})(t.mvc || (t.mvc = {}));
})(gameframe || (gameframe = {}));
(function(t) {
(function(e) {
var i = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._musicVolume = 1;
t._effectVolume = 1;
t._clipMap = new Map();
t._controller = null;
t._controllerMusic = null;
t._controllerEffect = null;
return t;
}
i.prototype.init = function() {
this._audio = new t.adaptor.Audio();
this.playMusicOnShow(!0);
};
i.prototype.playMusicOnShow = function(t) {
var e = this;
if (t) this._cancelHandleEvent || (this._cancelHandleEvent = gameframe.Event.handleGameEvent(gameframe.Event.onShow, function() {
e._curMusic && e.playMusic(e._curMusic.fileName, e._curMusic.gameName);
})); else if (this._cancelHandleEvent) {
this._cancelHandleEvent();
this._cancelHandleEvent = null;
}
};
i.prototype.setAudioController = function(t) {
if (t) {
this._controller = t;
this._controllerMusic = t.music;
this._controllerEffect = t.effect;
this._musicVolume = t.getMusicVolume();
this._effectVolume = t.getEffectVolume();
this._audio.setMusicVolume(this._musicVolume);
this._audio.setEffectsVolume(this._effectVolume);
this.playMusicOnShow(!0);
} else {
this._controller = null;
this._controllerMusic = null;
this._controllerEffect = null;
this._musicVolume = 0;
this._effectVolume = 0;
this.playMusicOnShow(!1);
}
};
i.prototype.playDefMusic = function(t, e) {
var i;
void 0 === e && (e = "lobby");
if (null === (i = this._controller) || void 0 === i ? void 0 : i.setDefMusic) {
this.stopMusic();
this._controller.setDefMusic(!0);
} else t && this.playMusic(t, e);
};
i.prototype.stopMusic = function() {
if (this._controllerMusic) this._controllerMusic.stopMusic(); else {
this._curMusic = null;
this._audio.stopMusic();
}
};
i.prototype.pauseMusic = function() {
this._controllerMusic ? this._controllerMusic.pauseMusic() : this._audio.pauseMusic();
};
i.prototype.resumeMusic = function() {
this._controllerMusic ? this._controllerMusic.resumeMusic() : this._audio.resumeMusic();
};
i.prototype.playMusic = function(t, e, i) {
var n, o = this;
void 0 === e && (e = "lobby");
void 0 === i && (i = !0);
if (t && "" != t) {
t = this._audio.fixPath(t);
var r = this._clipMap.get(e);
if (!r) {
r = new Map();
this._clipMap.set(e, r);
}
this._lastMusic = this._curMusic;
this._curMusic = {
fileName: t,
gameName: e
};
var s = r.get(t);
if (null == s) {
r.set(t, !0);
this._assetPlugin.loadAsset(e, "sound/".concat(t), gameframe.Assets.AudioClip).then(function(e) {
var n;
if (e) {
(null === (n = o._controller) || void 0 === n ? void 0 : n.setDefMusic) && o._controller.setDefMusic(!1);
r.set(t, e);
if (o._controllerMusic) o._controllerMusic.playMusic(e, i); else {
o._audio.playMusic(e, i);
o._audio.setMusicVolume(o._musicVolume);
}
}
});
} else {
if (1 == s) return;
(null === (n = this._controller) || void 0 === n ? void 0 : n.setDefMusic) && this._controller.setDefMusic(!1);
if (this._controllerMusic) this._controllerMusic.playMusic(s, i); else {
this._audio.playMusic(s, i);
this._audio.setMusicVolume(this._musicVolume);
}
}
}
};
i.prototype.playLastMusic = function() {
this._lastMusic && this.playMusic(this._lastMusic.fileName, this._lastMusic.gameName);
};
i.prototype.playEffect = function(t, e, i) {
var n = this;
void 0 === e && (e = "lobby");
void 0 === i && (i = !1);
if (!(this._effectVolume <= 0) && t && "" != t) {
t = this._audio.fixPath(t);
var o = this._clipMap.get(e);
if (!o) {
o = new Map();
this._clipMap.set(e, o);
}
var r = o.get(t);
if (null == r) {
o.set(t, !0);
this._assetPlugin.loadAsset(e, "sound/".concat(t), gameframe.Assets.AudioClip).then(function(e) {
if (e) {
o.set(t, e);
n._controllerEffect ? n._controllerEffect.playEffect(e, i) : n._audio.playEffect(e, i);
}
});
} else {
if (1 == r) return;
this._controllerEffect ? this._controllerEffect.playEffect(r, i) : this._audio.playEffect(r, i);
}
}
};
i.prototype.stopEffect = function(t, e) {
void 0 === e && (e = "lobby");
this._effectVolume;
};
i.prototype.stopAllEffects = function() {
this._controllerEffect ? this._controllerEffect.stopAllEffects() : this._audio.stopAllEffects();
};
i.prototype.preloadSound = function(t, e) {
void 0 === e && (e = "lobby");
t = this._audio.fixPath(t);
var i = this._clipMap.get(e);
if (!i) {
i = new Map();
this._clipMap.set(e, i);
}
null == this._clipMap.get(t) && this._assetPlugin.preloadAsset(e, "sound/".concat(t), gameframe.Assets.AudioClip);
};
i.prototype.clearPreloadSound = function(t) {
void 0 === t && (t = "lobby");
var e = this._clipMap.get(t);
if (e) {
e.forEach(function() {});
this._clipMap.clear();
}
};
i.prototype.setMusicVolume = function(t) {
var e;
this._musicVolume = t;
this._audio.setMusicVolume(t);
null === (e = this._controller) || void 0 === e || e.setMusicVolume(t);
};
i.prototype.setEffectsVolume = function(t) {
var e;
this._effectVolume = t;
this._audio.setEffectsVolume(t);
null === (e = this._controller) || void 0 === e || e.setEffectVolume(t);
};
i.prototype.getMusicVolume = function() {
return this._audio.getMusicVolume();
};
i.prototype.getEffectsVolume = function() {
return this._audio.getEffectsVolume();
};
i.prototype.stopAndClear = function() {
this._audio.stopAllEffects();
this._audio.stopMusic();
this._curMusic = null;
this._audio.clearAll && this._audio.clearAll(this._clipMap);
this._clipMap = new Map();
};
i.prototype.ClearByBundle = function(t) {
var e = this;
this._clipMap.forEach(function(i, n) {
var o;
t.lastIndexOf(n) >= 0 && (null === (o = e._clipMap) || void 0 === o || o.set(n, new Map()));
});
};
__decorate([ gameframe.aware(gameframe.IAssetPlugin) ], i.prototype, "_assetPlugin", void 0);
__decorate([ gameframe.init ], i.prototype, "init", null);
return __decorate([ gameframe.plugin(gameframe.ISound) ], i);
}(gameframe.ISound);
e.SoundManager = i;
})(t.__Plugin_Event_ || (t.__Plugin_Event_ = {}));
})(__inner_gf || (__inner_gf = {}));
(function(t) {
var e = __inner_gf.adaptor.storage, i = function() {
function i() {}
i.setInt = function(i, n) {
t.sys.isWeiXin ? this.setStorageSync(i, n.toString()) : e.setInt(i, n);
};
i.getInt = function(i, n) {
void 0 === n && (n = 0);
if (t.sys.isWeiXin) {
var o = this.getStorageSync(i);
return o ? parseInt(o) : n;
}
return e.getInt(i, n);
};
i.setFloat = function(i, n) {
t.sys.isWeiXin ? this.setStorageSync(i, n.toString()) : e.setFloat(i, n);
};
i.getFloat = function(i, n) {
void 0 === n && (n = 0);
if (t.sys.isWeiXin) {
var o = this.getStorageSync(i);
return o ? Number(o) : n;
}
return e.getFloat(i, n);
};
i.setString = function(i, n) {
t.sys.isWeiXin ? this.setStorageSync(i, n) : e.setString(i, n);
};
i.getString = function(i, n) {
void 0 === n && (n = "");
return t.sys.isWeiXin ? this.getStorageSync(i) || n : e.getString(i, n);
};
i.removeStorage = function(i) {
if (i) {
if (t.sys.isWeiXin) {
try {
window.wx.removeStorageSync(i);
} catch (t) {
console.error(t);
}
return;
}
e.deleteKey(i);
}
};
i.clearStorage = function() {
if (t.sys.isWeiXin) try {
window.wx.clearStorageSync();
} catch (t) {
console.error(t);
} else e.clearStorage();
};
i.setStorageSync = function(i, n) {
if (t.sys.isWeiXin) try {
window.wx.setStorageSync(i, n);
} catch (t) {
console.error(t);
}
e.setString(i, n);
};
i.getStorageSync = function(i) {
if (t.sys.isWeiXin) try {
return window.wx.getStorageSync(i);
} catch (t) {
console.error(t);
}
return e.getString(i, null);
};
return i;
}();
t.LocalStorage = i;
})(gameframe || (gameframe = {}));
(function(t) {
t.SocketState = __inner_gf._interfaces.SocketState;
var e = __inner_gf._interfaces.ConnectType, i = __inner_gf.adaptor.WebSocketImpl, n = function() {
function i() {}
i.prototype.connect = function(e, i) {
var n = window.wx;
this._socketTask = n.connectSocket({
url: e
});
var o = this._socketTask;
if (null != o) {
this._socketState = t.SocketState.CONNECTING;
this._callback = i;
var r = this, s = function() {
var e;
r._socketState = t.SocketState.CLOSING;
null === (e = r._socketTask) || void 0 === e || e.close({
code: 1e3,
complete: function() {
var t;
null === (t = r._callback) || void 0 === t || t.onClose(1e3, "NetworkStatusChange", !1);
r._callback = null;
}
});
r._socketTask = void 0;
if (r._onNetworkStatusChange) {
n.offNetworkStatusChange(r._onNetworkStatusChange);
r._onNetworkStatusChange = null;
}
};
o.onOpen(function() {
var e;
r._socketState = t.SocketState.OPEN;
null === (e = r._callback) || void 0 === e || e.onOpen();
console.log("[WeiXinWebSocket]connect onOpen");
n.onNetworkStatusChange(s);
r._onNetworkStatusChange = s;
});
o.onMessage(function(t) {
var e;
null === (e = r._callback) || void 0 === e || e.onMessage(t.data);
});
o.onError(function(e) {
var i, o;
if (r._onNetworkStatusChange) {
n.offNetworkStatusChange(r._onNetworkStatusChange);
r._onNetworkStatusChange = null;
}
null === (i = r._socketTask) || void 0 === i || i.close({
code: 1e3
});
r._socketTask = void 0;
r._socketState = t.SocketState.ERROR;
null === (o = r._callback) || void 0 === o || o.onError(e.errMsg);
r._callback = null;
console.log("[WeiXinWebSocket]connect onError:" + e.errMsg);
});
o.onClose(function(e) {
var i;
if (r._onNetworkStatusChange) {
n.offNetworkStatusChange(r._onNetworkStatusChange);
r._onNetworkStatusChange = null;
}
r._socketTask = void 0;
r._socketState = t.SocketState.CLOSED;
null === (i = r._callback) || void 0 === i || i.onClose(e.code, e.reason, !1);
r._callback = null;
console.log("[WeiXinWebSocket]connect onClose" + e.reason);
});
} else null == i || i.onError("[WeiXinWebSocket]connect failed, url=" + e);
};
i.prototype.send = function(t) {
var e;
null === (e = this._socketTask) || void 0 === e || e.send({
data: t.buffer
});
};
i.prototype.close = function() {
var e;
try {
var i = window.wx;
if (this._onNetworkStatusChange) {
i.offNetworkStatusChange(this._onNetworkStatusChange);
this._onNetworkStatusChange = null;
}
this._socketState = t.SocketState.CLOSING;
null === (e = this._socketTask) || void 0 === e || e.close({
code: 1e3
});
this._socketTask = void 0;
this._callback = null;
} catch (t) {
console.error("error while closing webSocket");
}
};
i.prototype.getState = function() {
return this._socketState;
};
i.prototype.getConnectType = function() {
return e.EWxWebScoekt;
};
return i;
}(), o = function() {
function o(t, i) {
this._needConnect = !0;
this._heartBeatHandler = -1;
this._retryCount = 0;
this._connectType = e.EBrowserWebSocket;
this._url = i;
this._delegate = t;
}
o.prototype.connect = function(e) {
e && (this._url = e);
var r = this;
r._needConnect = !0;
var s = {
onOpen: function() {
r._delegate.onSocketOpen(r);
},
onMessage: function(t) {
r._delegate.onSocketReceiveMessage(t, r);
},
onError: function(e) {
t.DEBUG() && console.log("[socket] ws.onerror ".concat(r._url, ", ").concat(e));
r._delegate.onSocketError(e, r);
r._webSocket = null;
},
onClose: function(e, i, n) {
r.socketClosed(r._needConnect, i);
t.DEBUG() && console.log("[socket] ws.onclose ".concat(r._url, ",code:").concat(e, ",reason:").concat(i, ",wasClean:").concat(n));
r._webSocket = null;
}
};
if (t.sys.isWeiXin) {
this._webSocket && this._webSocket.close();
(a = new n()).connect(this._url, s);
this._webSocket = a;
} else {
try {
var a;
(a = new i(o.CertificateUrl)).connect(this._url, s);
this._webSocket = a;
return;
} catch (t) {
console.error("error create connect webSocket", t);
}
this._delegate.onSocketError("no Socket", this);
}
};
o.prototype.socketClosed = function(t, e) {
if (t) {
this._webSocket = void 0;
this._delegate.onSocketClosed(e, this);
}
};
o.prototype.send = function(t) {
var e;
this._webSocket ? null === (e = this._webSocket) || void 0 === e || e.send(t) : console.error("send No webSocket");
};
o.prototype.close = function(t) {
void 0 === t && (t = !1);
if (this._webSocket) {
var e = this._webSocket;
this._webSocket = null;
try {
this._needConnect = t;
e.close();
} catch (t) {
console.error("error while closing webSocket");
}
}
};
o.prototype.getState = function() {
return this._webSocket ? this._webSocket.getState() : t.SocketState.CLOSED;
};
return o;
}();
t.WbSocket = o;
})(gameframe || (gameframe = {}));
(function(t) {
(function(t) {
var e = function() {
function t() {
this._musicVolume = 1;
this._effectVolume = 1;
this._effectAudios = new Array();
}
t.prototype.createAudioContext = function() {
return wx.createInnerAudioContext();
};
t.prototype.stopMusic = function() {
if (this._musicAudio) {
this._musicAudio.offError(this.onMusicError.bind(this));
this._musicAudio.destroy();
this._musicAudio = null;
}
};
t.prototype.pauseMusic = function() {
this._musicAudio && this._musicAudio.pause();
};
t.prototype.resumeMusic = function() {
if (this._musicAudio) {
if (0 == this._musicAudio.src.length) return;
this._musicAudio.play();
}
};
t.prototype.playMusic = function(t) {
if (!this._musicAudio) {
this._musicAudio = this.createAudioContext();
this._musicAudio && this._musicAudio.onError && this._musicAudio.onError(this.onMusicError.bind(this));
}
if (this._musicAudio) {
this._musicAudio.src = t;
this._musicAudio.loop = !0;
this._musicAudio.volume = this._musicVolume;
this._musicAudio.startTime = 0;
this._musicAudio.autoplay = !0;
this._musicAudio.play();
}
};
t.prototype.playEffect = function(t) {
if (this._effectAudios.length < 8) {
var e = this.createAudioContext();
e.volume = this._effectVolume;
var i = {
onCompelet: null,
channel: e,
isPlaying: !0
};
i.onCompelet = function() {
i.isPlaying = !1;
};
e.onEnded(i.onCompelet);
e.onError(i.onCompelet);
e.onError(i.onCompelet);
i.channel.loop = !1;
i.channel.src = t;
i.channel.play();
this._effectAudios.push(i);
} else {
for (var n = 0; n < this._effectAudios.length; n++) {
var o = this._effectAudios[n];
if (!o.isPlaying) {
o.channel.src = t;
o.channel.seek(0);
o.channel.play();
o.channel.volume = this._effectVolume;
o.isPlaying = !0;
return;
}
}
console.log("no free channel to play effect");
}
};
t.prototype.stopAllEffects = function() {
for (var t = 0; t < this._effectAudios.length; t++) {
var e = this._effectAudios[t];
e.channel && e.channel.destroy();
}
this._effectAudios.length = 0;
};
t.prototype.setMusicVolume = function(t) {
this._musicVolume = t;
this._musicAudio && (this._musicAudio.volume = t);
};
t.prototype.setEffectsVolume = function(t) {
this._effectVolume = t;
for (var e = 0; e < this._effectAudios.length; e++) {
var i = this._effectAudios[e];
i.channel && (i.channel.volume = t);
}
};
t.prototype.getMusicVolume = function() {
return this._musicVolume;
};
t.prototype.getEffectsVolume = function() {
return this._effectVolume;
};
t.prototype.onMusicError = function(t) {
console.warn("play bg", t);
};
t.prototype.fixPath = function(t) {
return t;
};
return t;
}();
t.WxAudio = e;
})(t.__base || (t.__base = {}));
})(__inner_gf || (__inner_gf = {}));
var highResFiles = [], texCache = {}, cachedHighResFiles = [], loaded = !1;
window.ccBundleHooked = !0;
"undefined" == typeof window.ccBundleHooked && (window.ccBundleHooked = !1);
if (!window.ccBundleHooked) {
window.ccBundleHooked = !0;
gameframe.enableHighResReplace = !0;
function formHighResPath(t, e) {
var i = t.split("_");
return 1 == i.length ? "".concat(t, "/").concat(e) : "game-".concat(i[0], "/").concat(i[1], "/").concat(e);
}
function formUrl(t) {
var e, i = t.config;
e = t.isNative ? i && i.nativeBase ? i.base + i.nativeBase : cc.assetManager.generalNativeBase : i && i.importBase ? i.base + i.importBase : cc.assetManager.generalImportBase;
var n = t.uuid, o = "";
t.info && (o = t.isNative ? t.info.nativeVer ? "." + t.info.nativeVer : "" : t.info.ver ? "." + t.info.ver : "");
return ".ttf" === t.ext ? "".concat(e, "/").concat(n.slice(0, 2), "/").concat(n).concat(o, "/").concat(t.options.__nativeName__) : "".concat(e, "/").concat(n.slice(0, 2), "/").concat(n).concat(o).concat(t.ext);
}
function loadHighResFile(t, e) {
console.log("loading high res file, ori path = " + e);
if (highResFiles.includes(e)) {
var i = {
bundleName: "high-res",
url: formHighResPath(t, e)
};
console.log("found high res file, cur path = " + i.url);
gameframe.ResourceLoader.LoadAsset(i, cc.Texture2D, function(t) {
console.log("id = " + t._texture._glID);
if (texCache.hasOwnProperty(e)) {
texCache[e]._glID = t._texture._glID;
delete texCache[e];
var i = highResFiles.indexOf(e);
-1 !== i && highResFiles.splice(i, 1);
0 == highResFiles.length && console.log("high res files all loaded and replaced, clear!");
} else console.error("low res tex not found, path = " + e);
});
return !0;
}
return !1;
}
function cacheRes(t, e) {
t.ext = e;
if (cc.assetManager.cacheManager) {
var i = formUrl(t);
console.log("Bundle 'high-res' found ".concat(t.path, ", url is ").concat(i));
var n = cc.assetManager.cacheManager.getCache(i);
if (n) {
console.log("".concat(t.path, " cache path is ").concat(n));
return !0;
}
}
console.log("".concat(t.path, " is not cached"));
return !1;
}
cc.AssetManager.Bundle.prototype.hook_get = function(t, e) {
var i = loadHighResFile(this.name, t), n = this._originalGet(t, e);
if ("high-res" !== this.name && i) {
var o = n._texture;
o && (texCache[t] = o);
}
return n;
};
cc.AssetManager.Bundle.prototype.hook_load = function(t, e, i, n) {
var o = this, r = Array.isArray(t) ? t : [ t ], s = cc.assetManager.getBundle("high-res");
"high-res" !== this.name && s && r.forEach(function(t) {
var a = t;
if (highResFiles.includes(a)) {
t = formHighResPath(o.name, t);
var l = s._config, h = l.getInfoWithPath(t, e);
if (h && h.redirect) {
var c = cc.assetManager.getBundle(h.redirect);
if (!c) throw new Error("you need to load bundle ".concat(h.redirect, " first"));
h = (l = c._config).getAssetInfo(h.uuid);
}
if (h) {
var u = {};
u.config = l;
u.uuid = h.uuid;
u.info = h;
u.isNative = !0;
u.path = t;
var p = cacheRes(u, ".astc");
p || (p = cacheRes(u, ".png"));
if (p) {
console.log("".concat(t, " is cached, direct load high res"));
s._originalLoad(t, e, i, n);
cachedHighResFiles.push(a);
var d = r.indexOf(a);
-1 !== d && r.splice(d, 1);
}
}
} else console.log("".concat(a, " assets is not tex or not contained in high res"));
});
if (0 !== r.length) {
console.log("".concat(r.length, " assets left for low-res load, res is ").concat(r));
this._originalLoad(Array.isArray(t) ? r : r[0], e, i, n);
}
};
cc.AssetManager.Bundle.prototype._originalLoad = cc.AssetManager.Bundle.prototype.load;
cc.AssetManager.Bundle.prototype.load = function(t, e, i, n) {
var o = this;
if (gameframe.enableHighResReplace) if (loaded || "high-res" === this.name) "high-res" === this.name ? this._originalLoad(t, e, i, n) : this.hook_load(t, e, i, n); else {
loaded = !0;
console.log("loading high res config");
gameframe.ResourceLoader.LoadAsset({
bundleName: "high-res",
url: "high-res"
}, cc.JsonAsset, function(r) {
if (r) {
r.json.forEach(function(t) {
highResFiles.push(t);
});
o.hook_load(t, e, i, n);
} else {
console.log("high res bundle or config not found");
gameframe.enableHighResReplace = !1;
o._originalLoad(t, e, i, n);
}
});
} else this._originalLoad(t, e, i, n);
};
cc.AssetManager.Bundle.prototype._originalGet = cc.AssetManager.Bundle.prototype.get;
cc.AssetManager.Bundle.prototype.get = function(t, e) {
if ("high-res" !== this.name && gameframe.enableHighResReplace) {
if (cachedHighResFiles.includes(t)) {
console.log("get high res file directly for ".concat(t));
return cc.assetManager.getBundle("high-res")._originalGet(formHighResPath(this.name, t), e);
}
return this.hook_get(t, e);
}
return this._originalGet(t, e);
};
}
return gameframe;
};
cc._RF.pop();
}, {} ]
}, {}, [ "GFComponent", "GFComponent_NodeLisnter", "gfplugin_long", "gfplugin_protobuf", "lianyun_fairygui", "lianyun_gameframe" ]);