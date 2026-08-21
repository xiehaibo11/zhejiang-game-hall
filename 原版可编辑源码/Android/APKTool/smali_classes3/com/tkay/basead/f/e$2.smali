.class final Lcom/tkay/basead/f/e$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/f/e;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/basead/f/e;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/e;I)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/basead/f/e$2;->b:Lcom/tkay/basead/f/e;

    iput p2, p0, Lcom/tkay/basead/f/e$2;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 68
    iget-object v0, p0, Lcom/tkay/basead/f/e$2;->b:Lcom/tkay/basead/f/e;

    iget-object v0, v0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 69
    iget-object v0, p0, Lcom/tkay/basead/f/e$2;->b:Lcom/tkay/basead/f/e;

    iget-object v0, v0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

    iget v1, p0, Lcom/tkay/basead/f/e$2;->a:I

    invoke-interface {v0, v1}, Lcom/tkay/basead/e/a;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/f/e$2;->b:Lcom/tkay/basead/f/e;

    iget-object v0, v0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/f/e$2;->b:Lcom/tkay/basead/f/e;

    iget-object v0, v0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

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
