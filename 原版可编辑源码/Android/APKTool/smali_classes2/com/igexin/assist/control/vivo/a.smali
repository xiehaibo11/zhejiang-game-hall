.class Lcom/igexin/assist/control/vivo/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/IPushActionListener;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/igexin/assist/control/vivo/VivoPushManager;


# direct methods
.method constructor <init>(Lcom/igexin/assist/control/vivo/VivoPushManager;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/assist/control/vivo/a;->b:Lcom/igexin/assist/control/vivo/VivoPushManager;

    iput-object p2, p0, Lcom/igexin/assist/control/vivo/a;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onStateChanged(I)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "turnOnPush finish, state = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Assist_VV"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/igexin/assist/control/vivo/a;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/vivo/push/PushClient;->getInstance(Landroid/content/Context;)Lcom/vivo/push/PushClient;

    move-result-object p1

    invoke-virtual {p1}, Lcom/vivo/push/PushClient;->getRegId()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "turnOnPush token = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/igexin/assist/control/vivo/a;->a:Landroid/content/Context;

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Lcom/igexin/assist/MessageBean;

    iget-object v1, p0, Lcom/igexin/assist/control/vivo/a;->a:Landroid/content/Context;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "VV_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "token"

    invoke-direct {v0, v1, v2, p1}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/assist/control/vivo/a;->b:Lcom/igexin/assist/control/vivo/VivoPushManager;

    invoke-static {p1, v0}, Lcom/igexin/assist/control/vivo/VivoPushManager;->a(Lcom/igexin/assist/control/vivo/VivoPushManager;Lcom/igexin/assist/MessageBean;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V

    goto :goto_0

    :cond_0
    const/16 v0, 0x65

    if-ne p1, v0, :cond_1

    const-string p1, "the vivo rom not support system push"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void
.end method
