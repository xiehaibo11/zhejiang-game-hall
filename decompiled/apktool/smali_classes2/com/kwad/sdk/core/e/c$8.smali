.class final Lcom/kwad/sdk/core/e/c$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/e/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aoI:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/e/c$8;->aoI:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/core/e/a/b;)V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/e/c;->access$000()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/e/c$8;->aoI:Ljava/lang/String;

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/core/e/a/b;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
