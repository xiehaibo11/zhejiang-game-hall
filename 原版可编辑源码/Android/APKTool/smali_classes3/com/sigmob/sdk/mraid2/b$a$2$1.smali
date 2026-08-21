.class Lcom/sigmob/sdk/mraid2/b$a$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/b$a$2;->a(Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lorg/json/JSONObject;

.field final synthetic b:Lcom/sigmob/sdk/mraid2/b$a$2;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/b$a$2;Lorg/json/JSONObject;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b$a$2$1;->b:Lcom/sigmob/sdk/mraid2/b$a$2;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/b$a$2$1;->a:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a$2$1;->b:Lcom/sigmob/sdk/mraid2/b$a$2;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid2/b$a$2;->a:Lcom/sigmob/sdk/mraid2/b$a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/b$a$2$1;->a:Lorg/json/JSONObject;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/b;->b(Lorg/json/JSONObject;)V

    return-void
.end method
