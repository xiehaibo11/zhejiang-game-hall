.class Lcom/meizu/cloud/pushsdk/handler/a/f/a$2;
.super Landroid/content/BroadcastReceiver;


# instance fields
.field final synthetic a:Lcom/meizu/cloud/pushsdk/handler/a/f/a;


# direct methods
.method constructor <init>(Lcom/meizu/cloud/pushsdk/handler/a/f/a;)V
    .locals 0

    iput-object p1, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$2;->a:Lcom/meizu/cloud/pushsdk/handler/a/f/a;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string p2, "android.intent.action.USER_PRESENT"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$2;->a:Lcom/meizu/cloud/pushsdk/handler/a/f/a;

    invoke-static {p1}, Lcom/meizu/cloud/pushsdk/handler/a/f/a;->b(Lcom/meizu/cloud/pushsdk/handler/a/f/a;)V

    return-void
.end method
