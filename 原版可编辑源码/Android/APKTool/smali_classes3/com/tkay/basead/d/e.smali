.class public final Lcom/tkay/basead/d/e;
.super Lcom/tkay/basead/d/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/d/b;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/basead/e/d;)V
    .locals 1

    .line 25
    new-instance v0, Lcom/tkay/basead/d/e$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/basead/d/e$1;-><init>(Lcom/tkay/basead/d/e;Lcom/tkay/basead/e/d;)V

    .line 45
    invoke-super {p0, v0}, Lcom/tkay/basead/d/b;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method
