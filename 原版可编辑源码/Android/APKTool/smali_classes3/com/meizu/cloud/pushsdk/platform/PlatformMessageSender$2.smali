.class final Lcom/meizu/cloud/pushsdk/platform/PlatformMessageSender$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/meizu/cloud/pushsdk/platform/PlatformMessageSender$a;


# instance fields
.field final synthetic a:Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;


# direct methods
.method constructor <init>(Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;)V
    .locals 0

    iput-object p1, p0, Lcom/meizu/cloud/pushsdk/platform/PlatformMessageSender$2;->a:Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "register_status"

    return-object v0
.end method

.method public b()Lcom/meizu/cloud/pushsdk/platform/message/BasicPushStatus;
    .locals 1

    iget-object v0, p0, Lcom/meizu/cloud/pushsdk/platform/PlatformMessageSender$2;->a:Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;

    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    const-string v0, "extra_app_push_register_status"

    return-object v0
.end method

.method public d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/meizu/cloud/pushsdk/platform/PlatformMessageSender$2;->a:Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;

    invoke-static {v0}, Lcom/meizu/cloud/pushsdk/platform/message/a;->a(Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
