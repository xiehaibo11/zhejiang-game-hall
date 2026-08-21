.class final Lcom/kwad/sdk/core/e/c$10;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/e/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/Throwable;)V
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

    iput-object p1, p0, Lcom/kwad/sdk/core/e/c$10;->aoI:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/core/e/a/b;)V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/e/c;->access$000()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/e/c$10;->aoI:Ljava/lang/String;

    sget-object v2, Lcom/kwad/sdk/core/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    invoke-interface {p1, v0, v1, v2}, Lcom/kwad/sdk/core/e/a/b;->w(Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method
