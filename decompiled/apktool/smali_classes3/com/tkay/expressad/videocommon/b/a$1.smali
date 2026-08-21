.class final Lcom/tkay/expressad/videocommon/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/videocommon/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/videocommon/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/videocommon/b/a;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$1;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(JI)V
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a$1;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a$1;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v0, p1, p2, p3}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;JI)V

    :cond_0
    return-void
.end method
