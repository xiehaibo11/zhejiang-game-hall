.class Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;
.super Ljava/lang/Object;
.source "DevicesIDsHelper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getIDFromNewThead(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

.field final synthetic val$context:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;Landroid/content/Context;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->val$context:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "ASUS"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 87
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->val$context:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->access$100(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->getID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto :goto_0

    .line 89
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "HUAWEI"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 90
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->val$context:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->access$100(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->getHWID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto :goto_0

    .line 92
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "OPPO"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 93
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->val$context:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->access$100(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/OppoDeviceIDHelper;->getID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)Ljava/lang/String;

    :cond_2
    :goto_0
    return-void
.end method
