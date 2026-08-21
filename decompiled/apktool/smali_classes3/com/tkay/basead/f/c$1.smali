.class final Lcom/tkay/basead/f/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/b/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/f/c;->a(Lcom/tkay/basead/e/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/e/c;

.field final synthetic b:Lcom/tkay/basead/f/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/c;Lcom/tkay/basead/e/c;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/basead/f/c$1;->b:Lcom/tkay/basead/f/c;

    iput-object p2, p0, Lcom/tkay/basead/f/c$1;->a:Lcom/tkay/basead/e/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 57
    iget-object v0, p0, Lcom/tkay/basead/f/c$1;->a:Lcom/tkay/basead/e/c;

    if-eqz v0, :cond_0

    .line 58
    invoke-interface {v0}, Lcom/tkay/basead/e/c;->onAdCacheLoaded()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/basead/f/c$1;->a:Lcom/tkay/basead/e/c;

    if-eqz v0, :cond_0

    .line 65
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method
