.class Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;
.super Ljava/lang/Object;
.source "UserFeatureWrapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->submitUserInfo(Ljava/util/LinkedHashMap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/LinkedHashMap;

.field final synthetic b:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;Ljava/util/LinkedHashMap;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 198
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;->a:Ljava/util/LinkedHashMap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 201
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;->a:Ljava/util/LinkedHashMap;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->submitUserInfo(Ljava/util/LinkedHashMap;)V

    .line 202
    return-void
.end method
