.class public Lcom/cmic/gen/sdk/c/a/d;
.super Ljava/lang/Object;
.source "WifiChangeInterceptor.java"

# interfaces
.implements Lcom/cmic/gen/sdk/c/a/b;


# instance fields
.field private a:Lcom/cmic/gen/sdk/c/a/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/cmic/gen/sdk/c/a/b;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/a/d;->a:Lcom/cmic/gen/sdk/c/a/b;

    return-void
.end method

.method public a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V
    .locals 8

    .line 31
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->b()Z

    move-result v0

    if-nez v0, :cond_0

    .line 32
    invoke-virtual {p0, p1, p2, p3}, Lcom/cmic/gen/sdk/c/a/d;->b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 36
    invoke-static {v0}, Lcom/cmic/gen/sdk/e/r;->a(Landroid/content/Context;)Lcom/cmic/gen/sdk/e/r;

    move-result-object v0

    .line 37
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_1

    .line 38
    new-instance v7, Lcom/cmic/gen/sdk/c/a/d$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p3

    move-object v4, p1

    move-object v5, p2

    move-object v6, v0

    invoke-direct/range {v1 .. v6}, Lcom/cmic/gen/sdk/c/a/d$1;-><init>(Lcom/cmic/gen/sdk/c/a/d;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/e/r;)V

    invoke-virtual {v0, v7}, Lcom/cmic/gen/sdk/e/r;->a(Lcom/cmic/gen/sdk/e/r$a;)V

    goto :goto_0

    :cond_1
    const-string p1, "WifiChangeInterceptor"

    const-string p3, "\u4f4e\u7248\u672c\u4e0d\u5728\u652f\u6301wifi\u5207\u6362"

    .line 63
    invoke-static {p1, p3}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const p1, 0x1906c

    .line 64
    invoke-static {p1}, Lcom/cmic/gen/sdk/c/d/a;->a(I)Lcom/cmic/gen/sdk/c/d/a;

    move-result-object p1

    .line 65
    invoke-interface {p2, p1}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/a;)V

    :goto_0
    return-void
.end method

.method public b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V
    .locals 2

    .line 71
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/d;->a:Lcom/cmic/gen/sdk/c/a/b;

    if-eqz v0, :cond_0

    .line 72
    new-instance v1, Lcom/cmic/gen/sdk/c/a/d$2;

    invoke-direct {v1, p0, p2}, Lcom/cmic/gen/sdk/c/a/d$2;-><init>(Lcom/cmic/gen/sdk/c/a/d;Lcom/cmic/gen/sdk/c/d/c;)V

    invoke-interface {v0, p1, v1, p3}, Lcom/cmic/gen/sdk/c/a/b;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V

    :cond_0
    return-void
.end method
