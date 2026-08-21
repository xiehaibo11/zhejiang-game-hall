.class Lcom/sigmob/sdk/mraid2/b$a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/b$a;->postMessage(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/b;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/mraid2/b$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/b$a;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b$a$3;->c:Lcom/sigmob/sdk/mraid2/b$a;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/b$a$3;->a:Lcom/sigmob/sdk/mraid2/b;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/b$a$3;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a$3;->a:Lcom/sigmob/sdk/mraid2/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/b$a$3;->b:Ljava/lang/String;

    invoke-static {v0, v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V

    return-void
.end method
