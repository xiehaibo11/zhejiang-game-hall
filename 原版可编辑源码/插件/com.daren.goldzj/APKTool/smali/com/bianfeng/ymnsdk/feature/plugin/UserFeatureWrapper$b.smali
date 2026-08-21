.class Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;
.super Ljava/lang/Object;
.source "UserFeatureWrapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->login()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginStart(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->login()V

    return-void
.end method
