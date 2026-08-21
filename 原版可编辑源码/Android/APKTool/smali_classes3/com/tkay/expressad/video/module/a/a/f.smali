.class public Lcom/tkay/expressad/video/module/a/a/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/module/a/a;


# static fields
.field protected static final U:Ljava/lang/String; = "NotifyListener"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 2

    .line 12
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onNotify,type="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",pt="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method
