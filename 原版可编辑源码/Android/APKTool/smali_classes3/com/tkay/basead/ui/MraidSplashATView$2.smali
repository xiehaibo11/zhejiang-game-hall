.class final Lcom/tkay/basead/ui/MraidSplashATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidSplashATView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MraidSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidSplashATView;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidSplashATView$2;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$2;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidSplashATView;->F:Lcom/tkay/basead/e/a;

    if-nez v0, :cond_0

    return-void

    .line 116
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$2;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidSplashATView;->b(Lcom/tkay/basead/ui/MraidSplashATView;)V

    return-void
.end method
