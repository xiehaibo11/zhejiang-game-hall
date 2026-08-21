.class Lcom/bykv/vk/openvk/df/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/RejectedExecutionHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/df/rg;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/df/rg;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/df/rg;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/bykv/vk/openvk/df/rg$1;->rg:Lcom/bykv/vk/openvk/df/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rejectedExecution(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V
    .locals 0

    const-string p1, "TTThreadManager"

    const-string p2, "TTThreadManager rejectedExecution:  "

    .line 44
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
