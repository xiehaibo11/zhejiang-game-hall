.class final Lcom/sigmob/sdk/mraid/a$c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/a;


# direct methods
.method private constructor <init>(Lcom/sigmob/sdk/mraid/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/a$c;->a:Lcom/sigmob/sdk/mraid/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/sigmob/sdk/mraid/a;Lcom/sigmob/sdk/mraid/a$1;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/a$c;-><init>(Lcom/sigmob/sdk/mraid/a;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a$c;->a:Lcom/sigmob/sdk/mraid/a;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/a;->a(Lcom/sigmob/sdk/mraid/a;Z)V

    return-void
.end method
