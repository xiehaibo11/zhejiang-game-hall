.class public Lcom/kwad/sdk/core/report/a$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public code:I

.field public msg:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/core/report/a$a;->code:I

    iput-object p2, p0, Lcom/kwad/sdk/core/report/a$a;->msg:Ljava/lang/String;

    return-void
.end method
