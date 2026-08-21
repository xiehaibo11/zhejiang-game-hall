.class Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;
.super Ljava/lang/Object;
.source "YmnSdkWrapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$args:[Ljava/lang/String;

.field final synthetic val$functionName:Ljava/lang/String;


# direct methods
.method constructor <init>([Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$args:[Ljava/lang/String;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$functionName:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$args:[Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->isJsonParamers([Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$functionName:Ljava/lang/String;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$args:[Ljava/lang/String;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_0

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$functionName:Ljava/lang/String;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;->val$args:[Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;[Ljava/lang/String;)V

    :goto_0
    return-void
.end method
