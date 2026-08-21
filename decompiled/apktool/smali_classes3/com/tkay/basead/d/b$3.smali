.class final Lcom/tkay/basead/d/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/b;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/b;)V
    .locals 0

    .line 328
    iput-object p1, p0, Lcom/tkay/basead/d/b$3;->a:Lcom/tkay/basead/d/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 331
    iget-object v0, p0, Lcom/tkay/basead/d/b$3;->a:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 332
    iget-object v0, p0, Lcom/tkay/basead/d/b$3;->a:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->h:Lcom/tkay/basead/e/a;

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/tkay/basead/e/a;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 347
    iget-object v0, p0, Lcom/tkay/basead/d/b$3;->a:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 348
    iget-object v0, p0, Lcom/tkay/basead/d/b$3;->a:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
