.class final Lcom/alipayopen/sdk/executor/AliPayHelper$1;
.super Ljava/util/HashMap;
.source "AliPayHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/alipayopen/sdk/executor/AliPayHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = 0x1L


# direct methods
.method constructor <init>()V
    .locals 2

    .line 27
    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    const-string v0, "9000"

    const-string v1, "\u64cd\u4f5c\u6210\u529f"

    .line 30
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "8000"

    const-string v1, "\u652f\u4ed8\u7ed3\u679c\u786e\u8ba4\u4e2d"

    .line 31
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4000"

    const-string v1, "\u7cfb\u7edf\u5f02\u5e38"

    .line 32
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4001"

    const-string v1, "\u6570\u636e\u683c\u5f0f\u4e0d\u6b63\u786e"

    .line 33
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4003"

    const-string v1, "\u8be5\u7528\u6237\u7ed1\u5b9a\u7684\u652f\u4ed8\u5b9d\u8d26\u6237\u88ab\u51bb\u7ed3\u6216\u4e0d\u5141\u8bb8\u652f\u4ed8"

    .line 34
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4004"

    const-string v1, "\u8be5\u7528\u6237\u5df2\u89e3\u9664\u7ed1\u5b9a"

    .line 35
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4005"

    const-string v1, "\u7ed1\u5b9a\u5931\u8d25\u6216\u6ca1\u6709\u7ed1\u5b9a"

    .line 36
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4006"

    const-string v1, "\u8ba2\u5355\u652f\u4ed8\u5931\u8d25"

    .line 37
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "4010"

    const-string v1, "\u91cd\u65b0\u7ed1\u5b9a\u8d26\u6237"

    .line 38
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "6000"

    const-string v1, "\u652f\u4ed8\u670d\u52a1\u6b63\u5728\u8fdb\u884c\u5347\u7ea7\u64cd\u4f5c"

    .line 39
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "6001"

    const-string v1, "\u7528\u6237\u4e2d\u9014\u53d6\u6d88\u652f\u4ed8\u64cd\u4f5c"

    .line 40
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "7001"

    const-string v1, "\u7f51\u9875\u652f\u4ed8\u5931\u8d25"

    .line 41
    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v0, 0x1

    .line 42
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "\u60a8\u7684\u8ba2\u5355\u4fe1\u606f\u5df2\u88ab\u975e\u6cd5\u7be1\u6539"

    invoke-virtual {p0, v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
