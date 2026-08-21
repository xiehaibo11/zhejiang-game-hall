.class Lcom/sigmob/sdk/videocache/o$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videocache/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videocache/o;


# direct methods
.method private constructor <init>(Lcom/sigmob/sdk/videocache/o;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/o$a;->a:Lcom/sigmob/sdk/videocache/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/sigmob/sdk/videocache/o;Lcom/sigmob/sdk/videocache/o$1;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/videocache/o$a;-><init>(Lcom/sigmob/sdk/videocache/o;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o$a;->a:Lcom/sigmob/sdk/videocache/o;

    invoke-static {v0}, Lcom/sigmob/sdk/videocache/o;->a(Lcom/sigmob/sdk/videocache/o;)V

    return-void
.end method
