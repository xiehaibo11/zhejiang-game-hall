.class Lcom/igexin/assist/control/huawei/a;
.super Ljava/lang/Thread;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/igexin/assist/control/huawei/HmsPushManager;


# direct methods
.method constructor <init>(Lcom/igexin/assist/control/huawei/HmsPushManager;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    iput-object p2, p0, Lcom/igexin/assist/control/huawei/a;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    invoke-static {v0}, Lcom/igexin/assist/control/huawei/HmsPushManager;->a(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v1, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    invoke-static {v1}, Lcom/igexin/assist/control/huawei/HmsPushManager;->b(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    iget-object v2, p0, Lcom/igexin/assist/control/huawei/a;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/huawei/agconnect/config/AGConnectServicesConfig;->fromContext(Landroid/content/Context;)Lcom/huawei/agconnect/config/AGConnectServicesConfig;

    move-result-object v2

    const-string v3, "client/app_id"

    invoke-virtual {v2, v3}, Lcom/huawei/agconnect/config/AGConnectServicesConfig;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/igexin/assist/control/huawei/HmsPushManager;->a(Lcom/igexin/assist/control/huawei/HmsPushManager;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    iget-object v0, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    iget-object v1, p0, Lcom/igexin/assist/control/huawei/a;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/huawei/hms/aaid/HmsInstanceId;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/aaid/HmsInstanceId;

    move-result-object v1

    iget-object v2, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    invoke-static {v2}, Lcom/igexin/assist/control/huawei/HmsPushManager;->b(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "HCM"

    invoke-virtual {v1, v2, v3}, Lcom/huawei/hms/aaid/HmsInstanceId;->getToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/igexin/assist/control/huawei/HmsPushManager;->b(Lcom/igexin/assist/control/huawei/HmsPushManager;Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "Assist_HW"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get hms token:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    invoke-static {v2}, Lcom/igexin/assist/control/huawei/HmsPushManager;->c(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    invoke-static {v0}, Lcom/igexin/assist/control/huawei/HmsPushManager;->c(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Lcom/igexin/assist/MessageBean;

    iget-object v1, p0, Lcom/igexin/assist/control/huawei/a;->a:Landroid/content/Context;

    const-string v2, "token"

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "HW_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/igexin/assist/control/huawei/a;->b:Lcom/igexin/assist/control/huawei/HmsPushManager;

    invoke-static {v4}, Lcom/igexin/assist/control/huawei/HmsPushManager;->c(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_3
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get hms token failed:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Assist_HW"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void
.end method
