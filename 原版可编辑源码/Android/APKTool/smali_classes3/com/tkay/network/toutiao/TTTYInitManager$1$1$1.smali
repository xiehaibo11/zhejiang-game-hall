.class final Lcom/tkay/network/toutiao/TTTYInitManager$1$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYInitManager$1$1;->success()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYInitManager$1$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYInitManager$1$1;)V
    .locals 0

    .line 192
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 195
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1$1;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->b(Lcom/tkay/network/toutiao/TTTYInitManager;)Z

    .line 196
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1$1;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-static {v0, v2, v1, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Lcom/tkay/network/toutiao/TTTYInitManager;ZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method
