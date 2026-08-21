.class Lcom/sigmob/sdk/mraid/b$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/h$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/g;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/g;

.field final synthetic b:Lcom/sigmob/sdk/mraid/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b$5;->b:Lcom/sigmob/sdk/mraid/b;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/b$5;->a:Lcom/sigmob/sdk/mraid/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/mraid/c;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$5;->b:Lcom/sigmob/sdk/mraid/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b$5;->a:Lcom/sigmob/sdk/mraid/g;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/c;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/g;Ljava/lang/String;)V

    return-void
.end method
