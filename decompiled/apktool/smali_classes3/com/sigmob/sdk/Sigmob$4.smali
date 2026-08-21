.class Lcom/sigmob/sdk/Sigmob$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/Sigmob;->init()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/Sigmob;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/Sigmob;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/Sigmob$4;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob$4;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-static {v0}, Lcom/sigmob/sdk/Sigmob;->c(Lcom/sigmob/sdk/Sigmob;)V

    return-void
.end method
