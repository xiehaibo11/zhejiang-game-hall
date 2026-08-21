.class Lcom/igexin/assist/control/vivo/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/IPushActionListener;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/igexin/assist/control/vivo/VivoPushManager;


# direct methods
.method constructor <init>(Lcom/igexin/assist/control/vivo/VivoPushManager;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/assist/control/vivo/b;->b:Lcom/igexin/assist/control/vivo/VivoPushManager;

    iput-object p2, p0, Lcom/igexin/assist/control/vivo/b;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onStateChanged(I)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "turnOffPush finish, state = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Assist_VV"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/igexin/assist/control/vivo/b;->a:Landroid/content/Context;

    if-eqz p1, :cond_0

    const-string p1, "turnOnPush token = \"false\""

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance p1, Lcom/igexin/assist/MessageBean;

    iget-object v0, p0, Lcom/igexin/assist/control/vivo/b;->a:Landroid/content/Context;

    const-string v1, "token"

    const-string v2, "false"

    invoke-direct {p1, v0, v1, v2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V

    :cond_0
    return-void
.end method
