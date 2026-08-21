.class Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;
.super Ljava/lang/Object;
.source "UserFeatureWrapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getVerifyRealNameInfo()V
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

    .line 145
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;->a:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->getVerifyRealNameInfo()V

    .line 149
    return-void
.end method
