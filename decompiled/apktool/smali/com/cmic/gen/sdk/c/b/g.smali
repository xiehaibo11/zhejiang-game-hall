.class public abstract Lcom/cmic/gen/sdk/c/b/g;
.super Ljava/lang/Object;
.source "RequestParameter.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract a()Ljava/lang/String;
.end method

.method protected abstract a_(Ljava/lang/String;)Ljava/lang/String;
.end method

.method public abstract b()Lorg/json/JSONObject;
.end method

.method public v(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 17
    invoke-virtual {p0, p1}, Lcom/cmic/gen/sdk/c/b/g;->a_(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 18
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
