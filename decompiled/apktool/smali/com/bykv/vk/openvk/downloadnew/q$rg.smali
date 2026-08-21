.class public Lcom/bykv/vk/openvk/downloadnew/q$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/q;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "rg"
.end annotation


# instance fields
.field public df:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public pt:Ljava/net/HttpURLConnection;

.field public q:I

.field public rg:Ljava/io/InputStream;


# direct methods
.method public constructor <init>(Ljava/io/InputStream;Ljava/util/Map;ILjava/net/HttpURLConnection;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/InputStream;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;I",
            "Ljava/net/HttpURLConnection;",
            ")V"
        }
    .end annotation

    .line 97
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 98
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->rg:Ljava/io/InputStream;

    .line 99
    iput-object p2, p0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->df:Ljava/util/Map;

    .line 100
    iput p3, p0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->q:I

    .line 101
    iput-object p4, p0, Lcom/bykv/vk/openvk/downloadnew/q$rg;->pt:Ljava/net/HttpURLConnection;

    return-void
.end method
