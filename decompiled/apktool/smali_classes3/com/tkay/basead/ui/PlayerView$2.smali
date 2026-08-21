.class final Lcom/tkay/basead/ui/PlayerView$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/PlayerView;->j()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/PlayerView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/PlayerView;)V
    .locals 0

    .line 402
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView$2;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 405
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$2;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object v0

    const-string v1, "40002"

    const-string v2, "Video player error!Buffer timeout"

    invoke-static {v1, v2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/basead/ui/PlayerView$a;->a(Lcom/tkay/basead/c/e;)V

    return-void
.end method
