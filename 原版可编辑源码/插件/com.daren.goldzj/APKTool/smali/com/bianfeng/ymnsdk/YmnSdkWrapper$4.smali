.class Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;
.super Ljava/lang/Object;
.source "YmnSdkWrapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$data:Ljava/util/LinkedHashMap;

.field final synthetic val$functionName:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;->val$functionName:Ljava/lang/String;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;->val$data:Ljava/util/LinkedHashMap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;->val$functionName:Ljava/lang/String;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;->val$data:Ljava/util/LinkedHashMap;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    return-void
.end method
