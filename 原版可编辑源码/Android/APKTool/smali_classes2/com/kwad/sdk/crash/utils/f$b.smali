.class final Lcom/kwad/sdk/crash/utils/f$b;
.super Lcom/kwad/sdk/crash/utils/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/crash/utils/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# instance fields
.field private final aBR:Ljava/io/PrintWriter;


# direct methods
.method constructor <init>(Ljava/io/PrintWriter;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/crash/utils/f$a;-><init>(B)V

    iput-object p1, p0, Lcom/kwad/sdk/crash/utils/f$b;->aBR:Ljava/io/PrintWriter;

    return-void
.end method


# virtual methods
.method final Fm()Ljava/lang/Object;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/utils/f$b;->aBR:Ljava/io/PrintWriter;

    return-object v0
.end method

.method final println(Ljava/lang/Object;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/utils/f$b;->aBR:Ljava/io/PrintWriter;

    invoke-virtual {v0, p1}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    return-void
.end method
