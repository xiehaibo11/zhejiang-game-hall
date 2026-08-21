.class final Lcom/kwad/components/core/e/d/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/e/d/c;->a(Ljava/lang/String;ILcom/kwad/sdk/core/download/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ka:Lcom/kwad/components/core/e/d/c;

.field final synthetic Kb:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/core/e/d/c;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/c$2;->Ka:Lcom/kwad/components/core/e/d/c;

    iput-boolean p2, p0, Lcom/kwad/components/core/e/d/c$2;->Kb:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    const-class v0, Lcom/kwad/components/a/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    return-void
.end method
