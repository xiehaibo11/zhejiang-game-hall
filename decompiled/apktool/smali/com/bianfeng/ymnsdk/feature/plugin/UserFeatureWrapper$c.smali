.class Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;
.super Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
.source "UserFeatureWrapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
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
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 42
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 2
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 45
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginSdkReturn(ILjava/lang/String;)V

    .line 46
    const/16 v0, 0x6b

    if-eq p1, v0, :cond_0

    const/16 v0, 0x73

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    .line 61
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    goto :goto_0

    .line 48
    :pswitch_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    iget-object v1, v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->d:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    invoke-static {p2, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

    .line 49
    goto :goto_0

    .line 57
    :pswitch_1
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    .line 58
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->initSdkResturn(ILjava/lang/String;)V

    .line 59
    goto :goto_0

    .line 52
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    .line 53
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    .line 54
    nop

    .line 64
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x64
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
