.class public final synthetic Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;
.super Ljava/lang/Object;
.source "lambda"

# interfaces
.implements Lokhttp3/Interceptor;


# static fields
.field public static final synthetic INSTANCE:Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;


# direct methods
.method static synthetic constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;->INSTANCE:Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;

    return-void
.end method

.method private synthetic constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final intercept(Lokhttp3/Interceptor$Chain;)Lokhttp3/Response;
    .locals 0

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->lambda$new$0(Lokhttp3/Interceptor$Chain;)Lokhttp3/Response;

    move-result-object p1

    return-object p1
.end method
