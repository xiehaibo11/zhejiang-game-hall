.class final Lcom/tkay/basead/ui/BaseSplashATView$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseSplashATView;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseSplashATView;)V
    .locals 0

    .line 274
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$4;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 277
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$4;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseSplashATView;->G:Lcom/tkay/basead/ui/b;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->c()V

    return-void
.end method
